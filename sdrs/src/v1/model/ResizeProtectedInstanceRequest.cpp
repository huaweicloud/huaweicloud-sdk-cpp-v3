

#include "huaweicloud/sdrs/v1/model/ResizeProtectedInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ResizeProtectedInstanceRequest::ResizeProtectedInstanceRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeProtectedInstanceRequest::~ResizeProtectedInstanceRequest() = default;

void ResizeProtectedInstanceRequest::validate()
{
}

web::json::value ResizeProtectedInstanceRequest::toJson() const
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

bool ResizeProtectedInstanceRequest::fromJson(const web::json::value& val)
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
            ResizeProtectedInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeProtectedInstanceRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void ResizeProtectedInstanceRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool ResizeProtectedInstanceRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void ResizeProtectedInstanceRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

ResizeProtectedInstanceRequestBody ResizeProtectedInstanceRequest::getBody() const
{
    return body_;
}

void ResizeProtectedInstanceRequest::setBody(const ResizeProtectedInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeProtectedInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeProtectedInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


