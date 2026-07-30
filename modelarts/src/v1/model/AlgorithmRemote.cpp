

#include "huaweicloud/modelarts/v1/model/AlgorithmRemote.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmRemote::AlgorithmRemote()
{
    obsIsSet_ = false;
}

AlgorithmRemote::~AlgorithmRemote() = default;

void AlgorithmRemote::validate()
{
}

web::json::value AlgorithmRemote::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool AlgorithmRemote::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs"));
        if(!fieldValue.is_null())
        {
            RemoteObs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObs(refVal);
        }
    }
    return ok;
}


RemoteObs AlgorithmRemote::getObs() const
{
    return obs_;
}

void AlgorithmRemote::setObs(const RemoteObs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool AlgorithmRemote::obsIsSet() const
{
    return obsIsSet_;
}

void AlgorithmRemote::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


