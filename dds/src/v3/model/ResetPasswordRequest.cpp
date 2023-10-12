

#include "huaweicloud/dds/v3/model/ResetPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResetPasswordRequest::ResetPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetPasswordRequest::~ResetPasswordRequest() = default;

void ResetPasswordRequest::validate()
{
}

web::json::value ResetPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ResetPasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResetPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResetPasswordRequestBody ResetPasswordRequest::getBody() const
{
    return body_;
}

void ResetPasswordRequest::setBody(const ResetPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


