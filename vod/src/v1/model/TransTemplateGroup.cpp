

#include "huaweicloud/vod/v1/model/TransTemplateGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TransTemplateGroup::TransTemplateGroup()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    qualityInfoListIsSet_ = false;
    commonIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

TransTemplateGroup::~TransTemplateGroup() = default;

void TransTemplateGroup::validate()
{
}

web::json::value TransTemplateGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(autoEncryptIsSet_) {
        val[utility::conversions::to_string_t("auto_encrypt")] = ModelBase::toJson(autoEncrypt_);
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

bool TransTemplateGroup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("auto_encrypt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_encrypt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoEncrypt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality_info_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality_info_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QualityInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualityInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            Common refVal;
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


std::string TransTemplateGroup::getName() const
{
    return name_;
}

void TransTemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TransTemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void TransTemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string TransTemplateGroup::getStatus() const
{
    return status_;
}

void TransTemplateGroup::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TransTemplateGroup::statusIsSet() const
{
    return statusIsSet_;
}

void TransTemplateGroup::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TransTemplateGroup::getType() const
{
    return type_;
}

void TransTemplateGroup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TransTemplateGroup::typeIsSet() const
{
    return typeIsSet_;
}

void TransTemplateGroup::unsettype()
{
    typeIsSet_ = false;
}

int32_t TransTemplateGroup::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void TransTemplateGroup::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool TransTemplateGroup::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void TransTemplateGroup::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

std::vector<QualityInfo>& TransTemplateGroup::getQualityInfoList()
{
    return qualityInfoList_;
}

void TransTemplateGroup::setQualityInfoList(const std::vector<QualityInfo>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool TransTemplateGroup::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void TransTemplateGroup::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

Common TransTemplateGroup::getCommon() const
{
    return common_;
}

void TransTemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TransTemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void TransTemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

std::vector<std::string>& TransTemplateGroup::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void TransTemplateGroup::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool TransTemplateGroup::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void TransTemplateGroup::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string TransTemplateGroup::getDescription() const
{
    return description_;
}

void TransTemplateGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TransTemplateGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TransTemplateGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


