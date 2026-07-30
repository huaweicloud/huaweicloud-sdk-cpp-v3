

#include "huaweicloud/modelarts/v1/model/ReinstallDevServerOSRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ReinstallDevServerOSRequest::ReinstallDevServerOSRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

ReinstallDevServerOSRequest::~ReinstallDevServerOSRequest() = default;

void ReinstallDevServerOSRequest::validate()
{
}

web::json::value ReinstallDevServerOSRequest::toJson() const
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
bool ReinstallDevServerOSRequest::fromJson(const web::json::value& val)
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


std::string ReinstallDevServerOSRequest::getId() const
{
    return id_;
}

void ReinstallDevServerOSRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReinstallDevServerOSRequest::idIsSet() const
{
    return idIsSet_;
}

void ReinstallDevServerOSRequest::unsetid()
{
    idIsSet_ = false;
}

ServerOsRequest ReinstallDevServerOSRequest::getBody() const
{
    return body_;
}

void ReinstallDevServerOSRequest::setBody(const ServerOsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReinstallDevServerOSRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReinstallDevServerOSRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


