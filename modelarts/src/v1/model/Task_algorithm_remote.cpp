

#include "huaweicloud/modelarts/v1/model/Task_algorithm_remote.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm_remote::Task_algorithm_remote()
{
    obsIsSet_ = false;
}

Task_algorithm_remote::~Task_algorithm_remote() = default;

void Task_algorithm_remote::validate()
{
}

web::json::value Task_algorithm_remote::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool Task_algorithm_remote::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            Task_algorithm_remote_obs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


Task_algorithm_remote_obs Task_algorithm_remote::getObs() const
{
    return obs_;
}

void Task_algorithm_remote::setObs(const Task_algorithm_remote_obs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool Task_algorithm_remote::obsIsSet() const
{
    return obsIsSet_;
}

void Task_algorithm_remote::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


