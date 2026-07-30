

#include "huaweicloud/modelarts/v1/model/ChangeDevServerOSRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ChangeDevServerOSRequest::ChangeDevServerOSRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeDevServerOSRequest::~ChangeDevServerOSRequest() = default;

void ChangeDevServerOSRequest::validate()
{
}

web::json::value ChangeDevServerOSRequest::toJson() const
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
bool ChangeDevServerOSRequest::fromJson(const web::json::value& val)
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
            ServerOsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeDevServerOSRequest::getId() const
{
    return id_;
}

void ChangeDevServerOSRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ChangeDevServerOSRequest::idIsSet() const
{
    return idIsSet_;
}

void ChangeDevServerOSRequest::unsetid()
{
    idIsSet_ = false;
}

ServerOsRequest ChangeDevServerOSRequest::getBody() const
{
    return body_;
}

void ChangeDevServerOSRequest::setBody(const ServerOsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeDevServerOSRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeDevServerOSRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


