

#include "huaweicloud/rds/v3/model/CheckInstanceForUpgradeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CheckInstanceForUpgradeRequest::CheckInstanceForUpgradeRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckInstanceForUpgradeRequest::~CheckInstanceForUpgradeRequest() = default;

void CheckInstanceForUpgradeRequest::validate()
{
}

web::json::value CheckInstanceForUpgradeRequest::toJson() const
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
bool CheckInstanceForUpgradeRequest::fromJson(const web::json::value& val)
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
            RdsUpgradePrecheckV3Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckInstanceForUpgradeRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckInstanceForUpgradeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckInstanceForUpgradeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckInstanceForUpgradeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CheckInstanceForUpgradeRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckInstanceForUpgradeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckInstanceForUpgradeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckInstanceForUpgradeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RdsUpgradePrecheckV3Req CheckInstanceForUpgradeRequest::getBody() const
{
    return body_;
}

void CheckInstanceForUpgradeRequest::setBody(const RdsUpgradePrecheckV3Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckInstanceForUpgradeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckInstanceForUpgradeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


