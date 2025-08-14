

#include "huaweicloud/identitycenter/v1/model/DisassociateProfileReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DisassociateProfileReqBody::DisassociateProfileReqBody()
{
    id_ = "";
    idIsSet_ = false;
    accessorType_ = "";
    accessorTypeIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
}

DisassociateProfileReqBody::~DisassociateProfileReqBody() = default;

void DisassociateProfileReqBody::validate()
{
}

web::json::value DisassociateProfileReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(accessorTypeIsSet_) {
        val[utility::conversions::to_string_t("accessor_type")] = ModelBase::toJson(accessorType_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }

    return val;
}
bool DisassociateProfileReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("accessor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    return ok;
}


std::string DisassociateProfileReqBody::getId() const
{
    return id_;
}

void DisassociateProfileReqBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DisassociateProfileReqBody::idIsSet() const
{
    return idIsSet_;
}

void DisassociateProfileReqBody::unsetid()
{
    idIsSet_ = false;
}

std::string DisassociateProfileReqBody::getAccessorType() const
{
    return accessorType_;
}

void DisassociateProfileReqBody::setAccessorType(const std::string& value)
{
    accessorType_ = value;
    accessorTypeIsSet_ = true;
}

bool DisassociateProfileReqBody::accessorTypeIsSet() const
{
    return accessorTypeIsSet_;
}

void DisassociateProfileReqBody::unsetaccessorType()
{
    accessorTypeIsSet_ = false;
}

std::string DisassociateProfileReqBody::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DisassociateProfileReqBody::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DisassociateProfileReqBody::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DisassociateProfileReqBody::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

}
}
}
}
}


