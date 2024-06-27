

#include "huaweicloud/gaussdb/v3/model/PauseStarRocksDataReplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




PauseStarRocksDataReplication::PauseStarRocksDataReplication()
{
    taskName_ = "";
    taskNameIsSet_ = false;
}

PauseStarRocksDataReplication::~PauseStarRocksDataReplication() = default;

void PauseStarRocksDataReplication::validate()
{
}

web::json::value PauseStarRocksDataReplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool PauseStarRocksDataReplication::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    return ok;
}


std::string PauseStarRocksDataReplication::getTaskName() const
{
    return taskName_;
}

void PauseStarRocksDataReplication::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool PauseStarRocksDataReplication::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void PauseStarRocksDataReplication::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


