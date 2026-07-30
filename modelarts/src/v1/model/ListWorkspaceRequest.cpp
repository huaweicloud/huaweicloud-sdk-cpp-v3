

#include "huaweicloud/modelarts/v1/model/ListWorkspaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkspaceRequest::ListWorkspaceRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    filterAccessible_ = false;
    filterAccessibleIsSet_ = false;
}

ListWorkspaceRequest::~ListWorkspaceRequest() = default;

void ListWorkspaceRequest::validate()
{
}

web::json::value ListWorkspaceRequest::toJson() const
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filterAccessibleIsSet_) {
        val[utility::conversions::to_string_t("filter_accessible")] = ModelBase::toJson(filterAccessible_);
    }

    return val;
}
bool ListWorkspaceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter_accessible"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_accessible"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterAccessible(refVal);
        }
    }
    return ok;
}


int32_t ListWorkspaceRequest::getOffset() const
{
    return offset_;
}

void ListWorkspaceRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkspaceRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkspaceRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWorkspaceRequest::getLimit() const
{
    return limit_;
}

void ListWorkspaceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkspaceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkspaceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListWorkspaceRequest::getSortBy() const
{
    return sortBy_;
}

void ListWorkspaceRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListWorkspaceRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListWorkspaceRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListWorkspaceRequest::getOrder() const
{
    return order_;
}

void ListWorkspaceRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListWorkspaceRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListWorkspaceRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListWorkspaceRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListWorkspaceRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListWorkspaceRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListWorkspaceRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListWorkspaceRequest::getName() const
{
    return name_;
}

void ListWorkspaceRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListWorkspaceRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListWorkspaceRequest::unsetname()
{
    nameIsSet_ = false;
}

bool ListWorkspaceRequest::isFilterAccessible() const
{
    return filterAccessible_;
}

void ListWorkspaceRequest::setFilterAccessible(bool value)
{
    filterAccessible_ = value;
    filterAccessibleIsSet_ = true;
}

bool ListWorkspaceRequest::filterAccessibleIsSet() const
{
    return filterAccessibleIsSet_;
}

void ListWorkspaceRequest::unsetfilterAccessible()
{
    filterAccessibleIsSet_ = false;
}

}
}
}
}
}


