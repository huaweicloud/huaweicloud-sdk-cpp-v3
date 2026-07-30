

#include "huaweicloud/modelarts/v1/model/RemoteObs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RemoteObs::RemoteObs()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

RemoteObs::~RemoteObs() = default;

void RemoteObs::validate()
{
}

web::json::value RemoteObs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool RemoteObs::fromJson(const web::json::value& val)
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


std::string RemoteObs::getObsUrl() const
{
    return obsUrl_;
}

void RemoteObs::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool RemoteObs::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void RemoteObs::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


