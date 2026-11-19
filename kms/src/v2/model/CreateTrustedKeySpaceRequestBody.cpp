

#include "huaweicloud/kms/v2/model/CreateTrustedKeySpaceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateTrustedKeySpaceRequestBody::CreateTrustedKeySpaceRequestBody()
{
    keyspaceName_ = "";
    keyspaceNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateTrustedKeySpaceRequestBody::~CreateTrustedKeySpaceRequestBody() = default;

void CreateTrustedKeySpaceRequestBody::validate()
{
}

web::json::value CreateTrustedKeySpaceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceNameIsSet_) {
        val[utility::conversions::to_string_t("keyspace_name")] = ModelBase::toJson(keyspaceName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateTrustedKeySpaceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
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
    return ok;
}


std::string CreateTrustedKeySpaceRequestBody::getKeyspaceName() const
{
    return keyspaceName_;
}

void CreateTrustedKeySpaceRequestBody::setKeyspaceName(const std::string& value)
{
    keyspaceName_ = value;
    keyspaceNameIsSet_ = true;
}

bool CreateTrustedKeySpaceRequestBody::keyspaceNameIsSet() const
{
    return keyspaceNameIsSet_;
}

void CreateTrustedKeySpaceRequestBody::unsetkeyspaceName()
{
    keyspaceNameIsSet_ = false;
}

std::string CreateTrustedKeySpaceRequestBody::getType() const
{
    return type_;
}

void CreateTrustedKeySpaceRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateTrustedKeySpaceRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateTrustedKeySpaceRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateTrustedKeySpaceRequestBody::getKeystoreId() const
{
    return keystoreId_;
}

void CreateTrustedKeySpaceRequestBody::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool CreateTrustedKeySpaceRequestBody::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void CreateTrustedKeySpaceRequestBody::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string CreateTrustedKeySpaceRequestBody::getDescription() const
{
    return description_;
}

void CreateTrustedKeySpaceRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateTrustedKeySpaceRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateTrustedKeySpaceRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


