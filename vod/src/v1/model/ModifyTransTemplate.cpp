

#include "huaweicloud/vod/v1/model/ModifyTransTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ModifyTransTemplate::ModifyTransTemplate()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    isAutoEncrypt_ = false;
    isAutoEncryptIsSet_ = false;
    additionalManifestsIsSet_ = false;
    qualityInfoListIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    commonIsSet_ = false;
}

ModifyTransTemplate::~ModifyTransTemplate() = default;

void ModifyTransTemplate::validate()
{
}

web::json::value ModifyTransTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(isAutoEncryptIsSet_) {
        val[utility::conversions::to_string_t("is_auto_encrypt")] = ModelBase::toJson(isAutoEncrypt_);
    }
    if(additionalManifestsIsSet_) {
        val[utility::conversions::to_string_t("additional_manifests")] = ModelBase::toJson(additionalManifests_);
    }
    if(qualityInfoListIsSet_) {
        val[utility::conversions::to_string_t("quality_info_list")] = ModelBase::toJson(qualityInfoList_);
    }
    if(watermarkTemplateIdsIsSet_) {
        val[utility::conversions::to_string_t("watermark_template_ids")] = ModelBase::toJson(watermarkTemplateIds_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }

    return val;
}
bool ModifyTransTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_encrypt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_manifests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_manifests"));
        if(!fieldValue.is_null())
        {
            std::vector<AdditionalManifest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalManifests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QualityInfoList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualityInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watermark_template_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark_template_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermarkTemplateIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            CommonInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    return ok;
}


std::string ModifyTransTemplate::getGroupId() const
{
    return groupId_;
}

void ModifyTransTemplate::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ModifyTransTemplate::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ModifyTransTemplate::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ModifyTransTemplate::getName() const
{
    return name_;
}

void ModifyTransTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyTransTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyTransTemplate::unsetname()
{
    nameIsSet_ = false;
}

bool ModifyTransTemplate::isIsDefault() const
{
    return isDefault_;
}

void ModifyTransTemplate::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool ModifyTransTemplate::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void ModifyTransTemplate::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool ModifyTransTemplate::isIsAutoEncrypt() const
{
    return isAutoEncrypt_;
}

void ModifyTransTemplate::setIsAutoEncrypt(bool value)
{
    isAutoEncrypt_ = value;
    isAutoEncryptIsSet_ = true;
}

bool ModifyTransTemplate::isAutoEncryptIsSet() const
{
    return isAutoEncryptIsSet_;
}

void ModifyTransTemplate::unsetisAutoEncrypt()
{
    isAutoEncryptIsSet_ = false;
}

std::vector<AdditionalManifest>& ModifyTransTemplate::getAdditionalManifests()
{
    return additionalManifests_;
}

void ModifyTransTemplate::setAdditionalManifests(const std::vector<AdditionalManifest>& value)
{
    additionalManifests_ = value;
    additionalManifestsIsSet_ = true;
}

bool ModifyTransTemplate::additionalManifestsIsSet() const
{
    return additionalManifestsIsSet_;
}

void ModifyTransTemplate::unsetadditionalManifests()
{
    additionalManifestsIsSet_ = false;
}

std::vector<QualityInfoList>& ModifyTransTemplate::getQualityInfoList()
{
    return qualityInfoList_;
}

void ModifyTransTemplate::setQualityInfoList(const std::vector<QualityInfoList>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool ModifyTransTemplate::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void ModifyTransTemplate::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

std::vector<std::string>& ModifyTransTemplate::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void ModifyTransTemplate::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool ModifyTransTemplate::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void ModifyTransTemplate::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string ModifyTransTemplate::getDescription() const
{
    return description_;
}

void ModifyTransTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyTransTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyTransTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

CommonInfo ModifyTransTemplate::getCommon() const
{
    return common_;
}

void ModifyTransTemplate::setCommon(const CommonInfo& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool ModifyTransTemplate::commonIsSet() const
{
    return commonIsSet_;
}

void ModifyTransTemplate::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


