

#include "huaweicloud/smn/v2/model/ListTopicsWithAssociatedResourcesItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicsWithAssociatedResourcesItem::ListTopicsWithAssociatedResourcesItem()
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
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    tagsIsSet_ = false;
    attributesIsSet_ = false;
    logtanksIsSet_ = false;
}

ListTopicsWithAssociatedResourcesItem::~ListTopicsWithAssociatedResourcesItem() = default;

void ListTopicsWithAssociatedResourcesItem::validate()
{
}

web::json::value ListTopicsWithAssociatedResourcesItem::toJson() const
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }
    if(logtanksIsSet_) {
        val[utility::conversions::to_string_t("logtanks")] = ModelBase::toJson(logtanks_);
    }

    return val;
}
bool ListTopicsWithAssociatedResourcesItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            TopicAccessPolicyAttribute refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logtanks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logtanks"));
        if(!fieldValue.is_null())
        {
            std::vector<LogtankItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogtanks(refVal);
        }
    }
    return ok;
}


std::string ListTopicsWithAssociatedResourcesItem::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicsWithAssociatedResourcesItem::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getName() const
{
    return name_;
}

void ListTopicsWithAssociatedResourcesItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::nameIsSet() const
{
    return nameIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getDisplayName() const
{
    return displayName_;
}

void ListTopicsWithAssociatedResourcesItem::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

int32_t ListTopicsWithAssociatedResourcesItem::getPushPolicy() const
{
    return pushPolicy_;
}

void ListTopicsWithAssociatedResourcesItem::setPushPolicy(int32_t value)
{
    pushPolicy_ = value;
    pushPolicyIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::pushPolicyIsSet() const
{
    return pushPolicyIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetpushPolicy()
{
    pushPolicyIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTopicsWithAssociatedResourcesItem::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getTopicId() const
{
    return topicId_;
}

void ListTopicsWithAssociatedResourcesItem::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getCreateTime() const
{
    return createTime_;
}

void ListTopicsWithAssociatedResourcesItem::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListTopicsWithAssociatedResourcesItem::getUpdateTime() const
{
    return updateTime_;
}

void ListTopicsWithAssociatedResourcesItem::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<ResourceTag>& ListTopicsWithAssociatedResourcesItem::getTags()
{
    return tags_;
}

void ListTopicsWithAssociatedResourcesItem::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsettags()
{
    tagsIsSet_ = false;
}

TopicAccessPolicyAttribute ListTopicsWithAssociatedResourcesItem::getAttributes() const
{
    return attributes_;
}

void ListTopicsWithAssociatedResourcesItem::setAttributes(const TopicAccessPolicyAttribute& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::attributesIsSet() const
{
    return attributesIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetattributes()
{
    attributesIsSet_ = false;
}

std::vector<LogtankItem>& ListTopicsWithAssociatedResourcesItem::getLogtanks()
{
    return logtanks_;
}

void ListTopicsWithAssociatedResourcesItem::setLogtanks(const std::vector<LogtankItem>& value)
{
    logtanks_ = value;
    logtanksIsSet_ = true;
}

bool ListTopicsWithAssociatedResourcesItem::logtanksIsSet() const
{
    return logtanksIsSet_;
}

void ListTopicsWithAssociatedResourcesItem::unsetlogtanks()
{
    logtanksIsSet_ = false;
}

}
}
}
}
}


