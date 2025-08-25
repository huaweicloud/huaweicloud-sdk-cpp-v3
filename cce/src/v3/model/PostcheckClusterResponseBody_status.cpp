

#include "huaweicloud/cce/v3/model/PostcheckClusterResponseBody_status.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PostcheckClusterResponseBody_status::PostcheckClusterResponseBody_status()
{
    phase_ = "";
    phaseIsSet_ = false;
}

PostcheckClusterResponseBody_status::~PostcheckClusterResponseBody_status() = default;

void PostcheckClusterResponseBody_status::validate()
{
}

web::json::value PostcheckClusterResponseBody_status::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }

    return val;
}
bool PostcheckClusterResponseBody_status::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    return ok;
}


std::string PostcheckClusterResponseBody_status::getPhase() const
{
    return phase_;
}

void PostcheckClusterResponseBody_status::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool PostcheckClusterResponseBody_status::phaseIsSet() const
{
    return phaseIsSet_;
}

void PostcheckClusterResponseBody_status::unsetphase()
{
    phaseIsSet_ = false;
}

}
}
}
}
}


