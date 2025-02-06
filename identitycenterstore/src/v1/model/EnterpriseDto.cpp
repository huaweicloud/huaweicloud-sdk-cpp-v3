

#include "huaweicloud/identitycenterstore/v1/model/EnterpriseDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




EnterpriseDto::EnterpriseDto()
{
    costCenter_ = "";
    costCenterIsSet_ = false;
    department_ = "";
    departmentIsSet_ = false;
    division_ = "";
    divisionIsSet_ = false;
    employeeNumber_ = "";
    employeeNumberIsSet_ = false;
    managerIsSet_ = false;
    organization_ = "";
    organizationIsSet_ = false;
}

EnterpriseDto::~EnterpriseDto() = default;

void EnterpriseDto::validate()
{
}

web::json::value EnterpriseDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(costCenterIsSet_) {
        val[utility::conversions::to_string_t("cost_center")] = ModelBase::toJson(costCenter_);
    }
    if(departmentIsSet_) {
        val[utility::conversions::to_string_t("department")] = ModelBase::toJson(department_);
    }
    if(divisionIsSet_) {
        val[utility::conversions::to_string_t("division")] = ModelBase::toJson(division_);
    }
    if(employeeNumberIsSet_) {
        val[utility::conversions::to_string_t("employee_number")] = ModelBase::toJson(employeeNumber_);
    }
    if(managerIsSet_) {
        val[utility::conversions::to_string_t("manager")] = ModelBase::toJson(manager_);
    }
    if(organizationIsSet_) {
        val[utility::conversions::to_string_t("organization")] = ModelBase::toJson(organization_);
    }

    return val;
}
bool EnterpriseDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cost_center"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost_center"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCostCenter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("department"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("department"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("division"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("division"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDivision(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("employee_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("employee_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmployeeNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manager"));
        if(!fieldValue.is_null())
        {
            ManagerDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManager(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganization(refVal);
        }
    }
    return ok;
}


std::string EnterpriseDto::getCostCenter() const
{
    return costCenter_;
}

void EnterpriseDto::setCostCenter(const std::string& value)
{
    costCenter_ = value;
    costCenterIsSet_ = true;
}

bool EnterpriseDto::costCenterIsSet() const
{
    return costCenterIsSet_;
}

void EnterpriseDto::unsetcostCenter()
{
    costCenterIsSet_ = false;
}

std::string EnterpriseDto::getDepartment() const
{
    return department_;
}

void EnterpriseDto::setDepartment(const std::string& value)
{
    department_ = value;
    departmentIsSet_ = true;
}

bool EnterpriseDto::departmentIsSet() const
{
    return departmentIsSet_;
}

void EnterpriseDto::unsetdepartment()
{
    departmentIsSet_ = false;
}

std::string EnterpriseDto::getDivision() const
{
    return division_;
}

void EnterpriseDto::setDivision(const std::string& value)
{
    division_ = value;
    divisionIsSet_ = true;
}

bool EnterpriseDto::divisionIsSet() const
{
    return divisionIsSet_;
}

void EnterpriseDto::unsetdivision()
{
    divisionIsSet_ = false;
}

std::string EnterpriseDto::getEmployeeNumber() const
{
    return employeeNumber_;
}

void EnterpriseDto::setEmployeeNumber(const std::string& value)
{
    employeeNumber_ = value;
    employeeNumberIsSet_ = true;
}

bool EnterpriseDto::employeeNumberIsSet() const
{
    return employeeNumberIsSet_;
}

void EnterpriseDto::unsetemployeeNumber()
{
    employeeNumberIsSet_ = false;
}

ManagerDto EnterpriseDto::getManager() const
{
    return manager_;
}

void EnterpriseDto::setManager(const ManagerDto& value)
{
    manager_ = value;
    managerIsSet_ = true;
}

bool EnterpriseDto::managerIsSet() const
{
    return managerIsSet_;
}

void EnterpriseDto::unsetmanager()
{
    managerIsSet_ = false;
}

std::string EnterpriseDto::getOrganization() const
{
    return organization_;
}

void EnterpriseDto::setOrganization(const std::string& value)
{
    organization_ = value;
    organizationIsSet_ = true;
}

bool EnterpriseDto::organizationIsSet() const
{
    return organizationIsSet_;
}

void EnterpriseDto::unsetorganization()
{
    organizationIsSet_ = false;
}

}
}
}
}
}


