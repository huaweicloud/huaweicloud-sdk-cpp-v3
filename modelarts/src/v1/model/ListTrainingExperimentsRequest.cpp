

#include "huaweicloud/modelarts/v1/model/ListTrainingExperimentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingExperimentsRequest::ListTrainingExperimentsRequest()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ListTrainingExperimentsRequest::~ListTrainingExperimentsRequest() = default;

void ListTrainingExperimentsRequest::validate()
{
}

web::json::value ListTrainingExperimentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ListTrainingExperimentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


std::string ListTrainingExperimentsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListTrainingExperimentsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListTrainingExperimentsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListTrainingExperimentsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int32_t ListTrainingExperimentsRequest::getLimit() const
{
    return limit_;
}

void ListTrainingExperimentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingExperimentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingExperimentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingExperimentsRequest::getOffset() const
{
    return offset_;
}

void ListTrainingExperimentsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingExperimentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingExperimentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTrainingExperimentsRequest::getSortBy() const
{
    return sortBy_;
}

void ListTrainingExperimentsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListTrainingExperimentsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListTrainingExperimentsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListTrainingExperimentsRequest::getOrder() const
{
    return order_;
}

void ListTrainingExperimentsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListTrainingExperimentsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListTrainingExperimentsRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


