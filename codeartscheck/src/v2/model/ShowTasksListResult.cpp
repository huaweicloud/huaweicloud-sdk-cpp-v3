

#include "huaweicloud/codeartscheck/v2/model/ShowTasksListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasksListResult::ShowTasksListResult()
{
    infoIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowTasksListResult::~ShowTasksListResult() = default;

void ShowTasksListResult::validate()
{
}

web::json::value ShowTasksListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(infoIsSet_) {
        val[utility::conversions::to_string_t("info")] = ModelBase::toJson(info_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowTasksListResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("info"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskBasicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInfo(refVal);
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


std::vector<TaskBasicInfo>& ShowTasksListResult::getInfo()
{
    return info_;
}

void ShowTasksListResult::setInfo(const std::vector<TaskBasicInfo>& value)
{
    info_ = value;
    infoIsSet_ = true;
}

bool ShowTasksListResult::infoIsSet() const
{
    return infoIsSet_;
}

void ShowTasksListResult::unsetinfo()
{
    infoIsSet_ = false;
}

int32_t ShowTasksListResult::getTotal() const
{
    return total_;
}

void ShowTasksListResult::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowTasksListResult::totalIsSet() const
{
    return totalIsSet_;
}

void ShowTasksListResult::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


