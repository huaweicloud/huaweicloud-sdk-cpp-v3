

#include "huaweicloud/metastudio/v1/model/ActionTagInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActionTagInfo::ActionTagInfo()
{
    actionNameZh_ = "";
    actionNameZhIsSet_ = false;
    actionNameEn_ = "";
    actionNameEnIsSet_ = false;
    actionDuration_ = 0.0f;
    actionDurationIsSet_ = false;
    catalog_ = "";
    catalogIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
}

ActionTagInfo::~ActionTagInfo() = default;

void ActionTagInfo::validate()
{
}

web::json::value ActionTagInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionNameZhIsSet_) {
        val[utility::conversions::to_string_t("action_name_zh")] = ModelBase::toJson(actionNameZh_);
    }
    if(actionNameEnIsSet_) {
        val[utility::conversions::to_string_t("action_name_en")] = ModelBase::toJson(actionNameEn_);
    }
    if(actionDurationIsSet_) {
        val[utility::conversions::to_string_t("action_duration")] = ModelBase::toJson(actionDuration_);
    }
    if(catalogIsSet_) {
        val[utility::conversions::to_string_t("catalog")] = ModelBase::toJson(catalog_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool ActionTagInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("action_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionDuration(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string ActionTagInfo::getActionNameZh() const
{
    return actionNameZh_;
}

void ActionTagInfo::setActionNameZh(const std::string& value)
{
    actionNameZh_ = value;
    actionNameZhIsSet_ = true;
}

bool ActionTagInfo::actionNameZhIsSet() const
{
    return actionNameZhIsSet_;
}

void ActionTagInfo::unsetactionNameZh()
{
    actionNameZhIsSet_ = false;
}

std::string ActionTagInfo::getActionNameEn() const
{
    return actionNameEn_;
}

void ActionTagInfo::setActionNameEn(const std::string& value)
{
    actionNameEn_ = value;
    actionNameEnIsSet_ = true;
}

bool ActionTagInfo::actionNameEnIsSet() const
{
    return actionNameEnIsSet_;
}

void ActionTagInfo::unsetactionNameEn()
{
    actionNameEnIsSet_ = false;
}

float ActionTagInfo::getActionDuration() const
{
    return actionDuration_;
}

void ActionTagInfo::setActionDuration(float value)
{
    actionDuration_ = value;
    actionDurationIsSet_ = true;
}

bool ActionTagInfo::actionDurationIsSet() const
{
    return actionDurationIsSet_;
}

void ActionTagInfo::unsetactionDuration()
{
    actionDurationIsSet_ = false;
}

std::string ActionTagInfo::getCatalog() const
{
    return catalog_;
}

void ActionTagInfo::setCatalog(const std::string& value)
{
    catalog_ = value;
    catalogIsSet_ = true;
}

bool ActionTagInfo::catalogIsSet() const
{
    return catalogIsSet_;
}

void ActionTagInfo::unsetcatalog()
{
    catalogIsSet_ = false;
}

std::string ActionTagInfo::getFileName() const
{
    return fileName_;
}

void ActionTagInfo::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ActionTagInfo::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ActionTagInfo::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ActionTagInfo::getTag() const
{
    return tag_;
}

void ActionTagInfo::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ActionTagInfo::tagIsSet() const
{
    return tagIsSet_;
}

void ActionTagInfo::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


