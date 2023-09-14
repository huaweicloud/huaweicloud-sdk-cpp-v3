

#include "huaweicloud/smn/v2/model/ListTopicsItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicsItem::ListTopicsItem()
{
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    pushPolicy_ = 0;
    pushPolicyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
}

ListTopicsItem::~ListTopicsItem() = default;

void ListTopicsItem::validate()
{
}

web::json::value ListTopicsItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(pushPolicyIsSet_) {
        val[utility::conversions::to_string_t("push_policy")] = ModelBase::toJson(pushPolicy_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }

    return val;
}

bool ListTopicsItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicId(refVal);
        }
    }
    return ok;
}

std::string ListTopicsItem::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicsItem::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicsItem::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicsItem::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListTopicsItem::getName() const
{
    return name_;
}

void ListTopicsItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTopicsItem::nameIsSet() const
{
    return nameIsSet_;
}

void ListTopicsItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTopicsItem::getDisplayName() const
{
    return displayName_;
}

void ListTopicsItem::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ListTopicsItem::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ListTopicsItem::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

int32_t ListTopicsItem::getPushPolicy() const
{
    return pushPolicy_;
}

void ListTopicsItem::setPushPolicy(int32_t value)
{
    pushPolicy_ = value;
    pushPolicyIsSet_ = true;
}

bool ListTopicsItem::pushPolicyIsSet() const
{
    return pushPolicyIsSet_;
}

void ListTopicsItem::unsetpushPolicy()
{
    pushPolicyIsSet_ = false;
}

std::string ListTopicsItem::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTopicsItem::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTopicsItem::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTopicsItem::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListTopicsItem::getTopicId() const
{
    return topicId_;
}

void ListTopicsItem::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool ListTopicsItem::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void ListTopicsItem::unsettopicId()
{
    topicIdIsSet_ = false;
}

}
}
}
}
}


