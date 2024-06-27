

#include "huaweicloud/gaussdb/v3/model/ResumeStarRocksDataReplication.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResumeStarRocksDataReplication::ResumeStarRocksDataReplication()
{
    taskName_ = "";
    taskNameIsSet_ = false;
}

ResumeStarRocksDataReplication::~ResumeStarRocksDataReplication() = default;

void ResumeStarRocksDataReplication::validate()
{
}

web::json::value ResumeStarRocksDataReplication::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }

    return val;
}
bool ResumeStarRocksDataReplication::fromJson(const web::json::value& val)
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


std::string ResumeStarRocksDataReplication::getTaskName() const
{
    return taskName_;
}

void ResumeStarRocksDataReplication::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ResumeStarRocksDataReplication::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ResumeStarRocksDataReplication::unsettaskName()
{
    taskNameIsSet_ = false;
}

}
}
}
}
}


