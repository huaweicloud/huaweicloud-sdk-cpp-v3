

#include "huaweicloud/live/v1/model/ListHarvestTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListHarvestTaskResponse::ListHarvestTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    harvestTasksIsSet_ = false;
}

ListHarvestTaskResponse::~ListHarvestTaskResponse() = default;

void ListHarvestTaskResponse::validate()
{
}

web::json::value ListHarvestTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(harvestTasksIsSet_) {
        val[utility::conversions::to_string_t("harvest_tasks")] = ModelBase::toJson(harvestTasks_);
    }

    return val;
}
bool ListHarvestTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("harvest_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("harvest_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<HarvestTaskCreateSucRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHarvestTasks(refVal);
        }
    }
    return ok;
}


int32_t ListHarvestTaskResponse::getTotal() const
{
    return total_;
}

void ListHarvestTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHarvestTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHarvestTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HarvestTaskCreateSucRsp>& ListHarvestTaskResponse::getHarvestTasks()
{
    return harvestTasks_;
}

void ListHarvestTaskResponse::setHarvestTasks(const std::vector<HarvestTaskCreateSucRsp>& value)
{
    harvestTasks_ = value;
    harvestTasksIsSet_ = true;
}

bool ListHarvestTaskResponse::harvestTasksIsSet() const
{
    return harvestTasksIsSet_;
}

void ListHarvestTaskResponse::unsetharvestTasks()
{
    harvestTasksIsSet_ = false;
}

}
}
}
}
}


