

#include "huaweicloud/smn/v2/model/ListTopicDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicDetailsResponse::ListTopicDetailsResponse()
{
    updateTime_ = "";
    updateTimeIsSet_ = false;
    pushPolicy_ = 0;
    pushPolicyIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
}

ListTopicDetailsResponse::~ListTopicDetailsResponse() = default;

void ListTopicDetailsResponse::validate()
{
}

web::json::value ListTopicDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(pushPolicyIsSet_) {
        val[utility::conversions::to_string_t("push_policy")] = ModelBase::toJson(pushPolicy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }

    return val;
}

bool ListTopicDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
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

std::string ListTopicDetailsResponse::getUpdateTime() const
{
    return updateTime_;
}

void ListTopicDetailsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListTopicDetailsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListTopicDetailsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t ListTopicDetailsResponse::getPushPolicy() const
{
    return pushPolicy_;
}

void ListTopicDetailsResponse::setPushPolicy(int32_t value)
{
    pushPolicy_ = value;
    pushPolicyIsSet_ = true;
}

bool ListTopicDetailsResponse::pushPolicyIsSet() const
{
    return pushPolicyIsSet_;
}

void ListTopicDetailsResponse::unsetpushPolicy()
{
    pushPolicyIsSet_ = false;
}

std::string ListTopicDetailsResponse::getCreateTime() const
{
    return createTime_;
}

void ListTopicDetailsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListTopicDetailsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListTopicDetailsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListTopicDetailsResponse::getName() const
{
    return name_;
}

void ListTopicDetailsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTopicDetailsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ListTopicDetailsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTopicDetailsResponse::getTopicUrn() const
{
    return topicUrn_;
}

void ListTopicDetailsResponse::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ListTopicDetailsResponse::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ListTopicDetailsResponse::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ListTopicDetailsResponse::getDisplayName() const
{
    return displayName_;
}

void ListTopicDetailsResponse::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ListTopicDetailsResponse::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ListTopicDetailsResponse::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ListTopicDetailsResponse::getRequestId() const
{
    return requestId_;
}

void ListTopicDetailsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTopicDetailsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTopicDetailsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string ListTopicDetailsResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTopicDetailsResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTopicDetailsResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTopicDetailsResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListTopicDetailsResponse::getTopicId() const
{
    return topicId_;
}

void ListTopicDetailsResponse::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool ListTopicDetailsResponse::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void ListTopicDetailsResponse::unsettopicId()
{
    topicIdIsSet_ = false;
}

}
}
}
}
}


