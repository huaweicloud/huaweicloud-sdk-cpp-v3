

#include "huaweicloud/csms/v1/model/UpdateGrantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateGrantRequest::UpdateGrantRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGrantRequest::~UpdateGrantRequest() = default;

void UpdateGrantRequest::validate()
{
}

web::json::value UpdateGrantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGrantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            GrantSecretReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateGrantRequest::getResourceId() const
{
    return resourceId_;
}

void UpdateGrantRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool UpdateGrantRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void UpdateGrantRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

GrantSecretReqBody UpdateGrantRequest::getBody() const
{
    return body_;
}

void UpdateGrantRequest::setBody(const GrantSecretReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGrantRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGrantRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


