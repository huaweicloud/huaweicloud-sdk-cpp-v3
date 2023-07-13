

#include "huaweicloud/lts/v2/model/Topics.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Topics::Topics()
{
    name_ = "";
    nameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    pushPolicy_ = 0;
    pushPolicyIsSet_ = false;
}

Topics::~Topics() = default;

void Topics::validate()
{
}

web::json::value Topics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(pushPolicyIsSet_) {
        val[utility::conversions::to_string_t("push_policy")] = ModelBase::toJson(pushPolicy_);
    }

    return val;
}

bool Topics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_policy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushPolicy(refVal);
        }
    }
    return ok;
}

std::string Topics::getName() const
{
    return name_;
}

void Topics::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Topics::nameIsSet() const
{
    return nameIsSet_;
}

void Topics::unsetname()
{
    nameIsSet_ = false;
}

std::string Topics::getTopicUrn() const
{
    return topicUrn_;
}

void Topics::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool Topics::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void Topics::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string Topics::getDisplayName() const
{
    return displayName_;
}

void Topics::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool Topics::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void Topics::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

int32_t Topics::getPushPolicy() const
{
    return pushPolicy_;
}

void Topics::setPushPolicy(int32_t value)
{
    pushPolicy_ = value;
    pushPolicyIsSet_ = true;
}

bool Topics::pushPolicyIsSet() const
{
    return pushPolicyIsSet_;
}

void Topics::unsetpushPolicy()
{
    pushPolicyIsSet_ = false;
}

}
}
}
}
}


