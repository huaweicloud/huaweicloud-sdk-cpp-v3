

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceRequest::DeleteProtectedInstanceRequest()
{
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteProtectedInstanceRequest::~DeleteProtectedInstanceRequest() = default;

void DeleteProtectedInstanceRequest::validate()
{
}

web::json::value DeleteProtectedInstanceRequest::toJson() const
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

bool DeleteProtectedInstanceRequest::fromJson(const web::json::value& val)
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
            DeleteProtectedInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteProtectedInstanceRequest::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void DeleteProtectedInstanceRequest::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool DeleteProtectedInstanceRequest::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void DeleteProtectedInstanceRequest::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

DeleteProtectedInstanceRequestBody DeleteProtectedInstanceRequest::getBody() const
{
    return body_;
}

void DeleteProtectedInstanceRequest::setBody(const DeleteProtectedInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteProtectedInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteProtectedInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


