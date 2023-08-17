

#include "huaweicloud/ecs/v2/model/PrePaidServerRootVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerRootVolume::PrePaidServerRootVolume()
{
    volumetype_ = "";
    volumetypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
    extendparamIsSet_ = false;
    metadataIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    hwpassthrough_ = false;
    hwpassthroughIsSet_ = false;
}

PrePaidServerRootVolume::~PrePaidServerRootVolume() = default;

void PrePaidServerRootVolume::validate()
{
}

web::json::value PrePaidServerRootVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumetypeIsSet_) {
        val[utility::conversions::to_string_t("volumetype")] = ModelBase::toJson(volumetype_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(hwpassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwpassthrough_);
    }

    return val;
}

bool PrePaidServerRootVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PrePaidServerRootVolumeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PrePaidServerRootVolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:passthrough"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:passthrough"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwpassthrough(refVal);
        }
    }
    return ok;
}

std::string PrePaidServerRootVolume::getVolumetype() const
{
    return volumetype_;
}

void PrePaidServerRootVolume::setVolumetype(const std::string& value)
{
    volumetype_ = value;
    volumetypeIsSet_ = true;
}

bool PrePaidServerRootVolume::volumetypeIsSet() const
{
    return volumetypeIsSet_;
}

void PrePaidServerRootVolume::unsetvolumetype()
{
    volumetypeIsSet_ = false;
}

int32_t PrePaidServerRootVolume::getSize() const
{
    return size_;
}

void PrePaidServerRootVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PrePaidServerRootVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void PrePaidServerRootVolume::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t PrePaidServerRootVolume::getIops() const
{
    return iops_;
}

void PrePaidServerRootVolume::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool PrePaidServerRootVolume::iopsIsSet() const
{
    return iopsIsSet_;
}

void PrePaidServerRootVolume::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t PrePaidServerRootVolume::getThroughput() const
{
    return throughput_;
}

void PrePaidServerRootVolume::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool PrePaidServerRootVolume::throughputIsSet() const
{
    return throughputIsSet_;
}

void PrePaidServerRootVolume::unsetthroughput()
{
    throughputIsSet_ = false;
}

PrePaidServerRootVolumeExtendParam PrePaidServerRootVolume::getExtendparam() const
{
    return extendparam_;
}

void PrePaidServerRootVolume::setExtendparam(const PrePaidServerRootVolumeExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PrePaidServerRootVolume::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PrePaidServerRootVolume::unsetextendparam()
{
    extendparamIsSet_ = false;
}

PrePaidServerRootVolumeMetadata PrePaidServerRootVolume::getMetadata() const
{
    return metadata_;
}

void PrePaidServerRootVolume::setMetadata(const PrePaidServerRootVolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PrePaidServerRootVolume::metadataIsSet() const
{
    return metadataIsSet_;
}

void PrePaidServerRootVolume::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string PrePaidServerRootVolume::getClusterType() const
{
    return clusterType_;
}

void PrePaidServerRootVolume::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool PrePaidServerRootVolume::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void PrePaidServerRootVolume::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string PrePaidServerRootVolume::getClusterId() const
{
    return clusterId_;
}

void PrePaidServerRootVolume::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool PrePaidServerRootVolume::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void PrePaidServerRootVolume::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

bool PrePaidServerRootVolume::isHwpassthrough() const
{
    return hwpassthrough_;
}

void PrePaidServerRootVolume::setHwpassthrough(bool value)
{
    hwpassthrough_ = value;
    hwpassthroughIsSet_ = true;
}

bool PrePaidServerRootVolume::hwpassthroughIsSet() const
{
    return hwpassthroughIsSet_;
}

void PrePaidServerRootVolume::unsethwpassthrough()
{
    hwpassthroughIsSet_ = false;
}

}
}
}
}
}


