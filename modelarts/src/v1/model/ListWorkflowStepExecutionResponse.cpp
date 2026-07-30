

#include "huaweicloud/modelarts/v1/model/ListWorkflowStepExecutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowStepExecutionResponse::ListWorkflowStepExecutionResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
    defaultOrder_ = "";
    defaultOrderIsSet_ = false;
    compareColumnsIsSet_ = false;
}

ListWorkflowStepExecutionResponse::~ListWorkflowStepExecutionResponse() = default;

void ListWorkflowStepExecutionResponse::validate()
{
}

web::json::value ListWorkflowStepExecutionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }
    if(defaultOrderIsSet_) {
        val[utility::conversions::to_string_t("default_order")] = ModelBase::toJson(defaultOrder_);
    }
    if(compareColumnsIsSet_) {
        val[utility::conversions::to_string_t("compare_columns")] = ModelBase::toJson(compareColumns_);
    }

    return val;
}
bool ListWorkflowStepExecutionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<StepExecutionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_columns"));
        if(!fieldValue.is_null())
        {
            CompareColumns refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareColumns(refVal);
        }
    }
    return ok;
}


int32_t ListWorkflowStepExecutionResponse::getTotal() const
{
    return total_;
}

void ListWorkflowStepExecutionResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkflowStepExecutionResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkflowStepExecutionResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListWorkflowStepExecutionResponse::getCount() const
{
    return count_;
}

void ListWorkflowStepExecutionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListWorkflowStepExecutionResponse::countIsSet() const
{
    return countIsSet_;
}

void ListWorkflowStepExecutionResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<StepExecutionResp>& ListWorkflowStepExecutionResponse::getItems()
{
    return items_;
}

void ListWorkflowStepExecutionResponse::setItems(const std::vector<StepExecutionResp>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWorkflowStepExecutionResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWorkflowStepExecutionResponse::unsetitems()
{
    itemsIsSet_ = false;
}

std::string ListWorkflowStepExecutionResponse::getDefaultOrder() const
{
    return defaultOrder_;
}

void ListWorkflowStepExecutionResponse::setDefaultOrder(const std::string& value)
{
    defaultOrder_ = value;
    defaultOrderIsSet_ = true;
}

bool ListWorkflowStepExecutionResponse::defaultOrderIsSet() const
{
    return defaultOrderIsSet_;
}

void ListWorkflowStepExecutionResponse::unsetdefaultOrder()
{
    defaultOrderIsSet_ = false;
}

CompareColumns ListWorkflowStepExecutionResponse::getCompareColumns() const
{
    return compareColumns_;
}

void ListWorkflowStepExecutionResponse::setCompareColumns(const CompareColumns& value)
{
    compareColumns_ = value;
    compareColumnsIsSet_ = true;
}

bool ListWorkflowStepExecutionResponse::compareColumnsIsSet() const
{
    return compareColumnsIsSet_;
}

void ListWorkflowStepExecutionResponse::unsetcompareColumns()
{
    compareColumnsIsSet_ = false;
}

}
}
}
}
}


