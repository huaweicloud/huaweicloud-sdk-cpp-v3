

#include "huaweicloud/modelarts/v1/model/InputDataInfoResp_obs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputDataInfoResp_obs::InputDataInfoResp_obs()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

InputDataInfoResp_obs::~InputDataInfoResp_obs() = default;

void InputDataInfoResp_obs::validate()
{
}

web::json::value InputDataInfoResp_obs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool InputDataInfoResp_obs::fromJson(const web::json::value& val)
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


std::string InputDataInfoResp_obs::getObsUrl() const
{
    return obsUrl_;
}

void InputDataInfoResp_obs::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool InputDataInfoResp_obs::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void InputDataInfoResp_obs::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


