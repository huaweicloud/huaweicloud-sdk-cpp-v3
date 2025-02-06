

#include "huaweicloud/identitycenter/v1/model/InstanceMetadataEntryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




InstanceMetadataEntryDto::InstanceMetadataEntryDto()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
    instanceUrn_ = "";
    instanceUrnIsSet_ = false;
}

InstanceMetadataEntryDto::~InstanceMetadataEntryDto() = default;

void InstanceMetadataEntryDto::validate()
{
}

web::json::value InstanceMetadataEntryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(instanceUrnIsSet_) {
        val[utility::conversions::to_string_t("instance_urn")] = ModelBase::toJson(instanceUrn_);
    }

    return val;
}
bool InstanceMetadataEntryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceUrn(refVal);
        }
    }
    return ok;
}


std::string InstanceMetadataEntryDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void InstanceMetadataEntryDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool InstanceMetadataEntryDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void InstanceMetadataEntryDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string InstanceMetadataEntryDto::getInstanceId() const
{
    return instanceId_;
}

void InstanceMetadataEntryDto::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceMetadataEntryDto::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceMetadataEntryDto::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstanceMetadataEntryDto::getAlias() const
{
    return alias_;
}

void InstanceMetadataEntryDto::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool InstanceMetadataEntryDto::aliasIsSet() const
{
    return aliasIsSet_;
}

void InstanceMetadataEntryDto::unsetalias()
{
    aliasIsSet_ = false;
}

std::string InstanceMetadataEntryDto::getInstanceUrn() const
{
    return instanceUrn_;
}

void InstanceMetadataEntryDto::setInstanceUrn(const std::string& value)
{
    instanceUrn_ = value;
    instanceUrnIsSet_ = true;
}

bool InstanceMetadataEntryDto::instanceUrnIsSet() const
{
    return instanceUrnIsSet_;
}

void InstanceMetadataEntryDto::unsetinstanceUrn()
{
    instanceUrnIsSet_ = false;
}

}
}
}
}
}


