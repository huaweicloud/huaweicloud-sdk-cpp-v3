

#include "huaweicloud/modelarts/v1/model/ListTrainingJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobsResponse::ListTrainingJobsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    groupBy_ = "";
    groupByIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    aiProject_ = "";
    aiProjectIsSet_ = false;
    trainType_ = "";
    trainTypeIsSet_ = false;
    itemsIsSet_ = false;
}

ListTrainingJobsResponse::~ListTrainingJobsResponse() = default;

void ListTrainingJobsResponse::validate()
{
}

web::json::value ListTrainingJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
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
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(aiProjectIsSet_) {
        val[utility::conversions::to_string_t("ai_project")] = ModelBase::toJson(aiProject_);
    }
    if(trainTypeIsSet_) {
        val[utility::conversions::to_string_t("train_type")] = ModelBase::toJson(trainType_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListTrainingJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ai_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ai_project"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAiProject(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<JobResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListTrainingJobsResponse::getTotal() const
{
    return total_;
}

void ListTrainingJobsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTrainingJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTrainingJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListTrainingJobsResponse::getCount() const
{
    return count_;
}

void ListTrainingJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTrainingJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTrainingJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListTrainingJobsResponse::getLimit() const
{
    return limit_;
}

void ListTrainingJobsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingJobsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingJobsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingJobsResponse::getOffset() const
{
    return offset_;
}

void ListTrainingJobsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingJobsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingJobsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTrainingJobsResponse::getSortBy() const
{
    return sortBy_;
}

void ListTrainingJobsResponse::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListTrainingJobsResponse::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListTrainingJobsResponse::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListTrainingJobsResponse::getOrder() const
{
    return order_;
}

void ListTrainingJobsResponse::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListTrainingJobsResponse::orderIsSet() const
{
    return orderIsSet_;
}

void ListTrainingJobsResponse::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListTrainingJobsResponse::getGroupBy() const
{
    return groupBy_;
}

void ListTrainingJobsResponse::setGroupBy(const std::string& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool ListTrainingJobsResponse::groupByIsSet() const
{
    return groupByIsSet_;
}

void ListTrainingJobsResponse::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string ListTrainingJobsResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ListTrainingJobsResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListTrainingJobsResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListTrainingJobsResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListTrainingJobsResponse::getAiProject() const
{
    return aiProject_;
}

void ListTrainingJobsResponse::setAiProject(const std::string& value)
{
    aiProject_ = value;
    aiProjectIsSet_ = true;
}

bool ListTrainingJobsResponse::aiProjectIsSet() const
{
    return aiProjectIsSet_;
}

void ListTrainingJobsResponse::unsetaiProject()
{
    aiProjectIsSet_ = false;
}

std::string ListTrainingJobsResponse::getTrainType() const
{
    return trainType_;
}

void ListTrainingJobsResponse::setTrainType(const std::string& value)
{
    trainType_ = value;
    trainTypeIsSet_ = true;
}

bool ListTrainingJobsResponse::trainTypeIsSet() const
{
    return trainTypeIsSet_;
}

void ListTrainingJobsResponse::unsettrainType()
{
    trainTypeIsSet_ = false;
}

std::vector<JobResponse>& ListTrainingJobsResponse::getItems()
{
    return items_;
}

void ListTrainingJobsResponse::setItems(const std::vector<JobResponse>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListTrainingJobsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListTrainingJobsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


