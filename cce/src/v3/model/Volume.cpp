

#include "huaweicloud/cce/v3/model/Volume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Volume::Volume()
{
    size_ = 0;
    sizeIsSet_ = false;
    volumetype_ = "";
    volumetypeIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
    extendParamIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    hwPassthrough_ = false;
    hwPassthroughIsSet_ = false;
    metadataIsSet_ = false;
}

Volume::~Volume() = default;

void Volume::validate()
{
}

web::json::value Volume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(volumetypeIsSet_) {
        val[utility::conversions::to_string_t("volumetype")] = ModelBase::toJson(volumetype_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(hwPassthroughIsSet_) {
        val[utility::conversions::to_string_t("hw:passthrough")] = ModelBase::toJson(hwPassthrough_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool Volume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumetype(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw:passthrough"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw:passthrough"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwPassthrough(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            VolumeMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


int32_t Volume::getSize() const
{
    return size_;
}

void Volume::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Volume::sizeIsSet() const
{
    return sizeIsSet_;
}

void Volume::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Volume::getVolumetype() const
{
    return volumetype_;
}

void Volume::setVolumetype(const std::string& value)
{
    volumetype_ = value;
    volumetypeIsSet_ = true;
}

bool Volume::volumetypeIsSet() const
{
    return volumetypeIsSet_;
}

void Volume::unsetvolumetype()
{
    volumetypeIsSet_ = false;
}

int32_t Volume::getIops() const
{
    return iops_;
}

void Volume::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool Volume::iopsIsSet() const
{
    return iopsIsSet_;
}

void Volume::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t Volume::getThroughput() const
{
    return throughput_;
}

void Volume::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool Volume::throughputIsSet() const
{
    return throughputIsSet_;
}

void Volume::unsetthroughput()
{
    throughputIsSet_ = false;
}

std::map<std::string, Object>& Volume::getExtendParam()
{
    return extendParam_;
}

void Volume::setExtendParam(const std::map<std::string, Object>& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool Volume::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void Volume::unsetextendParam()
{
    extendParamIsSet_ = false;
}

std::string Volume::getClusterId() const
{
    return clusterId_;
}

void Volume::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool Volume::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void Volume::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string Volume::getClusterType() const
{
    return clusterType_;
}

void Volume::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool Volume::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void Volume::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

bool Volume::isHwPassthrough() const
{
    return hwPassthrough_;
}

void Volume::setHwPassthrough(bool value)
{
    hwPassthrough_ = value;
    hwPassthroughIsSet_ = true;
}

bool Volume::hwPassthroughIsSet() const
{
    return hwPassthroughIsSet_;
}

void Volume::unsethwPassthrough()
{
    hwPassthroughIsSet_ = false;
}

VolumeMetadata Volume::getMetadata() const
{
    return metadata_;
}

void Volume::setMetadata(const VolumeMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Volume::metadataIsSet() const
{
    return metadataIsSet_;
}

void Volume::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


