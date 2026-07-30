

#include "huaweicloud/modelarts/v1/model/TaskEnv.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskEnv::TaskEnv()
{
    envsIsSet_ = false;
}

TaskEnv::~TaskEnv() = default;

void TaskEnv::validate()
{
}

web::json::value TaskEnv::toJson() const
{
    web::json::value val = web::json::value::object();

    if(envsIsSet_) {
        val[utility::conversions::to_string_t("envs")] = ModelBase::toJson(envs_);
    }

    return val;
}
bool TaskEnv::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("envs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("envs"));
        if(!fieldValue.is_null())
        {
            std::vector<EnvVar> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvs(refVal);
        }
    }
    return ok;
}


std::vector<EnvVar>& TaskEnv::getEnvs()
{
    return envs_;
}

void TaskEnv::setEnvs(const std::vector<EnvVar>& value)
{
    envs_ = value;
    envsIsSet_ = true;
}

bool TaskEnv::envsIsSet() const
{
    return envsIsSet_;
}

void TaskEnv::unsetenvs()
{
    envsIsSet_ = false;
}

}
}
}
}
}


