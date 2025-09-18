

#include "huaweicloud/projectman/v4/model/GetProjectInfoV4Result_project.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




GetProjectInfoV4Result_project::GetProjectInfoV4Result_project()
{
    projectNumId_ = 0;
    projectNumIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    createdOn_ = 0L;
    createdOnIsSet_ = false;
    updatedOn_ = 0L;
    updatedOnIsSet_ = false;
    projectType_ = "";
    projectTypeIsSet_ = false;
    archive_ = 0;
    archiveIsSet_ = false;
    enterpriseId_ = "";
    enterpriseIdIsSet_ = false;
    projectCode_ = "";
    projectCodeIsSet_ = false;
    creatorIsSet_ = false;
}

GetProjectInfoV4Result_project::~GetProjectInfoV4Result_project() = default;

void GetProjectInfoV4Result_project::validate()
{
}

web::json::value GetProjectInfoV4Result_project::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectNumIdIsSet_) {
        val[utility::conversions::to_string_t("project_num_id")] = ModelBase::toJson(projectNumId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(createdOnIsSet_) {
        val[utility::conversions::to_string_t("created_on")] = ModelBase::toJson(createdOn_);
    }
    if(updatedOnIsSet_) {
        val[utility::conversions::to_string_t("updated_on")] = ModelBase::toJson(updatedOn_);
    }
    if(projectTypeIsSet_) {
        val[utility::conversions::to_string_t("project_type")] = ModelBase::toJson(projectType_);
    }
    if(archiveIsSet_) {
        val[utility::conversions::to_string_t("archive")] = ModelBase::toJson(archive_);
    }
    if(enterpriseIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_id")] = ModelBase::toJson(enterpriseId_);
    }
    if(projectCodeIsSet_) {
        val[utility::conversions::to_string_t("project_code")] = ModelBase::toJson(projectCode_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }

    return val;
}
bool GetProjectInfoV4Result_project::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_num_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_num_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectNumId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_on"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_on"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_on"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedOn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archive"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            GetProjectInfoV4Result_project_creator refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    return ok;
}


int32_t GetProjectInfoV4Result_project::getProjectNumId() const
{
    return projectNumId_;
}

void GetProjectInfoV4Result_project::setProjectNumId(int32_t value)
{
    projectNumId_ = value;
    projectNumIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project::projectNumIdIsSet() const
{
    return projectNumIdIsSet_;
}

void GetProjectInfoV4Result_project::unsetprojectNumId()
{
    projectNumIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project::getProjectId() const
{
    return projectId_;
}

void GetProjectInfoV4Result_project::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void GetProjectInfoV4Result_project::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project::getName() const
{
    return name_;
}

void GetProjectInfoV4Result_project::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GetProjectInfoV4Result_project::nameIsSet() const
{
    return nameIsSet_;
}

void GetProjectInfoV4Result_project::unsetname()
{
    nameIsSet_ = false;
}

int64_t GetProjectInfoV4Result_project::getCreatedOn() const
{
    return createdOn_;
}

void GetProjectInfoV4Result_project::setCreatedOn(int64_t value)
{
    createdOn_ = value;
    createdOnIsSet_ = true;
}

bool GetProjectInfoV4Result_project::createdOnIsSet() const
{
    return createdOnIsSet_;
}

void GetProjectInfoV4Result_project::unsetcreatedOn()
{
    createdOnIsSet_ = false;
}

int64_t GetProjectInfoV4Result_project::getUpdatedOn() const
{
    return updatedOn_;
}

void GetProjectInfoV4Result_project::setUpdatedOn(int64_t value)
{
    updatedOn_ = value;
    updatedOnIsSet_ = true;
}

bool GetProjectInfoV4Result_project::updatedOnIsSet() const
{
    return updatedOnIsSet_;
}

void GetProjectInfoV4Result_project::unsetupdatedOn()
{
    updatedOnIsSet_ = false;
}

std::string GetProjectInfoV4Result_project::getProjectType() const
{
    return projectType_;
}

void GetProjectInfoV4Result_project::setProjectType(const std::string& value)
{
    projectType_ = value;
    projectTypeIsSet_ = true;
}

bool GetProjectInfoV4Result_project::projectTypeIsSet() const
{
    return projectTypeIsSet_;
}

void GetProjectInfoV4Result_project::unsetprojectType()
{
    projectTypeIsSet_ = false;
}

int32_t GetProjectInfoV4Result_project::getArchive() const
{
    return archive_;
}

void GetProjectInfoV4Result_project::setArchive(int32_t value)
{
    archive_ = value;
    archiveIsSet_ = true;
}

bool GetProjectInfoV4Result_project::archiveIsSet() const
{
    return archiveIsSet_;
}

void GetProjectInfoV4Result_project::unsetarchive()
{
    archiveIsSet_ = false;
}

std::string GetProjectInfoV4Result_project::getEnterpriseId() const
{
    return enterpriseId_;
}

void GetProjectInfoV4Result_project::setEnterpriseId(const std::string& value)
{
    enterpriseId_ = value;
    enterpriseIdIsSet_ = true;
}

bool GetProjectInfoV4Result_project::enterpriseIdIsSet() const
{
    return enterpriseIdIsSet_;
}

void GetProjectInfoV4Result_project::unsetenterpriseId()
{
    enterpriseIdIsSet_ = false;
}

std::string GetProjectInfoV4Result_project::getProjectCode() const
{
    return projectCode_;
}

void GetProjectInfoV4Result_project::setProjectCode(const std::string& value)
{
    projectCode_ = value;
    projectCodeIsSet_ = true;
}

bool GetProjectInfoV4Result_project::projectCodeIsSet() const
{
    return projectCodeIsSet_;
}

void GetProjectInfoV4Result_project::unsetprojectCode()
{
    projectCodeIsSet_ = false;
}

GetProjectInfoV4Result_project_creator GetProjectInfoV4Result_project::getCreator() const
{
    return creator_;
}

void GetProjectInfoV4Result_project::setCreator(const GetProjectInfoV4Result_project_creator& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool GetProjectInfoV4Result_project::creatorIsSet() const
{
    return creatorIsSet_;
}

void GetProjectInfoV4Result_project::unsetcreator()
{
    creatorIsSet_ = false;
}

}
}
}
}
}


