

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceNicRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceNicRequest::DeleteProtectedInstanceNicRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteProtectedInstanceNicRequest::~DeleteProtectedInstanceNicRequest() = default;

void DeleteProtectedInstanceNicRequest::validate()
{
}

web::json::value DeleteProtectedInstanceNicRequest::toJson() const
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
bool DeleteProtectedInstanceNicRequest::fromJson(const web::json::value& val)
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
            ProtectedInstanceDeleteNicRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteProtectedInstanceNicRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void DeleteProtectedInstanceNicRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool DeleteProtectedInstanceNicRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void DeleteProtectedInstanceNicRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

ProtectedInstanceDeleteNicRequestBody DeleteProtectedInstanceNicRequest::getBody() const
{
    return body_;
}

void DeleteProtectedInstanceNicRequest::setBody(const ProtectedInstanceDeleteNicRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteProtectedInstanceNicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteProtectedInstanceNicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


