

#include "huaweicloud/vod/v1/model/ModifyTransTemplateGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ModifyTransTemplateGroup::ModifyTransTemplateGroup()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    qualityInfoListIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    commonIsSet_ = false;
}

ModifyTransTemplateGroup::~ModifyTransTemplateGroup() = default;

void ModifyTransTemplateGroup::validate()
{
}

web::json::value ModifyTransTemplateGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(autoEncryptIsSet_) {
        val[utility::conversions::to_string_t("auto_encrypt")] = ModelBase::toJson(autoEncrypt_);
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

bool ModifyTransTemplateGroup::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
            Common refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    return ok;
}

std::string ModifyTransTemplateGroup::getGroupId() const
{
    return groupId_;
}

void ModifyTransTemplateGroup::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ModifyTransTemplateGroup::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ModifyTransTemplateGroup::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ModifyTransTemplateGroup::getName() const
{
    return name_;
}

void ModifyTransTemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ModifyTransTemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void ModifyTransTemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string ModifyTransTemplateGroup::getStatus() const
{
    return status_;
}

void ModifyTransTemplateGroup::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyTransTemplateGroup::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyTransTemplateGroup::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ModifyTransTemplateGroup::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void ModifyTransTemplateGroup::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool ModifyTransTemplateGroup::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void ModifyTransTemplateGroup::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

std::vector<QualityInfo>& ModifyTransTemplateGroup::getQualityInfoList()
{
    return qualityInfoList_;
}

void ModifyTransTemplateGroup::setQualityInfoList(const std::vector<QualityInfo>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool ModifyTransTemplateGroup::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void ModifyTransTemplateGroup::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

std::vector<std::string>& ModifyTransTemplateGroup::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void ModifyTransTemplateGroup::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool ModifyTransTemplateGroup::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void ModifyTransTemplateGroup::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string ModifyTransTemplateGroup::getDescription() const
{
    return description_;
}

void ModifyTransTemplateGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ModifyTransTemplateGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ModifyTransTemplateGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

Common ModifyTransTemplateGroup::getCommon() const
{
    return common_;
}

void ModifyTransTemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool ModifyTransTemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void ModifyTransTemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


