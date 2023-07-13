

#include "huaweicloud/evs/v2/model/CreateVolumeOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeOption::CreateVolumeOption()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    imageRef_ = "";
    imageRefIsSet_ = false;
    metadataIsSet_ = false;
    multiattach_ = false;
    multiattachIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    tagsIsSet_ = false;
    iops_ = 0;
    iopsIsSet_ = false;
    throughput_ = 0;
    throughputIsSet_ = false;
}

CreateVolumeOption::~CreateVolumeOption() = default;

void CreateVolumeOption::validate()
{
}

web::json::value CreateVolumeOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(imageRefIsSet_) {
        val[utility::conversions::to_string_t("imageRef")] = ModelBase::toJson(imageRef_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(iopsIsSet_) {
        val[utility::conversions::to_string_t("iops")] = ModelBase::toJson(iops_);
    }
    if(throughputIsSet_) {
        val[utility::conversions::to_string_t("throughput")] = ModelBase::toJson(throughput_);
    }

    return val;
}

bool CreateVolumeOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}

std::string CreateVolumeOption::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CreateVolumeOption::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CreateVolumeOption::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CreateVolumeOption::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CreateVolumeOption::getBackupId() const
{
    return backupId_;
}

void CreateVolumeOption::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CreateVolumeOption::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CreateVolumeOption::unsetbackupId()
{
    backupIdIsSet_ = false;
}

int32_t CreateVolumeOption::getCount() const
{
    return count_;
}

void CreateVolumeOption::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CreateVolumeOption::countIsSet() const
{
    return countIsSet_;
}

void CreateVolumeOption::unsetcount()
{
    countIsSet_ = false;
}

std::string CreateVolumeOption::getDescription() const
{
    return description_;
}

void CreateVolumeOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVolumeOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVolumeOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateVolumeOption::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateVolumeOption::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateVolumeOption::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateVolumeOption::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateVolumeOption::getImageRef() const
{
    return imageRef_;
}

void CreateVolumeOption::setImageRef(const std::string& value)
{
    imageRef_ = value;
    imageRefIsSet_ = true;
}

bool CreateVolumeOption::imageRefIsSet() const
{
    return imageRefIsSet_;
}

void CreateVolumeOption::unsetimageRef()
{
    imageRefIsSet_ = false;
}

std::map<std::string, std::string>& CreateVolumeOption::getMetadata()
{
    return metadata_;
}

void CreateVolumeOption::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateVolumeOption::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateVolumeOption::unsetmetadata()
{
    metadataIsSet_ = false;
}

bool CreateVolumeOption::isMultiattach() const
{
    return multiattach_;
}

void CreateVolumeOption::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool CreateVolumeOption::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void CreateVolumeOption::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

std::string CreateVolumeOption::getName() const
{
    return name_;
}

void CreateVolumeOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVolumeOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVolumeOption::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateVolumeOption::getSize() const
{
    return size_;
}

void CreateVolumeOption::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateVolumeOption::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateVolumeOption::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateVolumeOption::getSnapshotId() const
{
    return snapshotId_;
}

void CreateVolumeOption::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool CreateVolumeOption::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void CreateVolumeOption::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

std::string CreateVolumeOption::getVolumeType() const
{
    return volumeType_;
}

void CreateVolumeOption::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool CreateVolumeOption::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void CreateVolumeOption::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

std::map<std::string, std::string>& CreateVolumeOption::getTags()
{
    return tags_;
}

void CreateVolumeOption::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateVolumeOption::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateVolumeOption::unsettags()
{
    tagsIsSet_ = false;
}

int32_t CreateVolumeOption::getIops() const
{
    return iops_;
}

void CreateVolumeOption::setIops(int32_t value)
{
    iops_ = value;
    iopsIsSet_ = true;
}

bool CreateVolumeOption::iopsIsSet() const
{
    return iopsIsSet_;
}

void CreateVolumeOption::unsetiops()
{
    iopsIsSet_ = false;
}

int32_t CreateVolumeOption::getThroughput() const
{
    return throughput_;
}

void CreateVolumeOption::setThroughput(int32_t value)
{
    throughput_ = value;
    throughputIsSet_ = true;
}

bool CreateVolumeOption::throughputIsSet() const
{
    return throughputIsSet_;
}

void CreateVolumeOption::unsetthroughput()
{
    throughputIsSet_ = false;
}

}
}
}
}
}


