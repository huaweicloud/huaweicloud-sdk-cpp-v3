

#include "huaweicloud/rgc/v1/model/DriftDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




DriftDetail::DriftDetail()
{
    managedAccountId_ = "";
    managedAccountIdIsSet_ = false;
    driftType_ = "";
    driftTypeIsSet_ = false;
    driftTargetId_ = "";
    driftTargetIdIsSet_ = false;
    driftTargetType_ = "";
    driftTargetTypeIsSet_ = false;
    driftMessage_ = "";
    driftMessageIsSet_ = false;
    parentOrganizationalUnitId_ = "";
    parentOrganizationalUnitIdIsSet_ = false;
    solveSolution_ = "";
    solveSolutionIsSet_ = false;
}

DriftDetail::~DriftDetail() = default;

void DriftDetail::validate()
{
}

web::json::value DriftDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(managedAccountIdIsSet_) {
        val[utility::conversions::to_string_t("managed_account_id")] = ModelBase::toJson(managedAccountId_);
    }
    if(driftTypeIsSet_) {
        val[utility::conversions::to_string_t("drift_type")] = ModelBase::toJson(driftType_);
    }
    if(driftTargetIdIsSet_) {
        val[utility::conversions::to_string_t("drift_target_id")] = ModelBase::toJson(driftTargetId_);
    }
    if(driftTargetTypeIsSet_) {
        val[utility::conversions::to_string_t("drift_target_type")] = ModelBase::toJson(driftTargetType_);
    }
    if(driftMessageIsSet_) {
        val[utility::conversions::to_string_t("drift_message")] = ModelBase::toJson(driftMessage_);
    }
    if(parentOrganizationalUnitIdIsSet_) {
        val[utility::conversions::to_string_t("parent_organizational_unit_id")] = ModelBase::toJson(parentOrganizationalUnitId_);
    }
    if(solveSolutionIsSet_) {
        val[utility::conversions::to_string_t("solve_solution")] = ModelBase::toJson(solveSolution_);
    }

    return val;
}
bool DriftDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("managed_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managed_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManagedAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drift_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drift_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriftType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drift_target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drift_target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriftTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drift_target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drift_target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriftTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drift_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drift_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriftMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_organizational_unit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_organizational_unit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentOrganizationalUnitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solve_solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solve_solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolveSolution(refVal);
        }
    }
    return ok;
}


std::string DriftDetail::getManagedAccountId() const
{
    return managedAccountId_;
}

void DriftDetail::setManagedAccountId(const std::string& value)
{
    managedAccountId_ = value;
    managedAccountIdIsSet_ = true;
}

bool DriftDetail::managedAccountIdIsSet() const
{
    return managedAccountIdIsSet_;
}

void DriftDetail::unsetmanagedAccountId()
{
    managedAccountIdIsSet_ = false;
}

std::string DriftDetail::getDriftType() const
{
    return driftType_;
}

void DriftDetail::setDriftType(const std::string& value)
{
    driftType_ = value;
    driftTypeIsSet_ = true;
}

bool DriftDetail::driftTypeIsSet() const
{
    return driftTypeIsSet_;
}

void DriftDetail::unsetdriftType()
{
    driftTypeIsSet_ = false;
}

std::string DriftDetail::getDriftTargetId() const
{
    return driftTargetId_;
}

void DriftDetail::setDriftTargetId(const std::string& value)
{
    driftTargetId_ = value;
    driftTargetIdIsSet_ = true;
}

bool DriftDetail::driftTargetIdIsSet() const
{
    return driftTargetIdIsSet_;
}

void DriftDetail::unsetdriftTargetId()
{
    driftTargetIdIsSet_ = false;
}

std::string DriftDetail::getDriftTargetType() const
{
    return driftTargetType_;
}

void DriftDetail::setDriftTargetType(const std::string& value)
{
    driftTargetType_ = value;
    driftTargetTypeIsSet_ = true;
}

bool DriftDetail::driftTargetTypeIsSet() const
{
    return driftTargetTypeIsSet_;
}

void DriftDetail::unsetdriftTargetType()
{
    driftTargetTypeIsSet_ = false;
}

std::string DriftDetail::getDriftMessage() const
{
    return driftMessage_;
}

void DriftDetail::setDriftMessage(const std::string& value)
{
    driftMessage_ = value;
    driftMessageIsSet_ = true;
}

bool DriftDetail::driftMessageIsSet() const
{
    return driftMessageIsSet_;
}

void DriftDetail::unsetdriftMessage()
{
    driftMessageIsSet_ = false;
}

std::string DriftDetail::getParentOrganizationalUnitId() const
{
    return parentOrganizationalUnitId_;
}

void DriftDetail::setParentOrganizationalUnitId(const std::string& value)
{
    parentOrganizationalUnitId_ = value;
    parentOrganizationalUnitIdIsSet_ = true;
}

bool DriftDetail::parentOrganizationalUnitIdIsSet() const
{
    return parentOrganizationalUnitIdIsSet_;
}

void DriftDetail::unsetparentOrganizationalUnitId()
{
    parentOrganizationalUnitIdIsSet_ = false;
}

std::string DriftDetail::getSolveSolution() const
{
    return solveSolution_;
}

void DriftDetail::setSolveSolution(const std::string& value)
{
    solveSolution_ = value;
    solveSolutionIsSet_ = true;
}

bool DriftDetail::solveSolutionIsSet() const
{
    return solveSolutionIsSet_;
}

void DriftDetail::unsetsolveSolution()
{
    solveSolutionIsSet_ = false;
}

}
}
}
}
}


