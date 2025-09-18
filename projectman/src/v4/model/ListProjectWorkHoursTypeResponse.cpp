

#include "huaweicloud/projectman/v4/model/ListProjectWorkHoursTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectWorkHoursTypeResponse::ListProjectWorkHoursTypeResponse()
{
    workHoursTypesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListProjectWorkHoursTypeResponse::~ListProjectWorkHoursTypeResponse() = default;

void ListProjectWorkHoursTypeResponse::validate()
{
}

web::json::value ListProjectWorkHoursTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workHoursTypesIsSet_) {
        val[utility::conversions::to_string_t("work_hours_types")] = ModelBase::toJson(workHoursTypes_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectWorkHoursTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_hours_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_hours_types"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkHoursType> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkHoursTypes(refVal);
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


std::vector<WorkHoursType>& ListProjectWorkHoursTypeResponse::getWorkHoursTypes()
{
    return workHoursTypes_;
}

void ListProjectWorkHoursTypeResponse::setWorkHoursTypes(const std::vector<WorkHoursType>& value)
{
    workHoursTypes_ = value;
    workHoursTypesIsSet_ = true;
}

bool ListProjectWorkHoursTypeResponse::workHoursTypesIsSet() const
{
    return workHoursTypesIsSet_;
}

void ListProjectWorkHoursTypeResponse::unsetworkHoursTypes()
{
    workHoursTypesIsSet_ = false;
}

int32_t ListProjectWorkHoursTypeResponse::getTotal() const
{
    return total_;
}

void ListProjectWorkHoursTypeResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectWorkHoursTypeResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectWorkHoursTypeResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


