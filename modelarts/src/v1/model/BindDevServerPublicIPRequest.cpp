

#include "huaweicloud/modelarts/v1/model/BindDevServerPublicIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BindDevServerPublicIPRequest::BindDevServerPublicIPRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

BindDevServerPublicIPRequest::~BindDevServerPublicIPRequest() = default;

void BindDevServerPublicIPRequest::validate()
{
}

web::json::value BindDevServerPublicIPRequest::toJson() const
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
bool BindDevServerPublicIPRequest::fromJson(const web::json::value& val)
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
            ServerBindPublicIPRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindDevServerPublicIPRequest::getId() const
{
    return id_;
}

void BindDevServerPublicIPRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BindDevServerPublicIPRequest::idIsSet() const
{
    return idIsSet_;
}

void BindDevServerPublicIPRequest::unsetid()
{
    idIsSet_ = false;
}

ServerBindPublicIPRequest BindDevServerPublicIPRequest::getBody() const
{
    return body_;
}

void BindDevServerPublicIPRequest::setBody(const ServerBindPublicIPRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindDevServerPublicIPRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindDevServerPublicIPRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


