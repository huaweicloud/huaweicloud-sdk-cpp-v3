

#include "huaweicloud/modelarts/v1/model/StartDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartDevServerRequest::StartDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

StartDevServerRequest::~StartDevServerRequest() = default;

void StartDevServerRequest::validate()
{
}

web::json::value StartDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartDevServerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServerStartRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartDevServerRequest::getId() const
{
    return id_;
}

void StartDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void StartDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

ServerStartRequest StartDevServerRequest::getBody() const
{
    return body_;
}

void StartDevServerRequest::setBody(const ServerStartRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartDevServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartDevServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


