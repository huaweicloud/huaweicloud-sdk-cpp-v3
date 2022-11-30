

#include "huaweicloud/vod/v1/model/TemplateGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TemplateGroup::TemplateGroup()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    autoEncrypt_ = 0;
    autoEncryptIsSet_ = false;
    qualityInfoListIsSet_ = false;
    watermarkTemplateIdsIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    commonIsSet_ = false;
}

TemplateGroup::~TemplateGroup() = default;

void TemplateGroup::validate()
{
}

web::json::value TemplateGroup::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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

bool TemplateGroup::fromJson(const web::json::value& val)
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


std::string TemplateGroup::getGroupId() const
{
    return groupId_;
}

void TemplateGroup::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool TemplateGroup::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void TemplateGroup::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string TemplateGroup::getName() const
{
    return name_;
}

void TemplateGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplateGroup::nameIsSet() const
{
    return nameIsSet_;
}

void TemplateGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string TemplateGroup::getStatus() const
{
    return status_;
}

void TemplateGroup::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TemplateGroup::statusIsSet() const
{
    return statusIsSet_;
}

void TemplateGroup::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TemplateGroup::getType() const
{
    return type_;
}

void TemplateGroup::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateGroup::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateGroup::unsettype()
{
    typeIsSet_ = false;
}

int32_t TemplateGroup::getAutoEncrypt() const
{
    return autoEncrypt_;
}

void TemplateGroup::setAutoEncrypt(int32_t value)
{
    autoEncrypt_ = value;
    autoEncryptIsSet_ = true;
}

bool TemplateGroup::autoEncryptIsSet() const
{
    return autoEncryptIsSet_;
}

void TemplateGroup::unsetautoEncrypt()
{
    autoEncryptIsSet_ = false;
}

std::vector<QualityInfo>& TemplateGroup::getQualityInfoList()
{
    return qualityInfoList_;
}

void TemplateGroup::setQualityInfoList(const std::vector<QualityInfo>& value)
{
    qualityInfoList_ = value;
    qualityInfoListIsSet_ = true;
}

bool TemplateGroup::qualityInfoListIsSet() const
{
    return qualityInfoListIsSet_;
}

void TemplateGroup::unsetqualityInfoList()
{
    qualityInfoListIsSet_ = false;
}

std::vector<std::string>& TemplateGroup::getWatermarkTemplateIds()
{
    return watermarkTemplateIds_;
}

void TemplateGroup::setWatermarkTemplateIds(const std::vector<std::string>& value)
{
    watermarkTemplateIds_ = value;
    watermarkTemplateIdsIsSet_ = true;
}

bool TemplateGroup::watermarkTemplateIdsIsSet() const
{
    return watermarkTemplateIdsIsSet_;
}

void TemplateGroup::unsetwatermarkTemplateIds()
{
    watermarkTemplateIdsIsSet_ = false;
}

std::string TemplateGroup::getDescription() const
{
    return description_;
}

void TemplateGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TemplateGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TemplateGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

Common TemplateGroup::getCommon() const
{
    return common_;
}

void TemplateGroup::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TemplateGroup::commonIsSet() const
{
    return commonIsSet_;
}

void TemplateGroup::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


