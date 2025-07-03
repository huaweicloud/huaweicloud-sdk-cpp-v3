

#include "huaweicloud/ecs/v2/model/TemplateBlockDeviceMappingOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateBlockDeviceMappingOption::TemplateBlockDeviceMappingOption()
{
    sourceId_ = "";
    sourceIdIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    encrypted_ = false;
    encryptedIsSet_ = false;
    cmkId_ = "";
    cmkIdIsSet_ = false;
    volumeType_ = "";
    volumeTypeIsSet_ = false;
    volumeSize_ = 0;
    volumeSizeIsSet_ = false;
    attachmentIsSet_ = false;
}

TemplateBlockDeviceMappingOption::~TemplateBlockDeviceMappingOption() = default;

void TemplateBlockDeviceMappingOption::validate()
{
}

web::json::value TemplateBlockDeviceMappingOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIdIsSet_) {
        val[utility::conversions::to_string_t("source_id")] = ModelBase::toJson(sourceId_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(encryptedIsSet_) {
        val[utility::conversions::to_string_t("encrypted")] = ModelBase::toJson(encrypted_);
    }
    if(cmkIdIsSet_) {
        val[utility::conversions::to_string_t("cmk_id")] = ModelBase::toJson(cmkId_);
    }
    if(volumeTypeIsSet_) {
        val[utility::conversions::to_string_t("volume_type")] = ModelBase::toJson(volumeType_);
    }
    if(volumeSizeIsSet_) {
        val[utility::conversions::to_string_t("volume_size")] = ModelBase::toJson(volumeSize_);
    }
    if(attachmentIsSet_) {
        val[utility::conversions::to_string_t("attachment")] = ModelBase::toJson(attachment_);
    }

    return val;
}
bool TemplateBlockDeviceMappingOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encrypted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmk_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmk_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmkId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment"));
        if(!fieldValue.is_null())
        {
            TemplateBlockDeviceMappingAttachmentOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachment(refVal);
        }
    }
    return ok;
}


std::string TemplateBlockDeviceMappingOption::getSourceId() const
{
    return sourceId_;
}

void TemplateBlockDeviceMappingOption::setSourceId(const std::string& value)
{
    sourceId_ = value;
    sourceIdIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::sourceIdIsSet() const
{
    return sourceIdIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetsourceId()
{
    sourceIdIsSet_ = false;
}

std::string TemplateBlockDeviceMappingOption::getSourceType() const
{
    return sourceType_;
}

void TemplateBlockDeviceMappingOption::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

bool TemplateBlockDeviceMappingOption::isEncrypted() const
{
    return encrypted_;
}

void TemplateBlockDeviceMappingOption::setEncrypted(bool value)
{
    encrypted_ = value;
    encryptedIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::encryptedIsSet() const
{
    return encryptedIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetencrypted()
{
    encryptedIsSet_ = false;
}

std::string TemplateBlockDeviceMappingOption::getCmkId() const
{
    return cmkId_;
}

void TemplateBlockDeviceMappingOption::setCmkId(const std::string& value)
{
    cmkId_ = value;
    cmkIdIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::cmkIdIsSet() const
{
    return cmkIdIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetcmkId()
{
    cmkIdIsSet_ = false;
}

std::string TemplateBlockDeviceMappingOption::getVolumeType() const
{
    return volumeType_;
}

void TemplateBlockDeviceMappingOption::setVolumeType(const std::string& value)
{
    volumeType_ = value;
    volumeTypeIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::volumeTypeIsSet() const
{
    return volumeTypeIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetvolumeType()
{
    volumeTypeIsSet_ = false;
}

int32_t TemplateBlockDeviceMappingOption::getVolumeSize() const
{
    return volumeSize_;
}

void TemplateBlockDeviceMappingOption::setVolumeSize(int32_t value)
{
    volumeSize_ = value;
    volumeSizeIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::volumeSizeIsSet() const
{
    return volumeSizeIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetvolumeSize()
{
    volumeSizeIsSet_ = false;
}

TemplateBlockDeviceMappingAttachmentOption TemplateBlockDeviceMappingOption::getAttachment() const
{
    return attachment_;
}

void TemplateBlockDeviceMappingOption::setAttachment(const TemplateBlockDeviceMappingAttachmentOption& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool TemplateBlockDeviceMappingOption::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void TemplateBlockDeviceMappingOption::unsetattachment()
{
    attachmentIsSet_ = false;
}

}
}
}
}
}


