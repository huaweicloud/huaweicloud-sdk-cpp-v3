

#include "huaweicloud/modelarts/v1/model/ListWorkflowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowsResponse::ListWorkflowsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    itemsIsSet_ = false;
}

ListWorkflowsResponse::~ListWorkflowsResponse() = default;

void ListWorkflowsResponse::validate()
{
}

web::json::value ListWorkflowsResponse::toJson() const
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
bool ListWorkflowsResponse::fromJson(const web::json::value& val)
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
            std::vector<Workflow> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListWorkflowsResponse::getTotal() const
{
    return total_;
}

void ListWorkflowsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkflowsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkflowsResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListWorkflowsResponse::getCount() const
{
    return count_;
}

void ListWorkflowsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListWorkflowsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListWorkflowsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<Workflow>& ListWorkflowsResponse::getItems()
{
    return items_;
}

void ListWorkflowsResponse::setItems(const std::vector<Workflow>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListWorkflowsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListWorkflowsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


