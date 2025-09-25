

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineTemplateDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineTemplateDetailResponse::ShowPipelineTemplateDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    icon_ = "";
    iconIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    isSystem_ = false;
    isSystemIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    variablesIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    isCollect_ = "";
    isCollectIsSet_ = false;
    isShowSource_ = false;
    isShowSourceIsSet_ = false;
    definition_ = "";
    definitionIsSet_ = false;
}

ShowPipelineTemplateDetailResponse::~ShowPipelineTemplateDetailResponse() = default;

void ShowPipelineTemplateDetailResponse::validate()
{
}

web::json::value ShowPipelineTemplateDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(iconIsSet_) {
        val[utility::conversions::to_string_t("icon")] = ModelBase::toJson(icon_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(isSystemIsSet_) {
        val[utility::conversions::to_string_t("is_system")] = ModelBase::toJson(isSystem_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(updaterIdIsSet_) {
        val[utility::conversions::to_string_t("updater_id")] = ModelBase::toJson(updaterId_);
    }
    if(isCollectIsSet_) {
        val[utility::conversions::to_string_t("is_collect")] = ModelBase::toJson(isCollect_);
    }
    if(isShowSourceIsSet_) {
        val[utility::conversions::to_string_t("is_show_source")] = ModelBase::toJson(isShowSource_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }

    return val;
}
bool ShowPipelineTemplateDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIcon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_system"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_system"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSystem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_collect"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_source"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShowSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinition(refVal);
        }
    }
    return ok;
}


std::string ShowPipelineTemplateDetailResponse::getId() const
{
    return id_;
}

void ShowPipelineTemplateDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getName() const
{
    return name_;
}

void ShowPipelineTemplateDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getIcon() const
{
    return icon_;
}

void ShowPipelineTemplateDetailResponse::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::iconIsSet() const
{
    return iconIsSet_;
}

void ShowPipelineTemplateDetailResponse::unseticon()
{
    iconIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getManifestVersion() const
{
    return manifestVersion_;
}

void ShowPipelineTemplateDetailResponse::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getLanguage() const
{
    return language_;
}

void ShowPipelineTemplateDetailResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getDescription() const
{
    return description_;
}

void ShowPipelineTemplateDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool ShowPipelineTemplateDetailResponse::isIsSystem() const
{
    return isSystem_;
}

void ShowPipelineTemplateDetailResponse::setIsSystem(bool value)
{
    isSystem_ = value;
    isSystemIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::isSystemIsSet() const
{
    return isSystemIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetisSystem()
{
    isSystemIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getRegion() const
{
    return region_;
}

void ShowPipelineTemplateDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowPipelineTemplateDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<CustomVariable>& ShowPipelineTemplateDetailResponse::getVariables()
{
    return variables_;
}

void ShowPipelineTemplateDetailResponse::setVariables(const std::vector<CustomVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::variablesIsSet() const
{
    return variablesIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetvariables()
{
    variablesIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowPipelineTemplateDetailResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getUpdaterId() const
{
    return updaterId_;
}

void ShowPipelineTemplateDetailResponse::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getIsCollect() const
{
    return isCollect_;
}

void ShowPipelineTemplateDetailResponse::setIsCollect(const std::string& value)
{
    isCollect_ = value;
    isCollectIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::isCollectIsSet() const
{
    return isCollectIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetisCollect()
{
    isCollectIsSet_ = false;
}

bool ShowPipelineTemplateDetailResponse::isIsShowSource() const
{
    return isShowSource_;
}

void ShowPipelineTemplateDetailResponse::setIsShowSource(bool value)
{
    isShowSource_ = value;
    isShowSourceIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::isShowSourceIsSet() const
{
    return isShowSourceIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetisShowSource()
{
    isShowSourceIsSet_ = false;
}

std::string ShowPipelineTemplateDetailResponse::getDefinition() const
{
    return definition_;
}

void ShowPipelineTemplateDetailResponse::setDefinition(const std::string& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool ShowPipelineTemplateDetailResponse::definitionIsSet() const
{
    return definitionIsSet_;
}

void ShowPipelineTemplateDetailResponse::unsetdefinition()
{
    definitionIsSet_ = false;
}

}
}
}
}
}


