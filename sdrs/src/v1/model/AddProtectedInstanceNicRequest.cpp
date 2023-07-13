

#include "huaweicloud/sdrs/v1/model/AddProtectedInstanceNicRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




AddProtectedInstanceNicRequest::AddProtectedInstanceNicRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddProtectedInstanceNicRequest::~AddProtectedInstanceNicRequest() = default;

void AddProtectedInstanceNicRequest::validate()
{
}

web::json::value AddProtectedInstanceNicRequest::toJson() const
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

bool AddProtectedInstanceNicRequest::fromJson(const web::json::value& val)
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
            ProtectedInstanceAddNicRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string AddProtectedInstanceNicRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void AddProtectedInstanceNicRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool AddProtectedInstanceNicRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void AddProtectedInstanceNicRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

ProtectedInstanceAddNicRequestBody AddProtectedInstanceNicRequest::getBody() const
{
    return body_;
}

void AddProtectedInstanceNicRequest::setBody(const ProtectedInstanceAddNicRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddProtectedInstanceNicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddProtectedInstanceNicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


