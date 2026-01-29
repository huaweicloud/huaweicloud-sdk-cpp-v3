

#include "huaweicloud/codeartsartifact/v2/model/PrivilegeProjectInfoV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




PrivilegeProjectInfoV5::PrivilegeProjectInfoV5()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    repositoryNum_ = 0;
    repositoryNumIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    idsIsSet_ = false;
    totalRecords_ = 0;
    totalRecordsIsSet_ = false;
    associated_ = false;
    associatedIsSet_ = false;
    projectInfoIsSet_ = false;
}

PrivilegeProjectInfoV5::~PrivilegeProjectInfoV5() = default;

void PrivilegeProjectInfoV5::validate()
{
}

web::json::value PrivilegeProjectInfoV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(repositoryNumIsSet_) {
        val[utility::conversions::to_string_t("repository_num")] = ModelBase::toJson(repositoryNum_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(totalRecordsIsSet_) {
        val[utility::conversions::to_string_t("total_records")] = ModelBase::toJson(totalRecords_);
    }
    if(associatedIsSet_) {
        val[utility::conversions::to_string_t("associated")] = ModelBase::toJson(associated_);
    }
    if(projectInfoIsSet_) {
        val[utility::conversions::to_string_t("project_info")] = ModelBase::toJson(*projectInfo_);
    }

    return val;
}
bool PrivilegeProjectInfoV5::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_records"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PrivilegeProjectInfoV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectInfo(refVal);
        }
    }
    return ok;
}


std::string PrivilegeProjectInfoV5::getId() const
{
    return id_;
}

void PrivilegeProjectInfoV5::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PrivilegeProjectInfoV5::idIsSet() const
{
    return idIsSet_;
}

void PrivilegeProjectInfoV5::unsetid()
{
    idIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getName() const
{
    return name_;
}

void PrivilegeProjectInfoV5::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PrivilegeProjectInfoV5::nameIsSet() const
{
    return nameIsSet_;
}

void PrivilegeProjectInfoV5::unsetname()
{
    nameIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getStatus() const
{
    return status_;
}

void PrivilegeProjectInfoV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PrivilegeProjectInfoV5::statusIsSet() const
{
    return statusIsSet_;
}

void PrivilegeProjectInfoV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getProjectId() const
{
    return projectId_;
}

void PrivilegeProjectInfoV5::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PrivilegeProjectInfoV5::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PrivilegeProjectInfoV5::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getCreatedTime() const
{
    return createdTime_;
}

void PrivilegeProjectInfoV5::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool PrivilegeProjectInfoV5::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void PrivilegeProjectInfoV5::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int32_t PrivilegeProjectInfoV5::getRepositoryNum() const
{
    return repositoryNum_;
}

void PrivilegeProjectInfoV5::setRepositoryNum(int32_t value)
{
    repositoryNum_ = value;
    repositoryNumIsSet_ = true;
}

bool PrivilegeProjectInfoV5::repositoryNumIsSet() const
{
    return repositoryNumIsSet_;
}

void PrivilegeProjectInfoV5::unsetrepositoryNum()
{
    repositoryNumIsSet_ = false;
}

int32_t PrivilegeProjectInfoV5::getTotal() const
{
    return total_;
}

void PrivilegeProjectInfoV5::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PrivilegeProjectInfoV5::totalIsSet() const
{
    return totalIsSet_;
}

void PrivilegeProjectInfoV5::unsettotal()
{
    totalIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getRepositoryId() const
{
    return repositoryId_;
}

void PrivilegeProjectInfoV5::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool PrivilegeProjectInfoV5::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void PrivilegeProjectInfoV5::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getRegion() const
{
    return region_;
}

void PrivilegeProjectInfoV5::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool PrivilegeProjectInfoV5::regionIsSet() const
{
    return regionIsSet_;
}

void PrivilegeProjectInfoV5::unsetregion()
{
    regionIsSet_ = false;
}

std::string PrivilegeProjectInfoV5::getDomainId() const
{
    return domainId_;
}

void PrivilegeProjectInfoV5::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PrivilegeProjectInfoV5::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PrivilegeProjectInfoV5::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<std::string>& PrivilegeProjectInfoV5::getIds()
{
    return ids_;
}

void PrivilegeProjectInfoV5::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool PrivilegeProjectInfoV5::idsIsSet() const
{
    return idsIsSet_;
}

void PrivilegeProjectInfoV5::unsetids()
{
    idsIsSet_ = false;
}

int32_t PrivilegeProjectInfoV5::getTotalRecords() const
{
    return totalRecords_;
}

void PrivilegeProjectInfoV5::setTotalRecords(int32_t value)
{
    totalRecords_ = value;
    totalRecordsIsSet_ = true;
}

bool PrivilegeProjectInfoV5::totalRecordsIsSet() const
{
    return totalRecordsIsSet_;
}

void PrivilegeProjectInfoV5::unsettotalRecords()
{
    totalRecordsIsSet_ = false;
}

bool PrivilegeProjectInfoV5::isAssociated() const
{
    return associated_;
}

void PrivilegeProjectInfoV5::setAssociated(bool value)
{
    associated_ = value;
    associatedIsSet_ = true;
}

bool PrivilegeProjectInfoV5::associatedIsSet() const
{
    return associatedIsSet_;
}

void PrivilegeProjectInfoV5::unsetassociated()
{
    associatedIsSet_ = false;
}

std::vector<PrivilegeProjectInfoV5>& PrivilegeProjectInfoV5::getProjectInfo()
{
    return *projectInfo_;
}

void PrivilegeProjectInfoV5::setProjectInfo(const std::vector<PrivilegeProjectInfoV5>& value)
{
    *projectInfo_ = value;
    projectInfoIsSet_ = true;
}

bool PrivilegeProjectInfoV5::projectInfoIsSet() const
{
    return projectInfoIsSet_;
}

void PrivilegeProjectInfoV5::unsetprojectInfo()
{
    projectInfoIsSet_ = false;
}

}
}
}
}
}


