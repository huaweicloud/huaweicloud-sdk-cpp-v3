

#include "huaweicloud/metastudio/v1/model/CreateStyleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateStyleRequestBody::CreateStyleRequestBody()
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
}

CreateStyleRequestBody::~CreateStyleRequestBody() = default;

void CreateStyleRequestBody::validate()
{
}

web::json::value CreateStyleRequestBody::toJson() const
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

    return val;
}
bool CreateStyleRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateStyleRequestBody::getName() const
{
    return name_;
}

void CreateStyleRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateStyleRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateStyleRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateStyleRequestBody::getDescription() const
{
    return description_;
}

void CreateStyleRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateStyleRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateStyleRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateStyleRequestBody::getProjectId() const
{
    return projectId_;
}

void CreateStyleRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateStyleRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateStyleRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateStyleRequestBody::getStatus() const
{
    return status_;
}

void CreateStyleRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateStyleRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void CreateStyleRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateStyleRequestBody::getSex() const
{
    return sex_;
}

void CreateStyleRequestBody::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool CreateStyleRequestBody::sexIsSet() const
{
    return sexIsSet_;
}

void CreateStyleRequestBody::unsetsex()
{
    sexIsSet_ = false;
}

std::vector<std::string>& CreateStyleRequestBody::getTags()
{
    return tags_;
}

void CreateStyleRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateStyleRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateStyleRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<StyleAssetItem>& CreateStyleRequestBody::getStyleAssets()
{
    return styleAssets_;
}

void CreateStyleRequestBody::setStyleAssets(const std::vector<StyleAssetItem>& value)
{
    styleAssets_ = value;
    styleAssetsIsSet_ = true;
}

bool CreateStyleRequestBody::styleAssetsIsSet() const
{
    return styleAssetsIsSet_;
}

void CreateStyleRequestBody::unsetstyleAssets()
{
    styleAssetsIsSet_ = false;
}

StyleExtraMeta CreateStyleRequestBody::getExtraMeta() const
{
    return extraMeta_;
}

void CreateStyleRequestBody::setExtraMeta(const StyleExtraMeta& value)
{
    extraMeta_ = value;
    extraMetaIsSet_ = true;
}

bool CreateStyleRequestBody::extraMetaIsSet() const
{
    return extraMetaIsSet_;
}

void CreateStyleRequestBody::unsetextraMeta()
{
    extraMetaIsSet_ = false;
}

}
}
}
}
}


