

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
    extendparamIsSet_ = false;
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
    if(extendparamIsSet_) {
        val[utility::conversions::to_string_t("extendparam")] = ModelBase::toJson(extendparam_);
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
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PrePaidServerRootVolumeExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendparam(refVal);
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


