

#include "huaweicloud/cce/v3/model/StorageSelectors_matchLabels.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




StorageSelectors_matchLabels::StorageSelectors_matchLabels()
{
    size_ = "";
    sizeIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    iops_ = "";
    iopsIsSet_ = false;
    throughput_ = "";
    throughputIsSet_ = false;
    metadataEncrypted_ = "";
    metadataEncryptedIsSet_ = false;
    metadataCmkid_ = "";
    metadataCmkidIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
}

StorageSelectors_matchLabels::~StorageSelectors_matchLabels() = default;

void StorageSelectors_matchLabels::validate()
{
}

web::json::value StorageSelectors_matchLabels::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volumeType")] = ModelBase::toJson(volumeType_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }
    if(metadataEncryptedIsSet_) {
        val[utility::conversions::to_string_t("metadataEncrypted")] = ModelBase::toJson(metadataEncrypted_);
    }
    if(metadataCmkidIsSet_) {
        val[utility::conversions::to_string_t("metadataCmkid")] = ModelBase::toJson(metadataCmkid_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool StorageSelectors_matchLabels::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iops"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIops(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("throughput"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("throughput"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThroughput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadataEncrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadataEncrypted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadataEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadataCmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadataCmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadataCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string StorageSelectors_matchLabels::getSize() const
{
    return size_;
}

void StorageSelectors_matchLabels::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool StorageSelectors_matchLabels::sizeIsSet() const
{
    return sizeIsSet_;
}

void StorageSelectors_matchLabels::unsetsize()
{
    sizeIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getVolumeType() const
{
    return volumeType_;
}

void StorageSelectors_matchLabels::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool StorageSelectors_matchLabels::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void StorageSelectors_matchLabels::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getIops() const
{
    return iops_;
}

void StorageSelectors_matchLabels::setIops(const std::string& value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool StorageSelectors_matchLabels::iopsIsSet() const
{
    return iopsIsSet_;
}

void StorageSelectors_matchLabels::unsetiops()
{
    iopsIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getThroughput() const
{
    return throughput_;
}

void StorageSelectors_matchLabels::setThroughput(const std::string& value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool StorageSelectors_matchLabels::throughputIsSet() const
{
    return throughputIsSet_;
}

void StorageSelectors_matchLabels::unsetthroughput()
{
    throughputIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getMetadataEncrypted() const
{
    return metadataEncrypted_;
}

void StorageSelectors_matchLabels::setMetadataEncrypted(const std::string& value)
{
    metadataEncrypted_ = value;
    metadataEncryptedIsSet_ = true;
}

bool StorageSelectors_matchLabels::metadataEncryptedIsSet() const
{
    return metadataEncryptedIsSet_;
}

void StorageSelectors_matchLabels::unsetmetadataEncrypted()
{
    metadataEncryptedIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getMetadataCmkid() const
{
    return metadataCmkid_;
}

void StorageSelectors_matchLabels::setMetadataCmkid(const std::string& value)
{
    metadataCmkid_ = value;
    metadataCmkidIsSet_ = true;
}

bool StorageSelectors_matchLabels::metadataCmkidIsSet() const
{
    return metadataCmkidIsSet_;
}

void StorageSelectors_matchLabels::unsetmetadataCmkid()
{
    metadataCmkidIsSet_ = false;
}

std::string StorageSelectors_matchLabels::getCount() const
{
    return count_;
}

void StorageSelectors_matchLabels::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool StorageSelectors_matchLabels::countIsSet() const
{
    return countIsSet_;
}

void StorageSelectors_matchLabels::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


