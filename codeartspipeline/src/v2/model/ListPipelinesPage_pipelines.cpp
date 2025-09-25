

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesPage_pipelines.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesPage_pipelines::ListPipelinesPage_pipelines()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    isCollect_ = false;
    isCollectIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    latestRunIsSet_ = false;
    convertSign_ = 0;
    convertSignIsSet_ = false;
    securityLevel_ = 0;
    securityLevelIsSet_ = false;
}

ListPipelinesPage_pipelines::~ListPipelinesPage_pipelines() = default;

void ListPipelinesPage_pipelines::validate()
{
}

web::json::value ListPipelinesPage_pipelines::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(isCollectIsSet_) {
        val[utility::conversions::to_string_t("is_collect")] = ModelBase::toJson(isCollect_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(latestRunIsSet_) {
        val[utility::conversions::to_string_t("latest_run")] = ModelBase::toJson(latestRun_);
    }
    if(convertSignIsSet_) {
        val[utility::conversions::to_string_t("convert_sign")] = ModelBase::toJson(convertSign_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }

    return val;
}
bool ListPipelinesPage_pipelines::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_publish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublish(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_run"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_run"));
        if(!fieldValue.is_null())
        {
            ListPipelinesPage_latest_run refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("convert_sign"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("convert_sign"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConvertSign(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    return ok;
}


std::string ListPipelinesPage_pipelines::getPipelineId() const
{
    return pipelineId_;
}

void ListPipelinesPage_pipelines::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ListPipelinesPage_pipelines::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ListPipelinesPage_pipelines::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ListPipelinesPage_pipelines::getName() const
{
    return name_;
}

void ListPipelinesPage_pipelines::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPipelinesPage_pipelines::nameIsSet() const
{
    return nameIsSet_;
}

void ListPipelinesPage_pipelines::unsetname()
{
    nameIsSet_ = false;
}

std::string ListPipelinesPage_pipelines::getProjectId() const
{
    return projectId_;
}

void ListPipelinesPage_pipelines::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelinesPage_pipelines::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelinesPage_pipelines::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPipelinesPage_pipelines::getProjectName() const
{
    return projectName_;
}

void ListPipelinesPage_pipelines::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ListPipelinesPage_pipelines::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ListPipelinesPage_pipelines::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ListPipelinesPage_pipelines::getComponentId() const
{
    return componentId_;
}

void ListPipelinesPage_pipelines::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListPipelinesPage_pipelines::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListPipelinesPage_pipelines::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

bool ListPipelinesPage_pipelines::isIsPublish() const
{
    return isPublish_;
}

void ListPipelinesPage_pipelines::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool ListPipelinesPage_pipelines::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void ListPipelinesPage_pipelines::unsetisPublish()
{
    isPublishIsSet_ = false;
}

bool ListPipelinesPage_pipelines::isIsCollect() const
{
    return isCollect_;
}

void ListPipelinesPage_pipelines::setIsCollect(bool value)
{
    isCollect_ = value;
    isCollectIsSet_ = true;
}

bool ListPipelinesPage_pipelines::isCollectIsSet() const
{
    return isCollectIsSet_;
}

void ListPipelinesPage_pipelines::unsetisCollect()
{
    isCollectIsSet_ = false;
}

std::string ListPipelinesPage_pipelines::getManifestVersion() const
{
    return manifestVersion_;
}

void ListPipelinesPage_pipelines::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ListPipelinesPage_pipelines::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ListPipelinesPage_pipelines::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

int64_t ListPipelinesPage_pipelines::getCreateTime() const
{
    return createTime_;
}

void ListPipelinesPage_pipelines::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListPipelinesPage_pipelines::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListPipelinesPage_pipelines::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

ListPipelinesPage_latest_run ListPipelinesPage_pipelines::getLatestRun() const
{
    return latestRun_;
}

void ListPipelinesPage_pipelines::setLatestRun(const ListPipelinesPage_latest_run& value)
{
    latestRun_ = value;
    latestRunIsSet_ = true;
}

bool ListPipelinesPage_pipelines::latestRunIsSet() const
{
    return latestRunIsSet_;
}

void ListPipelinesPage_pipelines::unsetlatestRun()
{
    latestRunIsSet_ = false;
}

int32_t ListPipelinesPage_pipelines::getConvertSign() const
{
    return convertSign_;
}

void ListPipelinesPage_pipelines::setConvertSign(int32_t value)
{
    convertSign_ = value;
    convertSignIsSet_ = true;
}

bool ListPipelinesPage_pipelines::convertSignIsSet() const
{
    return convertSignIsSet_;
}

void ListPipelinesPage_pipelines::unsetconvertSign()
{
    convertSignIsSet_ = false;
}

int32_t ListPipelinesPage_pipelines::getSecurityLevel() const
{
    return securityLevel_;
}

void ListPipelinesPage_pipelines::setSecurityLevel(int32_t value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool ListPipelinesPage_pipelines::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void ListPipelinesPage_pipelines::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

}
}
}
}
}


