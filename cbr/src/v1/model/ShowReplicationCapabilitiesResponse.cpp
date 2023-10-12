

#include "huaweicloud/cbr/v1/model/ShowReplicationCapabilitiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowReplicationCapabilitiesResponse::ShowReplicationCapabilitiesResponse()
{
    regionsIsSet_ = false;
}

ShowReplicationCapabilitiesResponse::~ShowReplicationCapabilitiesResponse() = default;

void ShowReplicationCapabilitiesResponse::validate()
{
}

web::json::value ShowReplicationCapabilitiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }

    return val;
}
bool ShowReplicationCapabilitiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectableReplicationCapabilitiesRespRegion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    return ok;
}


std::vector<ProtectableReplicationCapabilitiesRespRegion>& ShowReplicationCapabilitiesResponse::getRegions()
{
    return regions_;
}

void ShowReplicationCapabilitiesResponse::setRegions(const std::vector<ProtectableReplicationCapabilitiesRespRegion>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ShowReplicationCapabilitiesResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ShowReplicationCapabilitiesResponse::unsetregions()
{
    regionsIsSet_ = false;
}

}
}
}
}
}


