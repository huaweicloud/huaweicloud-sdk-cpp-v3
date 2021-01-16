

#include "huaweicloud/ecs/v2/model/PrePaidServerDataVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PrePaidServerDataVolume::PrePaidServerDataVolume()
{
    volumetype_ = "";
    volumetypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    shareable_ = false;
    shareableIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    hwpassthrough_ = false;
    hwpassthroughIsSet_ = false;
    extendparamIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    metadataIsSet_ = false;
    dataImageId_ = "";
    dataImageIdIsSet_ = false;
}

PrePaidServerDataVolume::~PrePaidServerDataVolume() = default;

void PrePaidServerDataVolume::validate()
{
}

web::json::value PrePaidServerDataVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumetypeIsSet_) {
        val[utility::conversions::to_string_t("volumetype")] = ModelBase::toJson(volumetype_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(shareableIsSet_) {
        val[utility::conversions::to_string_t("shareable")] = ModelBase::toJson(shareable_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(hwpassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwpassthrough_);
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
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(dataImageIdIsSet_) {
        val[utility::conversions::to_string_t("data_image_id")] = ModelBase::toJson(dataImageId_);
    }

    return val;
}

bool PrePaidServerDataVolume::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("shareable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shareable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiattach"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiattach"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiattach(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extendparam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendparam"));
        if(!fieldValue.is_null())
        {
            PrePaidServerDataVolumeExtendParam refVal;
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            PrePaidServerDataVolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataImageId(refVal);
        }
    }
    return ok;
}


std::string PrePaidServerDataVolume::getVolumetype() const
{
    return volumetype_;
}

void PrePaidServerDataVolume::setVolumetype(const std::string& value)
{
    volumetype_ = value;
    volumetypeIsSet_ = true;
}

bool PrePaidServerDataVolume::volumetypeIsSet() const
{
    return volumetypeIsSet_;
}

void PrePaidServerDataVolume::unsetvolumetype()
{
    volumetypeIsSet_ = false;
}

int32_t PrePaidServerDataVolume::getSize() const
{
    return size_;
}

void PrePaidServerDataVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PrePaidServerDataVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void PrePaidServerDataVolume::unsetsize()
{
    sizeIsSet_ = false;
}

bool PrePaidServerDataVolume::isShareable() const
{
    return shareable_;
}

void PrePaidServerDataVolume::setShareable(bool value)
{
    shareable_ = value;
    shareableIsSet_ = true;
}

bool PrePaidServerDataVolume::shareableIsSet() const
{
    return shareableIsSet_;
}

void PrePaidServerDataVolume::unsetshareable()
{
    shareableIsSet_ = false;
}

bool PrePaidServerDataVolume::isMultiattach() const
{
    return multiattach_;
}

void PrePaidServerDataVolume::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool PrePaidServerDataVolume::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void PrePaidServerDataVolume::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

bool PrePaidServerDataVolume::isHwpassthrough() const
{
    return hwpassthrough_;
}

void PrePaidServerDataVolume::setHwpassthrough(bool value)
{
    hwpassthrough_ = value;
    hwpassthroughIsSet_ = true;
}

bool PrePaidServerDataVolume::hwpassthroughIsSet() const
{
    return hwpassthroughIsSet_;
}

void PrePaidServerDataVolume::unsethwpassthrough()
{
    hwpassthroughIsSet_ = false;
}

PrePaidServerDataVolumeExtendParam PrePaidServerDataVolume::getExtendparam() const
{
    return extendparam_;
}

void PrePaidServerDataVolume::setExtendparam(const PrePaidServerDataVolumeExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PrePaidServerDataVolume::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PrePaidServerDataVolume::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::string PrePaidServerDataVolume::getClusterType() const
{
    return clusterType_;
}

void PrePaidServerDataVolume::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool PrePaidServerDataVolume::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void PrePaidServerDataVolume::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string PrePaidServerDataVolume::getClusterId() const
{
    return clusterId_;
}

void PrePaidServerDataVolume::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool PrePaidServerDataVolume::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void PrePaidServerDataVolume::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PrePaidServerDataVolumeMetadata PrePaidServerDataVolume::getMetadata() const
{
    return metadata_;
}

void PrePaidServerDataVolume::setMetadata(const PrePaidServerDataVolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PrePaidServerDataVolume::metadataIsSet() const
{
    return metadataIsSet_;
}

void PrePaidServerDataVolume::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string PrePaidServerDataVolume::getDataImageId() const
{
    return dataImageId_;
}

void PrePaidServerDataVolume::setDataImageId(const std::string& value)
{
    dataImageId_ = value;
    dataImageIdIsSet_ = true;
}

bool PrePaidServerDataVolume::dataImageIdIsSet() const
{
    return dataImageIdIsSet_;
}

void PrePaidServerDataVolume::unsetdataImageId()
{
    dataImageIdIsSet_ = false;
}

}
}
}
}
}


