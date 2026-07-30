

#include "huaweicloud/modelarts/v1/model/OutputModelResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




OutputModelResp::OutputModelResp()
{
    obsIsSet_ = false;
}

OutputModelResp::~OutputModelResp() = default;

void OutputModelResp::validate()
{
}

web::json::value OutputModelResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool OutputModelResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            ObsModelResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


ObsModelResp OutputModelResp::getObs() const
{
    return obs_;
}

void OutputModelResp::setObs(const ObsModelResp& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool OutputModelResp::obsIsSet() const
{
    return obsIsSet_;
}

void OutputModelResp::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


