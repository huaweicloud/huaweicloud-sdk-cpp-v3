

#include "huaweicloud/ecs/v2/model/PostPaidServerDataVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




PostPaidServerDataVolume::PostPaidServerDataVolume()
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

PostPaidServerDataVolume::~PostPaidServerDataVolume() = default;

void PostPaidServerDataVolume::validate()
{
}

web::json::value PostPaidServerDataVolume::toJson() const
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

bool PostPaidServerDataVolume::fromJson(const web::json::value& val)
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
            PostPaidServerDataVolumeExtendParam refVal;
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
            PostPaidServerDataVolumeMetadata refVal;
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


std::string PostPaidServerDataVolume::getVolumetype() const
{
    return volumetype_;
}

void PostPaidServerDataVolume::setVolumetype(const std::string& value)
{
    volumetype_ = value;
    volumetypeIsSet_ = true;
}

bool PostPaidServerDataVolume::volumetypeIsSet() const
{
    return volumetypeIsSet_;
}

void PostPaidServerDataVolume::unsetvolumetype()
{
    volumetypeIsSet_ = false;
}

int32_t PostPaidServerDataVolume::getSize() const
{
    return size_;
}

void PostPaidServerDataVolume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PostPaidServerDataVolume::sizeIsSet() const
{
    return sizeIsSet_;
}

void PostPaidServerDataVolume::unsetsize()
{
    sizeIsSet_ = false;
}

bool PostPaidServerDataVolume::isShareable() const
{
    return shareable_;
}

void PostPaidServerDataVolume::setShareable(bool value)
{
    shareable_ = value;
    shareableIsSet_ = true;
}

bool PostPaidServerDataVolume::shareableIsSet() const
{
    return shareableIsSet_;
}

void PostPaidServerDataVolume::unsetshareable()
{
    shareableIsSet_ = false;
}

bool PostPaidServerDataVolume::isMultiattach() const
{
    return multiattach_;
}

void PostPaidServerDataVolume::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool PostPaidServerDataVolume::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void PostPaidServerDataVolume::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

bool PostPaidServerDataVolume::isHwpassthrough() const
{
    return hwpassthrough_;
}

void PostPaidServerDataVolume::setHwpassthrough(bool value)
{
    hwpassthrough_ = value;
    hwpassthroughIsSet_ = true;
}

bool PostPaidServerDataVolume::hwpassthroughIsSet() const
{
    return hwpassthroughIsSet_;
}

void PostPaidServerDataVolume::unsethwpassthrough()
{
    hwpassthroughIsSet_ = false;
}

PostPaidServerDataVolumeExtendParam PostPaidServerDataVolume::getExtendparam() const
{
    return extendparam_;
}

void PostPaidServerDataVolume::setExtendparam(const PostPaidServerDataVolumeExtendParam& value)
{
    extendparam_ = value;
    extendparamIsSet_ = true;
}

bool PostPaidServerDataVolume::extendparamIsSet() const
{
    return extendparamIsSet_;
}

void PostPaidServerDataVolume::unsetextendparam()
{
    extendparamIsSet_ = false;
}

std::string PostPaidServerDataVolume::getClusterType() const
{
    return clusterType_;
}

void PostPaidServerDataVolume::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool PostPaidServerDataVolume::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void PostPaidServerDataVolume::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string PostPaidServerDataVolume::getClusterId() const
{
    return clusterId_;
}

void PostPaidServerDataVolume::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool PostPaidServerDataVolume::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void PostPaidServerDataVolume::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

PostPaidServerDataVolumeMetadata PostPaidServerDataVolume::getMetadata() const
{
    return metadata_;
}

void PostPaidServerDataVolume::setMetadata(const PostPaidServerDataVolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PostPaidServerDataVolume::metadataIsSet() const
{
    return metadataIsSet_;
}

void PostPaidServerDataVolume::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string PostPaidServerDataVolume::getDataImageId() const
{
    return dataImageId_;
}

void PostPaidServerDataVolume::setDataImageId(const std::string& value)
{
    dataImageId_ = value;
    dataImageIdIsSet_ = true;
}

bool PostPaidServerDataVolume::dataImageIdIsSet() const
{
    return dataImageIdIsSet_;
}

void PostPaidServerDataVolume::unsetdataImageId()
{
    dataImageIdIsSet_ = false;
}

}
}
}
}
}


