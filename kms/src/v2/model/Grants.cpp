

#include "huaweicloud/kms/v2/model/Grants.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




Grants::Grants()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    grantId_ = "";
    grantIdIsSet_ = false;
    granteePrincipal_ = "";
    granteePrincipalIsSet_ = false;
    granteePrincipalType_ = "";
    granteePrincipalTypeIsSet_ = false;
    operationsIsSet_ = false;
    issuingPrincipal_ = "";
    issuingPrincipalIsSet_ = false;
    creationDate_ = "";
    creationDateIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    retiringPrincipal_ = "";
    retiringPrincipalIsSet_ = false;
}

Grants::~Grants() = default;

void Grants::validate()
{
}

web::json::value Grants::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(grantIdIsSet_) {
        val[utility::conversions::to_string_t("grant_id")] = ModelBase::toJson(grantId_);
    }
    if(granteePrincipalIsSet_) {
        val[utility::conversions::to_string_t("grantee_principal")] = ModelBase::toJson(granteePrincipal_);
    }
    if(granteePrincipalTypeIsSet_) {
        val[utility::conversions::to_string_t("grantee_principal_type")] = ModelBase::toJson(granteePrincipalType_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(issuingPrincipalIsSet_) {
        val[utility::conversions::to_string_t("issuing_principal")] = ModelBase::toJson(issuingPrincipal_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(retiringPrincipalIsSet_) {
        val[utility::conversions::to_string_t("retiring_principal")] = ModelBase::toJson(retiringPrincipal_);
    }

    return val;
}

bool Grants::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grantee_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteePrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("grantee_principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteePrincipalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuing_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingPrincipal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("retiring_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retiring_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetiringPrincipal(refVal);
        }
    }
    return ok;
}

std::string Grants::getKeyId() const
{
    return keyId_;
}

void Grants::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool Grants::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void Grants::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string Grants::getGrantId() const
{
    return grantId_;
}

void Grants::setGrantId(const std::string& value)
{
    grantId_ = value;
    grantIdIsSet_ = true;
}

bool Grants::grantIdIsSet() const
{
    return grantIdIsSet_;
}

void Grants::unsetgrantId()
{
    grantIdIsSet_ = false;
}

std::string Grants::getGranteePrincipal() const
{
    return granteePrincipal_;
}

void Grants::setGranteePrincipal(const std::string& value)
{
    granteePrincipal_ = value;
    granteePrincipalIsSet_ = true;
}

bool Grants::granteePrincipalIsSet() const
{
    return granteePrincipalIsSet_;
}

void Grants::unsetgranteePrincipal()
{
    granteePrincipalIsSet_ = false;
}

std::string Grants::getGranteePrincipalType() const
{
    return granteePrincipalType_;
}

void Grants::setGranteePrincipalType(const std::string& value)
{
    granteePrincipalType_ = value;
    granteePrincipalTypeIsSet_ = true;
}

bool Grants::granteePrincipalTypeIsSet() const
{
    return granteePrincipalTypeIsSet_;
}

void Grants::unsetgranteePrincipalType()
{
    granteePrincipalTypeIsSet_ = false;
}

std::vector<std::string>& Grants::getOperations()
{
    return operations_;
}

void Grants::setOperations(const std::vector<std::string>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool Grants::operationsIsSet() const
{
    return operationsIsSet_;
}

void Grants::unsetoperations()
{
    operationsIsSet_ = false;
}

std::string Grants::getIssuingPrincipal() const
{
    return issuingPrincipal_;
}

void Grants::setIssuingPrincipal(const std::string& value)
{
    issuingPrincipal_ = value;
    issuingPrincipalIsSet_ = true;
}

bool Grants::issuingPrincipalIsSet() const
{
    return issuingPrincipalIsSet_;
}

void Grants::unsetissuingPrincipal()
{
    issuingPrincipalIsSet_ = false;
}

std::string Grants::getCreationDate() const
{
    return creationDate_;
}

void Grants::setCreationDate(const std::string& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool Grants::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void Grants::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

std::string Grants::getName() const
{
    return name_;
}

void Grants::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Grants::nameIsSet() const
{
    return nameIsSet_;
}

void Grants::unsetname()
{
    nameIsSet_ = false;
}

std::string Grants::getRetiringPrincipal() const
{
    return retiringPrincipal_;
}

void Grants::setRetiringPrincipal(const std::string& value)
{
    retiringPrincipal_ = value;
    retiringPrincipalIsSet_ = true;
}

bool Grants::retiringPrincipalIsSet() const
{
    return retiringPrincipalIsSet_;
}

void Grants::unsetretiringPrincipal()
{
    retiringPrincipalIsSet_ = false;
}

}
}
}
}
}


