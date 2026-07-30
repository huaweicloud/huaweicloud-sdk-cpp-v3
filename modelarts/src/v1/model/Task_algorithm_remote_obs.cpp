

#include "huaweicloud/modelarts/v1/model/Task_algorithm_remote_obs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_algorithm_remote_obs::Task_algorithm_remote_obs()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

Task_algorithm_remote_obs::~Task_algorithm_remote_obs() = default;

void Task_algorithm_remote_obs::validate()
{
}

web::json::value Task_algorithm_remote_obs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool Task_algorithm_remote_obs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUrl(refVal);
        }
    }
    return ok;
}


std::string Task_algorithm_remote_obs::getObsUrl() const
{
    return obsUrl_;
}

void Task_algorithm_remote_obs::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool Task_algorithm_remote_obs::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void Task_algorithm_remote_obs::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


