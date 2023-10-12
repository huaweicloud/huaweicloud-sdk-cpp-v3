

#include "huaweicloud/sdrs/v1/model/ReplicationRecordMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ReplicationRecordMetadata::ReplicationRecordMetadata()
{
    multiattach_ = false;
    multiattachIsSet_ = false;
    bootable_ = false;
    bootableIsSet_ = false;
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
}

ReplicationRecordMetadata::~ReplicationRecordMetadata() = default;

void ReplicationRecordMetadata::validate()
{
}

web::json::value ReplicationRecordMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(multiattachIsSet_) {
        val[utility::conversions::to_string_t("multiattach")] = ModelBase::toJson(multiattach_);
    }
    if(bootableIsSet_) {
        val[utility::conversions::to_string_t("bootable")] = ModelBase::toJson(bootable_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }

    return val;
}
bool ReplicationRecordMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("multiattach"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiattach"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiattach(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bootable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bootable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBootable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
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
    return ok;
}


bool ReplicationRecordMetadata::isMultiattach() const
{
    return multiattach_;
}

void ReplicationRecordMetadata::setMultiattach(bool value)
{
    multiattach_ = value;
    multiattachIsSet_ = true;
}

bool ReplicationRecordMetadata::multiattachIsSet() const
{
    return multiattachIsSet_;
}

void ReplicationRecordMetadata::unsetmultiattach()
{
    multiattachIsSet_ = false;
}

bool ReplicationRecordMetadata::isBootable() const
{
    return bootable_;
}

void ReplicationRecordMetadata::setBootable(bool value)
{
    bootable_ = value;
    bootableIsSet_ = true;
}

bool ReplicationRecordMetadata::bootableIsSet() const
{
    return bootableIsSet_;
}

void ReplicationRecordMetadata::unsetbootable()
{
    bootableIsSet_ = false;
}

int32_t ReplicationRecordMetadata::getVolumeSize() const
{
    return volumeSize_;
}

void ReplicationRecordMetadata::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool ReplicationRecordMetadata::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void ReplicationRecordMetadata::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

std::string ReplicationRecordMetadata::getVolumeType() const
{
    return volumeType_;
}

void ReplicationRecordMetadata::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool ReplicationRecordMetadata::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void ReplicationRecordMetadata::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

}
}
}
}
}


