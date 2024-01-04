

#include "huaweicloud/smn/v2/model/ListTopicsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicsRequest::ListTopicsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    fuzzyName_ = "";
    fuzzyNameIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    fuzzyDisplayName_ = "";
    fuzzyDisplayNameIsSet_ = false;
}

ListTopicsRequest::~ListTopicsRequest() = default;

void ListTopicsRequest::validate()
{
}

web::json::value ListTopicsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(fuzzyNameIsSet_) {
        val[utility::conversions::to_string_t("fuzzy_name")] = ModelBase::toJson(fuzzyName_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }
    if(fuzzyDisplayNameIsSet_) {
        val[utility::conversions::to_string_t("fuzzy_display_name")] = ModelBase::toJson(fuzzyDisplayName_);
    }

    return val;
}
bool ListTopicsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuzzy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuzzy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuzzyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fuzzy_display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuzzy_display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuzzyDisplayName(refVal);
        }
    }
    return ok;
}


int32_t ListTopicsRequest::getOffset() const
{
    return offset_;
}

void ListTopicsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTopicsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTopicsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTopicsRequest::getLimit() const
{
    return limit_;
}

void ListTopicsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTopicsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTopicsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTopicsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTopicsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTopicsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTopicsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListTopicsRequest::getName() const
{
    return name_;
}

void ListTopicsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTopicsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTopicsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTopicsRequest::getFuzzyName() const
{
    return fuzzyName_;
}

void ListTopicsRequest::setFuzzyName(const std::string& value)
{
    fuzzyName_ = value;
    fuzzyNameIsSet_ = true;
}

bool ListTopicsRequest::fuzzyNameIsSet() const
{
    return fuzzyNameIsSet_;
}

void ListTopicsRequest::unsetfuzzyName()
{
    fuzzyNameIsSet_ = false;
}

std::string ListTopicsRequest::getTopicId() const
{
    return topicId_;
}

void ListTopicsRequest::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool ListTopicsRequest::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void ListTopicsRequest::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string ListTopicsRequest::getFuzzyDisplayName() const
{
    return fuzzyDisplayName_;
}

void ListTopicsRequest::setFuzzyDisplayName(const std::string& value)
{
    fuzzyDisplayName_ = value;
    fuzzyDisplayNameIsSet_ = true;
}

bool ListTopicsRequest::fuzzyDisplayNameIsSet() const
{
    return fuzzyDisplayNameIsSet_;
}

void ListTopicsRequest::unsetfuzzyDisplayName()
{
    fuzzyDisplayNameIsSet_ = false;
}

}
}
}
}
}


