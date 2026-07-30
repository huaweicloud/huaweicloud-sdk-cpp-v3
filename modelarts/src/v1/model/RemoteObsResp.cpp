

#include "huaweicloud/modelarts/v1/model/RemoteObsResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RemoteObsResp::RemoteObsResp()
{
    obsUrl_ = "";
    obsUrlIsSet_ = false;
}

RemoteObsResp::~RemoteObsResp() = default;

void RemoteObsResp::validate()
{
}

web::json::value RemoteObsResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsUrlIsSet_) {
        val[utility::conversions::to_string_t("obs_url")] = ModelBase::toJson(obsUrl_);
    }

    return val;
}
bool RemoteObsResp::fromJson(const web::json::value& val)
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


std::string RemoteObsResp::getObsUrl() const
{
    return obsUrl_;
}

void RemoteObsResp::setObsUrl(const std::string& value)
{
    obsUrl_ = value;
    obsUrlIsSet_ = true;
}

bool RemoteObsResp::obsUrlIsSet() const
{
    return obsUrlIsSet_;
}

void RemoteObsResp::unsetobsUrl()
{
    obsUrlIsSet_ = false;
}

}
}
}
}
}


