from werkzeug.wrappers import Response
import json
from validate import *

def convertType(validator):
    if validator == str :
        return "string"
    elif validator == datetime:
        return "datetime"
    elif validator == time:
        return "time"
    elif validator == int:
        return "integer"
    elif validator == float:
        return "float"
    elif validator == boolean:
        return "boolean"
    else:
        return "string"


def api_doc(apis, api = None) : 
    response = {}
    response['apiVersion'] = "0.2"
    response['swaggerVersion'] = "1.1"
    response['basePath'] = ""
    response['apis'] = []
    
    if api:
        if api in apis:
            params = []
            for key, val in apis[api]['arguments'].iteritems():
                param = {}
                param['name'] = key
                param['paramType'] = 'query'
                param['description'] = val.description
                param['dataType'] = convertType(val.validator)
                param['required'] = val.required
                param['allowMultiple'] = val.repeated
                params.append(param)

            response['resourcePath'] = "/"+api
            response['apis'].append({
                    "path" : "/"+api+".{format}",
                    "description" : "",
                    "operations" : [{
                            "httpMethod" : "GET",
                            "summary" : "",
                            "nickname" : api,
                            "responseClass" : "void",
                            "parameters" : params
                            }
                            ]
                                    })

    else:
        for key, val in apis.iteritems() :
            response['apis'].append({"path":"/doc.{format}/"+key, "description" : ""})


    return response

