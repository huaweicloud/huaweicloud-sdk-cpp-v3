

#include "huaweicloud/cbr/v1/model/ProtectableReplicationCapabilitiesRespRegion.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectableReplicationCapabilitiesRespRegion::ProtectableReplicationCapabilitiesRespRegion()
{
    name_ = "";
    nameIsSet_ = false;
    replicationDestinationsIsSet_ = false;
}

ProtectableReplicationCapabilitiesRespRegion::~ProtectableReplicationCapabilitiesRespRegion() = default;

void ProtectableReplicationCapabilitiesRespRegion::validate()
{
}

web::json::value ProtectableReplicationCapabilitiesRespRegion::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(replicationDestinationsIsSet_) {
        val[utility::conversions::to_string_t("replication_destinations")] = ModelBase::toJson(replicationDestinations_);
    }

    return val;
}

bool ProtectableReplicationCapabilitiesRespRegion::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_destinations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_destinations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationDestinations(refVal);
        }
    }
    return ok;
}

std::string ProtectableReplicationCapabilitiesRespRegion::getName() const
{
    return name_;
}

void ProtectableReplicationCapabilitiesRespRegion::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProtectableReplicationCapabilitiesRespRegion::nameIsSet() const
{
    return nameIsSet_;
}

void ProtectableReplicationCapabilitiesRespRegion::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ProtectableReplicationCapabilitiesRespRegion::getReplicationDestinations()
{
    return replicationDestinations_;
}

void ProtectableReplicationCapabilitiesRespRegion::setReplicationDestinations(const std::vector<std::string>& value)
{
    replicationDestinations_ = value;
    replicationDestinationsIsSet_ = true;
}

bool ProtectableReplicationCapabilitiesRespRegion::replicationDestinationsIsSet() const
{
    return replicationDestinationsIsSet_;
}

void ProtectableReplicationCapabilitiesRespRegion::unsetreplicationDestinations()
{
    replicationDestinationsIsSet_ = false;
}

}
}
}
}
}


