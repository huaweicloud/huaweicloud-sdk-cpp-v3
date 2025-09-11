

#include "huaweicloud/dbss/v1/model/ResetDbEncryptPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResetDbEncryptPasswordRequest::ResetDbEncryptPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetDbEncryptPasswordRequest::~ResetDbEncryptPasswordRequest() = default;

void ResetDbEncryptPasswordRequest::validate()
{
}

web::json::value ResetDbEncryptPasswordRequest::toJson() const
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
bool ResetDbEncryptPasswordRequest::fromJson(const web::json::value& val)
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
            ChangePasswordRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetDbEncryptPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetDbEncryptPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetDbEncryptPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetDbEncryptPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangePasswordRequest ResetDbEncryptPasswordRequest::getBody() const
{
    return body_;
}

void ResetDbEncryptPasswordRequest::setBody(const ChangePasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetDbEncryptPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetDbEncryptPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


