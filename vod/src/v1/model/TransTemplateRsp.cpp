

#include "huaweicloud/vod/v1/model/TransTemplateRsp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TransTemplateRsp::TransTemplateRsp()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isAutoEncrypt_ = false;
    isAutoEncryptIsSet_ = false;
    qualityInfoListIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    commonIsSet_ = false;
}

TransTemplateRsp::~TransTemplateRsp() = default;

void TransTemplateRsp::validate()
{
}

web::json::value TransTemplateRsp::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isAutoEncryptIsSet_) {
        val[utility::conversions::to_string_t("is_auto_encrypt")] = ModelBase::toJson(isAutoEncrypt_);
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

bool TransTemplateRsp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string TransTemplateRsp::getGroupId() const
{
    return groupId_;
}

void TransTemplateRsp::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TransTemplateRsp::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TransTemplateRsp::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TransTemplateRsp::getName() const
{
    return name_;
}

void TransTemplateRsp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransTemplateRsp::nameIsSet() const
{
    return nameIsSet_;
}

void TransTemplateRsp::unsetname()
{
    nameIsSet_ = false;
}

bool TransTemplateRsp::isIsDefault() const
{
    return isDefault_;
}

void TransTemplateRsp::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool TransTemplateRsp::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void TransTemplateRsp::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

std::string TransTemplateRsp::getType() const
{
    return type_;
}

void TransTemplateRsp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TransTemplateRsp::typeIsSet() const
{
    return typeIsSet_;
}

void TransTemplateRsp::unsettype()
{
    typeIsSet_ = false;
}

bool TransTemplateRsp::isIsAutoEncrypt() const
{
    return isAutoEncrypt_;
}

void TransTemplateRsp::setIsAutoEncrypt(bool value)
{
    isAutoEncrypt_ = value;
    isAutoEncryptIsSet_ = true;
}

bool TransTemplateRsp::isAutoEncryptIsSet() const
{
    return isAutoEncryptIsSet_;
}

void TransTemplateRsp::unsetisAutoEncrypt()
{
    isAutoEncryptIsSet_ = false;
}

std::vector<QualityInfoList>& TransTemplateRsp::getQualityInfoList()
{
    return qualityInfoList_;
}

void TransTemplateRsp::setQualityInfoList(const std::vector<QualityInfoList>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool TransTemplateRsp::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void TransTemplateRsp::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

std::vector<std::string>& TransTemplateRsp::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void TransTemplateRsp::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool TransTemplateRsp::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void TransTemplateRsp::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string TransTemplateRsp::getDescription() const
{
    return description_;
}

void TransTemplateRsp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TransTemplateRsp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TransTemplateRsp::unsetdescription()
{
    descriptionIsSet_ = false;
}

CommonInfo TransTemplateRsp::getCommon() const
{
    return common_;
}

void TransTemplateRsp::setCommon(const CommonInfo& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TransTemplateRsp::commonIsSet() const
{
    return commonIsSet_;
}

void TransTemplateRsp::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


