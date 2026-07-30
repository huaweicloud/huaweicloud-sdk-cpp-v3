

#include "huaweicloud/modelarts/v1/model/JobSearches.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobSearches::JobSearches()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    trainType_ = "";
    trainTypeIsSet_ = false;
    filtersIsSet_ = false;
}

JobSearches::~JobSearches() = default;

void JobSearches::validate()
{
}

web::json::value JobSearches::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(trainTypeIsSet_) {
        val[utility::conversions::to_string_t("train_type")] = ModelBase::toJson(trainType_);
    }
    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(filters_);
    }

    return val;
}
bool JobSearches::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filters"));
        if(!fieldValue.is_null())
        {
            std::vector<Filter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
    return ok;
}


int32_t JobSearches::getOffset() const
{
    return offset_;
}

void JobSearches::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool JobSearches::offsetIsSet() const
{
    return offsetIsSet_;
}

void JobSearches::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t JobSearches::getLimit() const
{
    return limit_;
}

void JobSearches::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool JobSearches::limitIsSet() const
{
    return limitIsSet_;
}

void JobSearches::unsetlimit()
{
    limitIsSet_ = false;
}

std::string JobSearches::getSortBy() const
{
    return sortBy_;
}

void JobSearches::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool JobSearches::sortByIsSet() const
{
    return sortByIsSet_;
}

void JobSearches::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string JobSearches::getOrder() const
{
    return order_;
}

void JobSearches::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool JobSearches::orderIsSet() const
{
    return orderIsSet_;
}

void JobSearches::unsetorder()
{
    orderIsSet_ = false;
}

std::string JobSearches::getGroupBy() const
{
    return groupBy_;
}

void JobSearches::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool JobSearches::groupByIsSet() const
{
    return groupByIsSet_;
}

void JobSearches::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string JobSearches::getWorkspaceId() const
{
    return workspaceId_;
}

void JobSearches::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool JobSearches::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void JobSearches::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string JobSearches::getTrainType() const
{
    return trainType_;
}

void JobSearches::setTrainType(const std::string& value)
{
    trainType_ = value;
    trainTypeIsSet_ = true;
}

bool JobSearches::trainTypeIsSet() const
{
    return trainTypeIsSet_;
}

void JobSearches::unsettrainType()
{
    trainTypeIsSet_ = false;
}

std::vector<Filter>& JobSearches::getFilters()
{
    return filters_;
}

void JobSearches::setFilters(const std::vector<Filter>& value)
{
    filters_ = value;
    filtersIsSet_ = true;
}

bool JobSearches::filtersIsSet() const
{
    return filtersIsSet_;
}

void JobSearches::unsetfilters()
{
    filtersIsSet_ = false;
}

}
}
}
}
}


