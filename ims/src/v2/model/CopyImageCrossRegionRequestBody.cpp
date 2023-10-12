

#include "huaweicloud/ims/v2/model/CopyImageCrossRegionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CopyImageCrossRegionRequestBody::CopyImageCrossRegionRequestBody()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

CopyImageCrossRegionRequestBody::~CopyImageCrossRegionRequestBody() = default;

void CopyImageCrossRegionRequestBody::validate()
{
}

web::json::value CopyImageCrossRegionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}
bool CopyImageCrossRegionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}


std::string CopyImageCrossRegionRequestBody::getAgencyName() const
{
    return agencyName_;
}

void CopyImageCrossRegionRequestBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string CopyImageCrossRegionRequestBody::getDescription() const
{
    return description_;
}

void CopyImageCrossRegionRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CopyImageCrossRegionRequestBody::getName() const
{
    return name_;
}

void CopyImageCrossRegionRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyImageCrossRegionRequestBody::getProjectName() const
{
    return projectName_;
}

void CopyImageCrossRegionRequestBody::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string CopyImageCrossRegionRequestBody::getRegion() const
{
    return region_;
}

void CopyImageCrossRegionRequestBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::regionIsSet() const
{
    return regionIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetregion()
{
    regionIsSet_ = false;
}

std::string CopyImageCrossRegionRequestBody::getVaultId() const
{
    return vaultId_;
}

void CopyImageCrossRegionRequestBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool CopyImageCrossRegionRequestBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void CopyImageCrossRegionRequestBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


