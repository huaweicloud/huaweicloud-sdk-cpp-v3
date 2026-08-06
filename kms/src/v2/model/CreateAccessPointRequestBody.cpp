

#include "huaweicloud/kms/v2/model/CreateAccessPointRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




CreateAccessPointRequestBody::CreateAccessPointRequestBody()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    accessPointName_ = "";
    accessPointNameIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    identity_ = "";
    identityIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateAccessPointRequestBody::~CreateAccessPointRequestBody() = default;

void CreateAccessPointRequestBody::validate()
{
}

web::json::value CreateAccessPointRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(accessPointNameIsSet_) {
        val[utility::conversions::to_string_t("access_point_name")] = ModelBase::toJson(accessPointName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(identityIsSet_) {
        val[utility::conversions::to_string_t("identity")] = ModelBase::toJson(identity_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CreateAccessPointRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_point_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_point_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPointName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
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


std::string CreateAccessPointRequestBody::getKeyspaceId() const
{
    return keyspaceId_;
}

void CreateAccessPointRequestBody::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool CreateAccessPointRequestBody::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void CreateAccessPointRequestBody::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string CreateAccessPointRequestBody::getAccessPointName() const
{
    return accessPointName_;
}

void CreateAccessPointRequestBody::setAccessPointName(const std::string& value)
{
    accessPointName_ = value;
    accessPointNameIsSet_ = true;
}

bool CreateAccessPointRequestBody::accessPointNameIsSet() const
{
    return accessPointNameIsSet_;
}

void CreateAccessPointRequestBody::unsetaccessPointName()
{
    accessPointNameIsSet_ = false;
}

int32_t CreateAccessPointRequestBody::getType() const
{
    return type_;
}

void CreateAccessPointRequestBody::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateAccessPointRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void CreateAccessPointRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateAccessPointRequestBody::getIdentity() const
{
    return identity_;
}

void CreateAccessPointRequestBody::setIdentity(const std::string& value)
{
    identity_ = value;
    identityIsSet_ = true;
}

bool CreateAccessPointRequestBody::identityIsSet() const
{
    return identityIsSet_;
}

void CreateAccessPointRequestBody::unsetidentity()
{
    identityIsSet_ = false;
}

std::string CreateAccessPointRequestBody::getClusterId() const
{
    return clusterId_;
}

void CreateAccessPointRequestBody::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateAccessPointRequestBody::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateAccessPointRequestBody::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateAccessPointRequestBody::getDescription() const
{
    return description_;
}

void CreateAccessPointRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAccessPointRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAccessPointRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


