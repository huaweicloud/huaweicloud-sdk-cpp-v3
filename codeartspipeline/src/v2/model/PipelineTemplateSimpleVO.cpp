

#include "huaweicloud/codeartspipeline/v2/model/PipelineTemplateSimpleVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineTemplateSimpleVO::PipelineTemplateSimpleVO()
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
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    isCollect_ = false;
    isCollectIsSet_ = false;
    isShowSource_ = "";
    isShowSourceIsSet_ = false;
    stagesIsSet_ = false;
}

PipelineTemplateSimpleVO::~PipelineTemplateSimpleVO() = default;

void PipelineTemplateSimpleVO::validate()
{
}

web::json::value PipelineTemplateSimpleVO::toJson() const
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
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
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
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }

    return val;
}
bool PipelineTemplateSimpleVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
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
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShowSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineTemplateSimpleVO_stages> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    return ok;
}


std::string PipelineTemplateSimpleVO::getId() const
{
    return id_;
}

void PipelineTemplateSimpleVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineTemplateSimpleVO::idIsSet() const
{
    return idIsSet_;
}

void PipelineTemplateSimpleVO::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getName() const
{
    return name_;
}

void PipelineTemplateSimpleVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineTemplateSimpleVO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineTemplateSimpleVO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getIcon() const
{
    return icon_;
}

void PipelineTemplateSimpleVO::setIcon(const std::string& value)
{
    icon_ = value;
    iconIsSet_ = true;
}

bool PipelineTemplateSimpleVO::iconIsSet() const
{
    return iconIsSet_;
}

void PipelineTemplateSimpleVO::unseticon()
{
    iconIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getManifestVersion() const
{
    return manifestVersion_;
}

void PipelineTemplateSimpleVO::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PipelineTemplateSimpleVO::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PipelineTemplateSimpleVO::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getLanguage() const
{
    return language_;
}

void PipelineTemplateSimpleVO::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool PipelineTemplateSimpleVO::languageIsSet() const
{
    return languageIsSet_;
}

void PipelineTemplateSimpleVO::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getDescription() const
{
    return description_;
}

void PipelineTemplateSimpleVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PipelineTemplateSimpleVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PipelineTemplateSimpleVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool PipelineTemplateSimpleVO::isIsSystem() const
{
    return isSystem_;
}

void PipelineTemplateSimpleVO::setIsSystem(bool value)
{
    isSystem_ = value;
    isSystemIsSet_ = true;
}

bool PipelineTemplateSimpleVO::isSystemIsSet() const
{
    return isSystemIsSet_;
}

void PipelineTemplateSimpleVO::unsetisSystem()
{
    isSystemIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getRegion() const
{
    return region_;
}

void PipelineTemplateSimpleVO::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool PipelineTemplateSimpleVO::regionIsSet() const
{
    return regionIsSet_;
}

void PipelineTemplateSimpleVO::unsetregion()
{
    regionIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getDomainId() const
{
    return domainId_;
}

void PipelineTemplateSimpleVO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PipelineTemplateSimpleVO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PipelineTemplateSimpleVO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getCreatorId() const
{
    return creatorId_;
}

void PipelineTemplateSimpleVO::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool PipelineTemplateSimpleVO::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void PipelineTemplateSimpleVO::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getCreatorName() const
{
    return creatorName_;
}

void PipelineTemplateSimpleVO::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool PipelineTemplateSimpleVO::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void PipelineTemplateSimpleVO::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getUpdaterId() const
{
    return updaterId_;
}

void PipelineTemplateSimpleVO::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool PipelineTemplateSimpleVO::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void PipelineTemplateSimpleVO::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

bool PipelineTemplateSimpleVO::isIsCollect() const
{
    return isCollect_;
}

void PipelineTemplateSimpleVO::setIsCollect(bool value)
{
    isCollect_ = value;
    isCollectIsSet_ = true;
}

bool PipelineTemplateSimpleVO::isCollectIsSet() const
{
    return isCollectIsSet_;
}

void PipelineTemplateSimpleVO::unsetisCollect()
{
    isCollectIsSet_ = false;
}

std::string PipelineTemplateSimpleVO::getIsShowSource() const
{
    return isShowSource_;
}

void PipelineTemplateSimpleVO::setIsShowSource(const std::string& value)
{
    isShowSource_ = value;
    isShowSourceIsSet_ = true;
}

bool PipelineTemplateSimpleVO::isShowSourceIsSet() const
{
    return isShowSourceIsSet_;
}

void PipelineTemplateSimpleVO::unsetisShowSource()
{
    isShowSourceIsSet_ = false;
}

std::vector<PipelineTemplateSimpleVO_stages>& PipelineTemplateSimpleVO::getStages()
{
    return stages_;
}

void PipelineTemplateSimpleVO::setStages(const std::vector<PipelineTemplateSimpleVO_stages>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool PipelineTemplateSimpleVO::stagesIsSet() const
{
    return stagesIsSet_;
}

void PipelineTemplateSimpleVO::unsetstages()
{
    stagesIsSet_ = false;
}

}
}
}
}
}


