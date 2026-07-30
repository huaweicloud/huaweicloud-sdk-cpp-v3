

#include "huaweicloud/modelarts/v1/model/RemoteResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RemoteResp::RemoteResp()
{
    obsIsSet_ = false;
}

RemoteResp::~RemoteResp() = default;

void RemoteResp::validate()
{
}

web::json::value RemoteResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool RemoteResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            RemoteObsResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


RemoteObsResp RemoteResp::getObs() const
{
    return obs_;
}

void RemoteResp::setObs(const RemoteObsResp& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool RemoteResp::obsIsSet() const
{
    return obsIsSet_;
}

void RemoteResp::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


