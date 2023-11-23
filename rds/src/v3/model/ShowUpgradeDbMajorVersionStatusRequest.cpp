

#include "huaweicloud/rds/v3/model/ShowUpgradeDbMajorVersionStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowUpgradeDbMajorVersionStatusRequest::ShowUpgradeDbMajorVersionStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowUpgradeDbMajorVersionStatusRequest::~ShowUpgradeDbMajorVersionStatusRequest() = default;

void ShowUpgradeDbMajorVersionStatusRequest::validate()
{
}

web::json::value ShowUpgradeDbMajorVersionStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowUpgradeDbMajorVersionStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
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
    return ok;
}


std::string ShowUpgradeDbMajorVersionStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowUpgradeDbMajorVersionStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowUpgradeDbMajorVersionStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusRequest::getAction() const
{
    return action_;
}

void ShowUpgradeDbMajorVersionStatusRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ShowUpgradeDbMajorVersionStatusRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowUpgradeDbMajorVersionStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowUpgradeDbMajorVersionStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


