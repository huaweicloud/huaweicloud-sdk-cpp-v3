

#include "huaweicloud/modelarts/v1/model/ShowWorkflowsTodolistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowsTodolistResponse::ShowWorkflowsTodolistResponse()
{
    itemsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowWorkflowsTodolistResponse::~ShowWorkflowsTodolistResponse() = default;

void ShowWorkflowsTodolistResponse::validate()
{
}

web::json::value ShowWorkflowsTodolistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowWorkflowsTodolistResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkflowTodo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<WorkflowTodo>& ShowWorkflowsTodolistResponse::getItems()
{
    return items_;
}

void ShowWorkflowsTodolistResponse::setItems(const std::vector<WorkflowTodo>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ShowWorkflowsTodolistResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ShowWorkflowsTodolistResponse::unsetitems()
{
    itemsIsSet_ = false;
}

int32_t ShowWorkflowsTodolistResponse::getTotal() const
{
    return total_;
}

void ShowWorkflowsTodolistResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowWorkflowsTodolistResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowWorkflowsTodolistResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


