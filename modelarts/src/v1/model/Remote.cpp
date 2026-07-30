

#include "huaweicloud/modelarts/v1/model/Remote.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Remote::Remote()
{
    obsIsSet_ = false;
}

Remote::~Remote() = default;

void Remote::validate()
{
}

web::json::value Remote::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsIsSet_) {
        val[utility::conversions::to_string_t("obs")] = ModelBase::toJson(obs_);
    }

    return val;
}
bool Remote::fromJson(const web::json::value& val)
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


RemoteObs Remote::getObs() const
{
    return obs_;
}

void Remote::setObs(const RemoteObs& value)
{
    obs_ = value;
    obsIsSet_ = true;
}

bool Remote::obsIsSet() const
{
    return obsIsSet_;
}

void Remote::unsetobs()
{
    obsIsSet_ = false;
}

}
}
}
}
}


