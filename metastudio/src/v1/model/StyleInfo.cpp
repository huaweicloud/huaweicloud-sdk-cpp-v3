

#include "huaweicloud/metastudio/v1/model/StyleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StyleInfo::StyleInfo()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    tagsIsSet_ = false;
    styleAssetsIsSet_ = false;
    extraMetaIsSet_ = false;
    styleId_ = "";
    styleIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

StyleInfo::~StyleInfo() = default;

void StyleInfo::validate()
{
}

web::json::value StyleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(styleAssetsIsSet_) {
        val[utility::conversions::to_string_t("style_assets")] = ModelBase::toJson(styleAssets_);
    }
    if(extraMetaIsSet_) {
        val[utility::conversions::to_string_t("extra_meta")] = ModelBase::toJson(extraMeta_);
    }
    if(styleIdIsSet_) {
        val[utility::conversions::to_string_t("style_id")] = ModelBase::toJson(styleId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool StyleInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style_assets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_assets"));
        if(!fieldValue.is_null())
        {
            std::vector<StyleAssetItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleAssets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_meta"));
        if(!fieldValue.is_null())
        {
            StyleExtraMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string StyleInfo::getName() const
{
    return name_;
}

void StyleInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StyleInfo::nameIsSet() const
{
    return nameIsSet_;
}

void StyleInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string StyleInfo::getDescription() const
{
    return description_;
}

void StyleInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool StyleInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void StyleInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string StyleInfo::getProjectId() const
{
    return projectId_;
}

void StyleInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool StyleInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void StyleInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string StyleInfo::getStatus() const
{
    return status_;
}

void StyleInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StyleInfo::statusIsSet() const
{
    return statusIsSet_;
}

void StyleInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StyleInfo::getSex() const
{
    return sex_;
}

void StyleInfo::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool StyleInfo::sexIsSet() const
{
    return sexIsSet_;
}

void StyleInfo::unsetsex()
{
    sexIsSet_ = false;
}

std::vector<std::string>& StyleInfo::getTags()
{
    return tags_;
}

void StyleInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool StyleInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void StyleInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<StyleAssetItem>& StyleInfo::getStyleAssets()
{
    return styleAssets_;
}

void StyleInfo::setStyleAssets(const std::vector<StyleAssetItem>& value)
{
    styleAssets_ = value;
    styleAssetsIsSet_ = true;
}

bool StyleInfo::styleAssetsIsSet() const
{
    return styleAssetsIsSet_;
}

void StyleInfo::unsetstyleAssets()
{
    styleAssetsIsSet_ = false;
}

StyleExtraMeta StyleInfo::getExtraMeta() const
{
    return extraMeta_;
}

void StyleInfo::setExtraMeta(const StyleExtraMeta& value)
{
    extraMeta_ = value;
    extraMetaIsSet_ = true;
}

bool StyleInfo::extraMetaIsSet() const
{
    return extraMetaIsSet_;
}

void StyleInfo::unsetextraMeta()
{
    extraMetaIsSet_ = false;
}

std::string StyleInfo::getStyleId() const
{
    return styleId_;
}

void StyleInfo::setStyleId(const std::string& value)
{
    styleId_ = value;
    styleIdIsSet_ = true;
}

bool StyleInfo::styleIdIsSet() const
{
    return styleIdIsSet_;
}

void StyleInfo::unsetstyleId()
{
    styleIdIsSet_ = false;
}

std::string StyleInfo::getCreateTime() const
{
    return createTime_;
}

void StyleInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool StyleInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void StyleInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string StyleInfo::getUpdateTime() const
{
    return updateTime_;
}

void StyleInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool StyleInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void StyleInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string StyleInfo::getState() const
{
    return state_;
}

void StyleInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool StyleInfo::stateIsSet() const
{
    return stateIsSet_;
}

void StyleInfo::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


