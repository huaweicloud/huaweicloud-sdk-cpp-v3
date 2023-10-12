

#include "huaweicloud/gaussdbfornosql/v3/model/ConstructDisasterRecoveryBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ConstructDisasterRecoveryBody::ConstructDisasterRecoveryBody()
{
    id_ = "";
    idIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    instanceRole_ = "";
    instanceRoleIsSet_ = false;
    disasterRecoveryInstanceIsSet_ = false;
}

ConstructDisasterRecoveryBody::~ConstructDisasterRecoveryBody() = default;

void ConstructDisasterRecoveryBody::validate()
{
}

web::json::value ConstructDisasterRecoveryBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(instanceRoleIsSet_) {
        val[utility::conversions::to_string_t("instance_role")] = ModelBase::toJson(instanceRole_);
    }
    if(disasterRecoveryInstanceIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_instance")] = ModelBase::toJson(disasterRecoveryInstance_);
    }

    return val;
}
bool ConstructDisasterRecoveryBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_instance"));
        if(!fieldValue.is_null())
        {
            ConstructDisasterRecoveryInstance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryInstance(refVal);
        }
    }
    return ok;
}


std::string ConstructDisasterRecoveryBody::getId() const
{
    return id_;
}

void ConstructDisasterRecoveryBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConstructDisasterRecoveryBody::idIsSet() const
{
    return idIsSet_;
}

void ConstructDisasterRecoveryBody::unsetid()
{
    idIsSet_ = false;
}

std::string ConstructDisasterRecoveryBody::getAlias() const
{
    return alias_;
}

void ConstructDisasterRecoveryBody::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ConstructDisasterRecoveryBody::aliasIsSet() const
{
    return aliasIsSet_;
}

void ConstructDisasterRecoveryBody::unsetalias()
{
    aliasIsSet_ = false;
}

std::string ConstructDisasterRecoveryBody::getPassword() const
{
    return password_;
}

void ConstructDisasterRecoveryBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ConstructDisasterRecoveryBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void ConstructDisasterRecoveryBody::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string ConstructDisasterRecoveryBody::getInstanceRole() const
{
    return instanceRole_;
}

void ConstructDisasterRecoveryBody::setInstanceRole(const std::string& value)
{
    instanceRole_ = value;
    instanceRoleIsSet_ = true;
}

bool ConstructDisasterRecoveryBody::instanceRoleIsSet() const
{
    return instanceRoleIsSet_;
}

void ConstructDisasterRecoveryBody::unsetinstanceRole()
{
    instanceRoleIsSet_ = false;
}

ConstructDisasterRecoveryInstance ConstructDisasterRecoveryBody::getDisasterRecoveryInstance() const
{
    return disasterRecoveryInstance_;
}

void ConstructDisasterRecoveryBody::setDisasterRecoveryInstance(const ConstructDisasterRecoveryInstance& value)
{
    disasterRecoveryInstance_ = value;
    disasterRecoveryInstanceIsSet_ = true;
}

bool ConstructDisasterRecoveryBody::disasterRecoveryInstanceIsSet() const
{
    return disasterRecoveryInstanceIsSet_;
}

void ConstructDisasterRecoveryBody::unsetdisasterRecoveryInstance()
{
    disasterRecoveryInstanceIsSet_ = false;
}

}
}
}
}
}


