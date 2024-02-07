

#include "huaweicloud/geip/v3/model/AssociateInstanceGlobalEipRequestBody_global_eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




AssociateInstanceGlobalEipRequestBody_global_eip::AssociateInstanceGlobalEipRequestBody_global_eip()
{
    associateInstanceInfoIsSet_ = false;
    gcBandwidthInfoIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody_global_eip::~AssociateInstanceGlobalEipRequestBody_global_eip() = default;

void AssociateInstanceGlobalEipRequestBody_global_eip::validate()
{
}

web::json::value AssociateInstanceGlobalEipRequestBody_global_eip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associateInstanceInfoIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info")] = ModelBase::toJson(associateInstanceInfo_);
    }
    if(gcBandwidthInfoIsSet_) {
        val[utility::conversions::to_string_t("gc_bandwidth_info")] = ModelBase::toJson(gcBandwidthInfo_);
    }

    return val;
}
bool AssociateInstanceGlobalEipRequestBody_global_eip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info"));
        if(!fieldValue.is_null())
        {
            AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gc_bandwidth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gc_bandwidth_info"));
        if(!fieldValue.is_null())
        {
            AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcBandwidthInfo(refVal);
        }
    }
    return ok;
}


AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info AssociateInstanceGlobalEipRequestBody_global_eip::getAssociateInstanceInfo() const
{
    return associateInstanceInfo_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip::setAssociateInstanceInfo(const AssociateInstanceGlobalEipRequestBody_global_eip_associate_instance_info& value)
{
    associateInstanceInfo_ = value;
    associateInstanceInfoIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip::associateInstanceInfoIsSet() const
{
    return associateInstanceInfoIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip::unsetassociateInstanceInfo()
{
    associateInstanceInfoIsSet_ = false;
}

AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info AssociateInstanceGlobalEipRequestBody_global_eip::getGcBandwidthInfo() const
{
    return gcBandwidthInfo_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip::setGcBandwidthInfo(const AssociateInstanceGlobalEipRequestBody_global_eip_gc_bandwidth_info& value)
{
    gcBandwidthInfo_ = value;
    gcBandwidthInfoIsSet_ = true;
}

bool AssociateInstanceGlobalEipRequestBody_global_eip::gcBandwidthInfoIsSet() const
{
    return gcBandwidthInfoIsSet_;
}

void AssociateInstanceGlobalEipRequestBody_global_eip::unsetgcBandwidthInfo()
{
    gcBandwidthInfoIsSet_ = false;
}

}
}
}
}
}


