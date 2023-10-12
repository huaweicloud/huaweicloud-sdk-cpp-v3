

#include "huaweicloud/lts/v2/model/TopnRequstBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TopnRequstBody::TopnRequstBody()
{
    endTime_ = 0L;
    endTimeIsSet_ = false;
    isDesc_ = false;
    isDescIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    topn_ = 0;
    topnIsSet_ = false;
    filterIsSet_ = false;
    searchListIsSet_ = false;
}

TopnRequstBody::~TopnRequstBody() = default;

void TopnRequstBody::validate()
{
}

web::json::value TopnRequstBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(isDescIsSet_) {
        val[utility::conversions::to_string_t("is_desc")] = ModelBase::toJson(isDesc_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(topnIsSet_) {
        val[utility::conversions::to_string_t("topn")] = ModelBase::toJson(topn_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(searchListIsSet_) {
        val[utility::conversions::to_string_t("search_list")] = ModelBase::toJson(searchList_);
    }

    return val;
}
bool TopnRequstBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_desc"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topn"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchList(refVal);
        }
    }
    return ok;
}


int64_t TopnRequstBody::getEndTime() const
{
    return endTime_;
}

void TopnRequstBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TopnRequstBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TopnRequstBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

bool TopnRequstBody::isIsDesc() const
{
    return isDesc_;
}

void TopnRequstBody::setIsDesc(bool value)
{
    isDesc_ = value;
    isDescIsSet_ = true;
}

bool TopnRequstBody::isDescIsSet() const
{
    return isDescIsSet_;
}

void TopnRequstBody::unsetisDesc()
{
    isDescIsSet_ = false;
}

std::string TopnRequstBody::getResourceType() const
{
    return resourceType_;
}

void TopnRequstBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool TopnRequstBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void TopnRequstBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string TopnRequstBody::getSortBy() const
{
    return sortBy_;
}

void TopnRequstBody::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool TopnRequstBody::sortByIsSet() const
{
    return sortByIsSet_;
}

void TopnRequstBody::unsetsortBy()
{
    sortByIsSet_ = false;
}

int64_t TopnRequstBody::getStartTime() const
{
    return startTime_;
}

void TopnRequstBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TopnRequstBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TopnRequstBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t TopnRequstBody::getTopn() const
{
    return topn_;
}

void TopnRequstBody::setTopn(int32_t value)
{
    topn_ = value;
    topnIsSet_ = true;
}

bool TopnRequstBody::topnIsSet() const
{
    return topnIsSet_;
}

void TopnRequstBody::unsettopn()
{
    topnIsSet_ = false;
}

std::map<std::string, std::string>& TopnRequstBody::getFilter()
{
    return filter_;
}

void TopnRequstBody::setFilter(const std::map<std::string, std::string>& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool TopnRequstBody::filterIsSet() const
{
    return filterIsSet_;
}

void TopnRequstBody::unsetfilter()
{
    filterIsSet_ = false;
}

std::vector<std::string>& TopnRequstBody::getSearchList()
{
    return searchList_;
}

void TopnRequstBody::setSearchList(const std::vector<std::string>& value)
{
    searchList_ = value;
    searchListIsSet_ = true;
}

bool TopnRequstBody::searchListIsSet() const
{
    return searchListIsSet_;
}

void TopnRequstBody::unsetsearchList()
{
    searchListIsSet_ = false;
}

}
}
}
}
}


