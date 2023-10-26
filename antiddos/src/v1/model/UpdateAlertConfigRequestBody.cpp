

#include "huaweicloud/antiddos/v1/model/UpdateAlertConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateAlertConfigRequestBody::UpdateAlertConfigRequestBody()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    warnConfigIsSet_ = false;
}

UpdateAlertConfigRequestBody::~UpdateAlertConfigRequestBody() = default;

void UpdateAlertConfigRequestBody::validate()
{
}

web::json::value UpdateAlertConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(warnConfigIsSet_) {
        val[utility::conversions::to_string_t("warn_config")] = ModelBase::toJson(warnConfig_);
    }

    return val;
}
bool UpdateAlertConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warn_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warn_config"));
        if(!fieldValue.is_null())
        {
            UpdateAlertConfigRequestBody_warn_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarnConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateAlertConfigRequestBody::getDisplayName() const
{
    return displayName_;
}

void UpdateAlertConfigRequestBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool UpdateAlertConfigRequestBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void UpdateAlertConfigRequestBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string UpdateAlertConfigRequestBody::getTopicUrn() const
{
    return topicUrn_;
}

void UpdateAlertConfigRequestBody::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool UpdateAlertConfigRequestBody::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void UpdateAlertConfigRequestBody::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

UpdateAlertConfigRequestBody_warn_config UpdateAlertConfigRequestBody::getWarnConfig() const
{
    return warnConfig_;
}

void UpdateAlertConfigRequestBody::setWarnConfig(const UpdateAlertConfigRequestBody_warn_config& value)
{
    warnConfig_ = value;
    warnConfigIsSet_ = true;
}

bool UpdateAlertConfigRequestBody::warnConfigIsSet() const
{
    return warnConfigIsSet_;
}

void UpdateAlertConfigRequestBody::unsetwarnConfig()
{
    warnConfigIsSet_ = false;
}

}
}
}
}
}


