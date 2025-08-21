

#include "huaweicloud/cfw/v1/model/AccountVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AccountVO::AccountVO()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    accountName_ = "";
    accountNameIsSet_ = false;
    eipCountProtected_ = 0;
    eipCountProtectedIsSet_ = false;
    eipCountTotal_ = 0;
    eipCountTotalIsSet_ = false;
    eipCountUnprotected_ = 0;
    eipCountUnprotectedIsSet_ = false;
    organizationId_ = "";
    organizationIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
}

AccountVO::~AccountVO() = default;

void AccountVO::validate()
{
}

web::json::value AccountVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(accountNameIsSet_) {
        val[utility::conversions::to_string_t("account_name")] = ModelBase::toJson(accountName_);
    }
    if(eipCountProtectedIsSet_) {
        val[utility::conversions::to_string_t("eip_count_protected")] = ModelBase::toJson(eipCountProtected_);
    }
    if(eipCountTotalIsSet_) {
        val[utility::conversions::to_string_t("eip_count_total")] = ModelBase::toJson(eipCountTotal_);
    }
    if(eipCountUnprotectedIsSet_) {
        val[utility::conversions::to_string_t("eip_count_unprotected")] = ModelBase::toJson(eipCountUnprotected_);
    }
    if(organizationIdIsSet_) {
        val[utility::conversions::to_string_t("organization_id")] = ModelBase::toJson(organizationId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }

    return val;
}
bool AccountVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_count_protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_count_protected"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipCountProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_count_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_count_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipCountTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_count_unprotected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_count_unprotected"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipCountUnprotected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganizationId(refVal);
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
    return ok;
}


std::string AccountVO::getAccountId() const
{
    return accountId_;
}

void AccountVO::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool AccountVO::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void AccountVO::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string AccountVO::getAccountName() const
{
    return accountName_;
}

void AccountVO::setAccountName(const std::string& value)
{
    accountName_ = value;
    accountNameIsSet_ = true;
}

bool AccountVO::accountNameIsSet() const
{
    return accountNameIsSet_;
}

void AccountVO::unsetaccountName()
{
    accountNameIsSet_ = false;
}

int32_t AccountVO::getEipCountProtected() const
{
    return eipCountProtected_;
}

void AccountVO::setEipCountProtected(int32_t value)
{
    eipCountProtected_ = value;
    eipCountProtectedIsSet_ = true;
}

bool AccountVO::eipCountProtectedIsSet() const
{
    return eipCountProtectedIsSet_;
}

void AccountVO::unseteipCountProtected()
{
    eipCountProtectedIsSet_ = false;
}

int32_t AccountVO::getEipCountTotal() const
{
    return eipCountTotal_;
}

void AccountVO::setEipCountTotal(int32_t value)
{
    eipCountTotal_ = value;
    eipCountTotalIsSet_ = true;
}

bool AccountVO::eipCountTotalIsSet() const
{
    return eipCountTotalIsSet_;
}

void AccountVO::unseteipCountTotal()
{
    eipCountTotalIsSet_ = false;
}

int32_t AccountVO::getEipCountUnprotected() const
{
    return eipCountUnprotected_;
}

void AccountVO::setEipCountUnprotected(int32_t value)
{
    eipCountUnprotected_ = value;
    eipCountUnprotectedIsSet_ = true;
}

bool AccountVO::eipCountUnprotectedIsSet() const
{
    return eipCountUnprotectedIsSet_;
}

void AccountVO::unseteipCountUnprotected()
{
    eipCountUnprotectedIsSet_ = false;
}

std::string AccountVO::getOrganizationId() const
{
    return organizationId_;
}

void AccountVO::setOrganizationId(const std::string& value)
{
    organizationId_ = value;
    organizationIdIsSet_ = true;
}

bool AccountVO::organizationIdIsSet() const
{
    return organizationIdIsSet_;
}

void AccountVO::unsetorganizationId()
{
    organizationIdIsSet_ = false;
}

std::string AccountVO::getProjectId() const
{
    return projectId_;
}

void AccountVO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AccountVO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AccountVO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AccountVO::getProjectName() const
{
    return projectName_;
}

void AccountVO::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool AccountVO::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void AccountVO::unsetprojectName()
{
    projectNameIsSet_ = false;
}

}
}
}
}
}


