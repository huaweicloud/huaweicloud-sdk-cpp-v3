

#include "huaweicloud/modelarts/v1/model/ListWorkflowExecutionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowExecutionsResponse::ListWorkflowExecutionsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListWorkflowExecutionsResponse::~ListWorkflowExecutionsResponse() = default;

void ListWorkflowExecutionsResponse::validate()
{
}

web::json::value ListWorkflowExecutionsResponse::toJson() const
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

    return val;
}
bool ListWorkflowExecutionsResponse::fromJson(const web::json::value& val)
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
            std::vector<WorkflowExecutionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListWorkflowExecutionsResponse::getTotal() const
{
    return total_;
}

void ListWorkflowExecutionsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkflowExecutionsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkflowExecutionsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListWorkflowExecutionsResponse::getCount() const
{
    return count_;
}

void ListWorkflowExecutionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListWorkflowExecutionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListWorkflowExecutionsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<WorkflowExecutionResp>& ListWorkflowExecutionsResponse::getItems()
{
    return items_;
}

void ListWorkflowExecutionsResponse::setItems(const std::vector<WorkflowExecutionResp>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWorkflowExecutionsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWorkflowExecutionsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


