

#include "huaweicloud/projectman/v4/model/ListWorkitemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemsResponse::ListWorkitemsResponse()
{
    workItemsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListWorkitemsResponse::~ListWorkitemsResponse() = default;

void ListWorkitemsResponse::validate()
{
}

web::json::value ListWorkitemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workItemsIsSet_) {
        val[utility::conversions::to_string_t("work_items")] = ModelBase::toJson(workItems_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListWorkitemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_items"));
        if(!fieldValue.is_null())
        {
            std::vector<Workitems> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItems(refVal);
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


std::vector<Workitems>& ListWorkitemsResponse::getWorkItems()
{
    return workItems_;
}

void ListWorkitemsResponse::setWorkItems(const std::vector<Workitems>& value)
{
    workItems_ = value;
    workItemsIsSet_ = true;
}

bool ListWorkitemsResponse::workItemsIsSet() const
{
    return workItemsIsSet_;
}

void ListWorkitemsResponse::unsetworkItems()
{
    workItemsIsSet_ = false;
}

int32_t ListWorkitemsResponse::getTotal() const
{
    return total_;
}

void ListWorkitemsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWorkitemsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWorkitemsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


