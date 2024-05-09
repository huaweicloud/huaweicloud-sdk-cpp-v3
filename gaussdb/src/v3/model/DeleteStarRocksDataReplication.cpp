

#include "huaweicloud/gaussdb/v3/model/DeleteStarRocksDataReplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRocksDataReplication::DeleteStarRocksDataReplication()
{
    taskName_ = "";
    taskNameIsSet_ = false;
}

DeleteStarRocksDataReplication::~DeleteStarRocksDataReplication() = default;

void DeleteStarRocksDataReplication::validate()
{
}

web::json::value DeleteStarRocksDataReplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool DeleteStarRocksDataReplication::fromJson(const web::json::value& val)
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


std::string DeleteStarRocksDataReplication::getTaskName() const
{
    return taskName_;
}

void DeleteStarRocksDataReplication::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool DeleteStarRocksDataReplication::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void DeleteStarRocksDataReplication::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


