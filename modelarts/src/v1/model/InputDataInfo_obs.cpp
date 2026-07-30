

#include "huaweicloud/modelarts/v1/model/InputDataInfo_obs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfo_obs::InputDataInfo_obs()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

InputDataInfo_obs::~InputDataInfo_obs() = default;

void InputDataInfo_obs::validate()
{
}

web::json::value InputDataInfo_obs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool InputDataInfo_obs::fromJson(const web::json::value& val)
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


std::string InputDataInfo_obs::getObsUrl() const
{
    return obsUrl_;
}

void InputDataInfo_obs::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool InputDataInfo_obs::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void InputDataInfo_obs::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


