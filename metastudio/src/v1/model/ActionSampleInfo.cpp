

#include "huaweicloud/metastudio/v1/model/ActionSampleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActionSampleInfo::ActionSampleInfo()
{
    actionNameZh_ = "";
    actionNameZhIsSet_ = false;
    actionNameEn_ = "";
    actionNameEnIsSet_ = false;
    actionTag_ = "";
    actionTagIsSet_ = false;
    catalog_ = "";
    catalogIsSet_ = false;
    recommendedValue_ = 0;
    recommendedValueIsSet_ = false;
    isSelected_ = false;
    isSelectedIsSet_ = false;
    sampleDownloadUrl_ = "";
    sampleDownloadUrlIsSet_ = false;
}

ActionSampleInfo::~ActionSampleInfo() = default;

void ActionSampleInfo::validate()
{
}

web::json::value ActionSampleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionNameZhIsSet_) {
        val[utility::conversions::to_string_t("action_name_zh")] = ModelBase::toJson(actionNameZh_);
    }
    if(actionNameEnIsSet_) {
        val[utility::conversions::to_string_t("action_name_en")] = ModelBase::toJson(actionNameEn_);
    }
    if(actionTagIsSet_) {
        val[utility::conversions::to_string_t("action_tag")] = ModelBase::toJson(actionTag_);
    }
    if(catalogIsSet_) {
        val[utility::conversions::to_string_t("catalog")] = ModelBase::toJson(catalog_);
    }
    if(recommendedValueIsSet_) {
        val[utility::conversions::to_string_t("recommended_value")] = ModelBase::toJson(recommendedValue_);
    }
    if(isSelectedIsSet_) {
        val[utility::conversions::to_string_t("is_selected")] = ModelBase::toJson(isSelected_);
    }
    if(sampleDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("sample_download_url")] = ModelBase::toJson(sampleDownloadUrl_);
    }

    return val;
}
bool ActionSampleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_name_zh"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name_zh"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionNameZh(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catalog"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catalog"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCatalog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recommended_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recommended_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecommendedValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_selected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_selected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSelected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sample_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string ActionSampleInfo::getActionNameZh() const
{
    return actionNameZh_;
}

void ActionSampleInfo::setActionNameZh(const std::string& value)
{
    actionNameZh_ = value;
    actionNameZhIsSet_ = true;
}

bool ActionSampleInfo::actionNameZhIsSet() const
{
    return actionNameZhIsSet_;
}

void ActionSampleInfo::unsetactionNameZh()
{
    actionNameZhIsSet_ = false;
}

std::string ActionSampleInfo::getActionNameEn() const
{
    return actionNameEn_;
}

void ActionSampleInfo::setActionNameEn(const std::string& value)
{
    actionNameEn_ = value;
    actionNameEnIsSet_ = true;
}

bool ActionSampleInfo::actionNameEnIsSet() const
{
    return actionNameEnIsSet_;
}

void ActionSampleInfo::unsetactionNameEn()
{
    actionNameEnIsSet_ = false;
}

std::string ActionSampleInfo::getActionTag() const
{
    return actionTag_;
}

void ActionSampleInfo::setActionTag(const std::string& value)
{
    actionTag_ = value;
    actionTagIsSet_ = true;
}

bool ActionSampleInfo::actionTagIsSet() const
{
    return actionTagIsSet_;
}

void ActionSampleInfo::unsetactionTag()
{
    actionTagIsSet_ = false;
}

std::string ActionSampleInfo::getCatalog() const
{
    return catalog_;
}

void ActionSampleInfo::setCatalog(const std::string& value)
{
    catalog_ = value;
    catalogIsSet_ = true;
}

bool ActionSampleInfo::catalogIsSet() const
{
    return catalogIsSet_;
}

void ActionSampleInfo::unsetcatalog()
{
    catalogIsSet_ = false;
}

int32_t ActionSampleInfo::getRecommendedValue() const
{
    return recommendedValue_;
}

void ActionSampleInfo::setRecommendedValue(int32_t value)
{
    recommendedValue_ = value;
    recommendedValueIsSet_ = true;
}

bool ActionSampleInfo::recommendedValueIsSet() const
{
    return recommendedValueIsSet_;
}

void ActionSampleInfo::unsetrecommendedValue()
{
    recommendedValueIsSet_ = false;
}

bool ActionSampleInfo::isIsSelected() const
{
    return isSelected_;
}

void ActionSampleInfo::setIsSelected(bool value)
{
    isSelected_ = value;
    isSelectedIsSet_ = true;
}

bool ActionSampleInfo::isSelectedIsSet() const
{
    return isSelectedIsSet_;
}

void ActionSampleInfo::unsetisSelected()
{
    isSelectedIsSet_ = false;
}

std::string ActionSampleInfo::getSampleDownloadUrl() const
{
    return sampleDownloadUrl_;
}

void ActionSampleInfo::setSampleDownloadUrl(const std::string& value)
{
    sampleDownloadUrl_ = value;
    sampleDownloadUrlIsSet_ = true;
}

bool ActionSampleInfo::sampleDownloadUrlIsSet() const
{
    return sampleDownloadUrlIsSet_;
}

void ActionSampleInfo::unsetsampleDownloadUrl()
{
    sampleDownloadUrlIsSet_ = false;
}

}
}
}
}
}


