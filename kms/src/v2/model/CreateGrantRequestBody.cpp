

#include "huaweicloud/kms/v2/model/CreateGrantRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateGrantRequestBody::CreateGrantRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    granteePrincipal_ = "";
    granteePrincipalIsSet_ = false;
    operationsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    retiringPrincipal_ = "";
    retiringPrincipalIsSet_ = false;
    granteePrincipalType_ = "";
    granteePrincipalTypeIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

CreateGrantRequestBody::~CreateGrantRequestBody() = default;

void CreateGrantRequestBody::validate()
{
}

web::json::value CreateGrantRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(granteePrincipalIsSet_) {
        val[utility::conversions::to_string_t("grantee_principal")] = ModelBase::toJson(granteePrincipal_);
    }
    if(operationsIsSet_) {
        val[utility::conversions::to_string_t("operations")] = ModelBase::toJson(operations_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(retiringPrincipalIsSet_) {
        val[utility::conversions::to_string_t("retiring_principal")] = ModelBase::toJson(retiringPrincipal_);
    }
    if(granteePrincipalTypeIsSet_) {
        val[utility::conversions::to_string_t("grantee_principal_type")] = ModelBase::toJson(granteePrincipalType_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool CreateGrantRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("grantee_principal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_principal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteePrincipal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("grantee_principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grantee_principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGranteePrincipalType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}

std::string CreateGrantRequestBody::getKeyId() const
{
    return keyId_;
}

void CreateGrantRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool CreateGrantRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void CreateGrantRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string CreateGrantRequestBody::getGranteePrincipal() const
{
    return granteePrincipal_;
}

void CreateGrantRequestBody::setGranteePrincipal(const std::string& value)
{
    granteePrincipal_ = value;
    granteePrincipalIsSet_ = true;
}

bool CreateGrantRequestBody::granteePrincipalIsSet() const
{
    return granteePrincipalIsSet_;
}

void CreateGrantRequestBody::unsetgranteePrincipal()
{
    granteePrincipalIsSet_ = false;
}

std::vector<std::string>& CreateGrantRequestBody::getOperations()
{
    return operations_;
}

void CreateGrantRequestBody::setOperations(const std::vector<std::string>& value)
{
    operations_ = value;
    operationsIsSet_ = true;
}

bool CreateGrantRequestBody::operationsIsSet() const
{
    return operationsIsSet_;
}

void CreateGrantRequestBody::unsetoperations()
{
    operationsIsSet_ = false;
}

std::string CreateGrantRequestBody::getName() const
{
    return name_;
}

void CreateGrantRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGrantRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGrantRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateGrantRequestBody::getRetiringPrincipal() const
{
    return retiringPrincipal_;
}

void CreateGrantRequestBody::setRetiringPrincipal(const std::string& value)
{
    retiringPrincipal_ = value;
    retiringPrincipalIsSet_ = true;
}

bool CreateGrantRequestBody::retiringPrincipalIsSet() const
{
    return retiringPrincipalIsSet_;
}

void CreateGrantRequestBody::unsetretiringPrincipal()
{
    retiringPrincipalIsSet_ = false;
}

std::string CreateGrantRequestBody::getGranteePrincipalType() const
{
    return granteePrincipalType_;
}

void CreateGrantRequestBody::setGranteePrincipalType(const std::string& value)
{
    granteePrincipalType_ = value;
    granteePrincipalTypeIsSet_ = true;
}

bool CreateGrantRequestBody::granteePrincipalTypeIsSet() const
{
    return granteePrincipalTypeIsSet_;
}

void CreateGrantRequestBody::unsetgranteePrincipalType()
{
    granteePrincipalTypeIsSet_ = false;
}

std::string CreateGrantRequestBody::getSequence() const
{
    return sequence_;
}

void CreateGrantRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool CreateGrantRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void CreateGrantRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


