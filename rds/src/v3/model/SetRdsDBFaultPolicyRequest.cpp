

#include "huaweicloud/rds/v3/model/SetRdsDBFaultPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetRdsDBFaultPolicyRequest::SetRdsDBFaultPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetRdsDBFaultPolicyRequest::~SetRdsDBFaultPolicyRequest() = default;

void SetRdsDBFaultPolicyRequest::validate()
{
}

web::json::value SetRdsDBFaultPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetRdsDBFaultPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            RdsDBFaultPolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRdsDBFaultPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetRdsDBFaultPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetRdsDBFaultPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetRdsDBFaultPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetRdsDBFaultPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetRdsDBFaultPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetRdsDBFaultPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetRdsDBFaultPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RdsDBFaultPolicyReq SetRdsDBFaultPolicyRequest::getBody() const
{
    return body_;
}

void SetRdsDBFaultPolicyRequest::setBody(const RdsDBFaultPolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRdsDBFaultPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRdsDBFaultPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


