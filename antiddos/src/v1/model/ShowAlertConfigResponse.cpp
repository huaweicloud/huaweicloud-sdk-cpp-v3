

#include "huaweicloud/antiddos/v1/model/ShowAlertConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowAlertConfigResponse::ShowAlertConfigResponse()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    warnConfigIsSet_ = false;
}

ShowAlertConfigResponse::~ShowAlertConfigResponse() = default;

void ShowAlertConfigResponse::validate()
{
}

web::json::value ShowAlertConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(warnConfigIsSet_) {
        val[utility::conversions::to_string_t("warn_config")] = ModelBase::toJson(warnConfig_);
    }

    return val;
}
bool ShowAlertConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warn_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warn_config"));
        if(!fieldValue.is_null())
        {
            AlertConfigResp_warn_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarnConfig(refVal);
        }
    }
    return ok;
}


std::string ShowAlertConfigResponse::getTopicUrn() const
{
    return topicUrn_;
}

void ShowAlertConfigResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ShowAlertConfigResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ShowAlertConfigResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ShowAlertConfigResponse::getDisplayName() const
{
    return displayName_;
}

void ShowAlertConfigResponse::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ShowAlertConfigResponse::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ShowAlertConfigResponse::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

AlertConfigResp_warn_config ShowAlertConfigResponse::getWarnConfig() const
{
    return warnConfig_;
}

void ShowAlertConfigResponse::setWarnConfig(const AlertConfigResp_warn_config& value)
{
    warnConfig_ = value;
    warnConfigIsSet_ = true;
}

bool ShowAlertConfigResponse::warnConfigIsSet() const
{
    return warnConfigIsSet_;
}

void ShowAlertConfigResponse::unsetwarnConfig()
{
    warnConfigIsSet_ = false;
}

}
}
}
}
}


