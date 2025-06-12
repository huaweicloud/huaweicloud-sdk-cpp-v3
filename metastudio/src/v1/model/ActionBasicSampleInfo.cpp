

#include "huaweicloud/metastudio/v1/model/ActionBasicSampleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActionBasicSampleInfo::ActionBasicSampleInfo()
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
}

ActionBasicSampleInfo::~ActionBasicSampleInfo() = default;

void ActionBasicSampleInfo::validate()
{
}

web::json::value ActionBasicSampleInfo::toJson() const
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

    return val;
}
bool ActionBasicSampleInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ActionBasicSampleInfo::getActionNameZh() const
{
    return actionNameZh_;
}

void ActionBasicSampleInfo::setActionNameZh(const std::string& value)
{
    actionNameZh_ = value;
    actionNameZhIsSet_ = true;
}

bool ActionBasicSampleInfo::actionNameZhIsSet() const
{
    return actionNameZhIsSet_;
}

void ActionBasicSampleInfo::unsetactionNameZh()
{
    actionNameZhIsSet_ = false;
}

std::string ActionBasicSampleInfo::getActionNameEn() const
{
    return actionNameEn_;
}

void ActionBasicSampleInfo::setActionNameEn(const std::string& value)
{
    actionNameEn_ = value;
    actionNameEnIsSet_ = true;
}

bool ActionBasicSampleInfo::actionNameEnIsSet() const
{
    return actionNameEnIsSet_;
}

void ActionBasicSampleInfo::unsetactionNameEn()
{
    actionNameEnIsSet_ = false;
}

std::string ActionBasicSampleInfo::getActionTag() const
{
    return actionTag_;
}

void ActionBasicSampleInfo::setActionTag(const std::string& value)
{
    actionTag_ = value;
    actionTagIsSet_ = true;
}

bool ActionBasicSampleInfo::actionTagIsSet() const
{
    return actionTagIsSet_;
}

void ActionBasicSampleInfo::unsetactionTag()
{
    actionTagIsSet_ = false;
}

std::string ActionBasicSampleInfo::getCatalog() const
{
    return catalog_;
}

void ActionBasicSampleInfo::setCatalog(const std::string& value)
{
    catalog_ = value;
    catalogIsSet_ = true;
}

bool ActionBasicSampleInfo::catalogIsSet() const
{
    return catalogIsSet_;
}

void ActionBasicSampleInfo::unsetcatalog()
{
    catalogIsSet_ = false;
}

int32_t ActionBasicSampleInfo::getRecommendedValue() const
{
    return recommendedValue_;
}

void ActionBasicSampleInfo::setRecommendedValue(int32_t value)
{
    recommendedValue_ = value;
    recommendedValueIsSet_ = true;
}

bool ActionBasicSampleInfo::recommendedValueIsSet() const
{
    return recommendedValueIsSet_;
}

void ActionBasicSampleInfo::unsetrecommendedValue()
{
    recommendedValueIsSet_ = false;
}

bool ActionBasicSampleInfo::isIsSelected() const
{
    return isSelected_;
}

void ActionBasicSampleInfo::setIsSelected(bool value)
{
    isSelected_ = value;
    isSelectedIsSet_ = true;
}

bool ActionBasicSampleInfo::isSelectedIsSet() const
{
    return isSelectedIsSet_;
}

void ActionBasicSampleInfo::unsetisSelected()
{
    isSelectedIsSet_ = false;
}

}
}
}
}
}


