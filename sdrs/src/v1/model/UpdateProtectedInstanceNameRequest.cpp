

#include "huaweicloud/sdrs/v1/model/UpdateProtectedInstanceNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectedInstanceNameRequest::UpdateProtectedInstanceNameRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProtectedInstanceNameRequest::~UpdateProtectedInstanceNameRequest() = default;

void UpdateProtectedInstanceNameRequest::validate()
{
}

web::json::value UpdateProtectedInstanceNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateProtectedInstanceNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProtectedInstanceNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProtectedInstanceNameRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void UpdateProtectedInstanceNameRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool UpdateProtectedInstanceNameRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void UpdateProtectedInstanceNameRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

UpdateProtectedInstanceNameRequestBody UpdateProtectedInstanceNameRequest::getBody() const
{
    return body_;
}

void UpdateProtectedInstanceNameRequest::setBody(const UpdateProtectedInstanceNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProtectedInstanceNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProtectedInstanceNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


