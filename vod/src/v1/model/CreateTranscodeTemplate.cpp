

#include "huaweicloud/vod/v1/model/CreateTranscodeTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTranscodeTemplate::CreateTranscodeTemplate()
{
    name_ = "";
    nameIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    isAutoEncrypt_ = false;
    isAutoEncryptIsSet_ = false;
    additionalManifestsIsSet_ = false;
    qualityInfoListIsSet_ = false;
    commonIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateTranscodeTemplate::~CreateTranscodeTemplate() = default;

void CreateTranscodeTemplate::validate()
{
}

web::json::value CreateTranscodeTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }
    if(watermarkTemplateIdsIsSet_) {
        val[utility::conversions::to_string_t("watermark_template_ids")] = ModelBase::toJson(watermarkTemplateIds_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateTranscodeTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            CommonInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
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
    return ok;
}


std::string CreateTranscodeTemplate::getName() const
{
    return name_;
}

void CreateTranscodeTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTranscodeTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTranscodeTemplate::unsetname()
{
    nameIsSet_ = false;
}

bool CreateTranscodeTemplate::isIsDefault() const
{
    return isDefault_;
}

void CreateTranscodeTemplate::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool CreateTranscodeTemplate::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void CreateTranscodeTemplate::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

bool CreateTranscodeTemplate::isIsAutoEncrypt() const
{
    return isAutoEncrypt_;
}

void CreateTranscodeTemplate::setIsAutoEncrypt(bool value)
{
    isAutoEncrypt_ = value;
    isAutoEncryptIsSet_ = true;
}

bool CreateTranscodeTemplate::isAutoEncryptIsSet() const
{
    return isAutoEncryptIsSet_;
}

void CreateTranscodeTemplate::unsetisAutoEncrypt()
{
    isAutoEncryptIsSet_ = false;
}

std::vector<AdditionalManifest>& CreateTranscodeTemplate::getAdditionalManifests()
{
    return additionalManifests_;
}

void CreateTranscodeTemplate::setAdditionalManifests(const std::vector<AdditionalManifest>& value)
{
    additionalManifests_ = value;
    additionalManifestsIsSet_ = true;
}

bool CreateTranscodeTemplate::additionalManifestsIsSet() const
{
    return additionalManifestsIsSet_;
}

void CreateTranscodeTemplate::unsetadditionalManifests()
{
    additionalManifestsIsSet_ = false;
}

std::vector<QualityInfoList>& CreateTranscodeTemplate::getQualityInfoList()
{
    return qualityInfoList_;
}

void CreateTranscodeTemplate::setQualityInfoList(const std::vector<QualityInfoList>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool CreateTranscodeTemplate::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void CreateTranscodeTemplate::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

CommonInfo CreateTranscodeTemplate::getCommon() const
{
    return common_;
}

void CreateTranscodeTemplate::setCommon(const CommonInfo& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool CreateTranscodeTemplate::commonIsSet() const
{
    return commonIsSet_;
}

void CreateTranscodeTemplate::unsetcommon()
{
    commonIsSet_ = false;
}

std::vector<std::string>& CreateTranscodeTemplate::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void CreateTranscodeTemplate::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool CreateTranscodeTemplate::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void CreateTranscodeTemplate::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string CreateTranscodeTemplate::getDescription() const
{
    return description_;
}

void CreateTranscodeTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateTranscodeTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateTranscodeTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


