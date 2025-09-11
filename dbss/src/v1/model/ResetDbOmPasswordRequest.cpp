

#include "huaweicloud/dbss/v1/model/ResetDbOmPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResetDbOmPasswordRequest::ResetDbOmPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetDbOmPasswordRequest::~ResetDbOmPasswordRequest() = default;

void ResetDbOmPasswordRequest::validate()
{
}

web::json::value ResetDbOmPasswordRequest::toJson() const
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
bool ResetDbOmPasswordRequest::fromJson(const web::json::value& val)
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


std::string ResetDbOmPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetDbOmPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetDbOmPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetDbOmPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangePasswordRequest ResetDbOmPasswordRequest::getBody() const
{
    return body_;
}

void ResetDbOmPasswordRequest::setBody(const ChangePasswordRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetDbOmPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetDbOmPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


