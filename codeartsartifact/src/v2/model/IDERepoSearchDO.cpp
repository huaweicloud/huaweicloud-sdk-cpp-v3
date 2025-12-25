

#include "huaweicloud/codeartsartifact/v2/model/IDERepoSearchDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




IDERepoSearchDO::IDERepoSearchDO()
{
    artifactName_ = "";
    artifactNameIsSet_ = false;
    artifactType_ = "";
    artifactTypeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    inProject_ = false;
    inProjectIsSet_ = false;
}

IDERepoSearchDO::~IDERepoSearchDO() = default;

void IDERepoSearchDO::validate()
{
}

web::json::value IDERepoSearchDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(artifactNameIsSet_) {
        val[utility::conversions::to_string_t("artifact_name")] = ModelBase::toJson(artifactName_);
    }
    if(artifactTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_type")] = ModelBase::toJson(artifactType_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(inProjectIsSet_) {
        val[utility::conversions::to_string_t("in_project")] = ModelBase::toJson(inProject_);
    }

    return val;
}
bool IDERepoSearchDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("artifact_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("in_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_project"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInProject(refVal);
        }
    }
    return ok;
}


std::string IDERepoSearchDO::getArtifactName() const
{
    return artifactName_;
}

void IDERepoSearchDO::setArtifactName(const std::string& value)
{
    artifactName_ = value;
    artifactNameIsSet_ = true;
}

bool IDERepoSearchDO::artifactNameIsSet() const
{
    return artifactNameIsSet_;
}

void IDERepoSearchDO::unsetartifactName()
{
    artifactNameIsSet_ = false;
}

std::string IDERepoSearchDO::getArtifactType() const
{
    return artifactType_;
}

void IDERepoSearchDO::setArtifactType(const std::string& value)
{
    artifactType_ = value;
    artifactTypeIsSet_ = true;
}

bool IDERepoSearchDO::artifactTypeIsSet() const
{
    return artifactTypeIsSet_;
}

void IDERepoSearchDO::unsetartifactType()
{
    artifactTypeIsSet_ = false;
}

int32_t IDERepoSearchDO::getPageNo() const
{
    return pageNo_;
}

void IDERepoSearchDO::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool IDERepoSearchDO::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void IDERepoSearchDO::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t IDERepoSearchDO::getPageSize() const
{
    return pageSize_;
}

void IDERepoSearchDO::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool IDERepoSearchDO::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void IDERepoSearchDO::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string IDERepoSearchDO::getProjectId() const
{
    return projectId_;
}

void IDERepoSearchDO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool IDERepoSearchDO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void IDERepoSearchDO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool IDERepoSearchDO::isInProject() const
{
    return inProject_;
}

void IDERepoSearchDO::setInProject(bool value)
{
    inProject_ = value;
    inProjectIsSet_ = true;
}

bool IDERepoSearchDO::inProjectIsSet() const
{
    return inProjectIsSet_;
}

void IDERepoSearchDO::unsetinProject()
{
    inProjectIsSet_ = false;
}

}
}
}
}
}


