

#include "huaweicloud/cloudtest/v1/model/AlertLevel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertLevel::AlertLevel()
{
    alertChannelIsSet_ = false;
    alertGroupsIsSet_ = false;
    alertTemplateId_ = "";
    alertTemplateIdIsSet_ = false;
    alertTimes_ = 0;
    alertTimesIsSet_ = false;
}

AlertLevel::~AlertLevel() = default;

void AlertLevel::validate()
{
}

web::json::value AlertLevel::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertChannelIsSet_) {
        val[utility::conversions::to_string_t("alert_channel")] = ModelBase::toJson(alertChannel_);
    }
    if(alertGroupsIsSet_) {
        val[utility::conversions::to_string_t("alertGroups")] = ModelBase::toJson(alertGroups_);
    }
    if(alertTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("alertTemplateId")] = ModelBase::toJson(alertTemplateId_);
    }
    if(alertTimesIsSet_) {
        val[utility::conversions::to_string_t("alertTimes")] = ModelBase::toJson(alertTimes_);
    }

    return val;
}
bool AlertLevel::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_channel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_channel"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertChannel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertTemplateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertTemplateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTimes(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AlertLevel::getAlertChannel()
{
    return alertChannel_;
}

void AlertLevel::setAlertChannel(const std::vector<std::string>& value)
{
    alertChannel_ = value;
    alertChannelIsSet_ = true;
}

bool AlertLevel::alertChannelIsSet() const
{
    return alertChannelIsSet_;
}

void AlertLevel::unsetalertChannel()
{
    alertChannelIsSet_ = false;
}

std::vector<AlertGroup>& AlertLevel::getAlertGroups()
{
    return alertGroups_;
}

void AlertLevel::setAlertGroups(const std::vector<AlertGroup>& value)
{
    alertGroups_ = value;
    alertGroupsIsSet_ = true;
}

bool AlertLevel::alertGroupsIsSet() const
{
    return alertGroupsIsSet_;
}

void AlertLevel::unsetalertGroups()
{
    alertGroupsIsSet_ = false;
}

std::string AlertLevel::getAlertTemplateId() const
{
    return alertTemplateId_;
}

void AlertLevel::setAlertTemplateId(const std::string& value)
{
    alertTemplateId_ = value;
    alertTemplateIdIsSet_ = true;
}

bool AlertLevel::alertTemplateIdIsSet() const
{
    return alertTemplateIdIsSet_;
}

void AlertLevel::unsetalertTemplateId()
{
    alertTemplateIdIsSet_ = false;
}

int32_t AlertLevel::getAlertTimes() const
{
    return alertTimes_;
}

void AlertLevel::setAlertTimes(int32_t value)
{
    alertTimes_ = value;
    alertTimesIsSet_ = true;
}

bool AlertLevel::alertTimesIsSet() const
{
    return alertTimesIsSet_;
}

void AlertLevel::unsetalertTimes()
{
    alertTimesIsSet_ = false;
}

}
}
}
}
}


