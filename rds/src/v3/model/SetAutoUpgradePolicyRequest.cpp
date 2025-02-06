

#include "huaweicloud/rds/v3/model/SetAutoUpgradePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAutoUpgradePolicyRequest::SetAutoUpgradePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetAutoUpgradePolicyRequest::~SetAutoUpgradePolicyRequest() = default;

void SetAutoUpgradePolicyRequest::validate()
{
}

web::json::value SetAutoUpgradePolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetAutoUpgradePolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CustomerModifyAutoUpgradePolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetAutoUpgradePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAutoUpgradePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAutoUpgradePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAutoUpgradePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetAutoUpgradePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetAutoUpgradePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetAutoUpgradePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetAutoUpgradePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

CustomerModifyAutoUpgradePolicyReq SetAutoUpgradePolicyRequest::getBody() const
{
    return body_;
}

void SetAutoUpgradePolicyRequest::setBody(const CustomerModifyAutoUpgradePolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAutoUpgradePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAutoUpgradePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


