

#include "huaweicloud/lts/v2/model/ListCriteriasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListCriteriasRequest::ListCriteriasRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    topicId_ = "";
    topicIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
}

ListCriteriasRequest::~ListCriteriasRequest() = default;

void ListCriteriasRequest::validate()
{
}

web::json::value ListCriteriasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(topicIdIsSet_) {
        val[utility::conversions::to_string_t("topic_id")] = ModelBase::toJson(topicId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }

    return val;
}

bool ListCriteriasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    return ok;
}


std::string ListCriteriasRequest::getGroupId() const
{
    return groupId_;
}

void ListCriteriasRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListCriteriasRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListCriteriasRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListCriteriasRequest::getTopicId() const
{
    return topicId_;
}

void ListCriteriasRequest::setTopicId(const std::string& value)
{
    topicId_ = value;
    topicIdIsSet_ = true;
}

bool ListCriteriasRequest::topicIdIsSet() const
{
    return topicIdIsSet_;
}

void ListCriteriasRequest::unsettopicId()
{
    topicIdIsSet_ = false;
}

std::string ListCriteriasRequest::getContentType() const
{
    return contentType_;
}

void ListCriteriasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListCriteriasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListCriteriasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListCriteriasRequest::getSearchType() const
{
    return searchType_;
}

void ListCriteriasRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool ListCriteriasRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void ListCriteriasRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

}
}
}
}
}


