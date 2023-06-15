

#include "huaweicloud/cbr/v1/model/ListExternalVaultRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListExternalVaultRequest::ListExternalVaultRequest()
{
    externalProjectId_ = "";
    externalProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    objcetType_ = "";
    objcetTypeIsSet_ = false;
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

ListExternalVaultRequest::~ListExternalVaultRequest() = default;

void ListExternalVaultRequest::validate()
{
}

web::json::value ListExternalVaultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(externalProjectIdIsSet_) {
        val[utility::conversions::to_string_t("external_project_id")] = ModelBase::toJson(externalProjectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(objcetTypeIsSet_) {
        val[utility::conversions::to_string_t("objcet_type")] = ModelBase::toJson(objcetType_);
    }
    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool ListExternalVaultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("external_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("objcet_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("objcet_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjcetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}


std::string ListExternalVaultRequest::getExternalProjectId() const
{
    return externalProjectId_;
}

void ListExternalVaultRequest::setExternalProjectId(const std::string& value)
{
    externalProjectId_ = value;
    externalProjectIdIsSet_ = true;
}

bool ListExternalVaultRequest::externalProjectIdIsSet() const
{
    return externalProjectIdIsSet_;
}

void ListExternalVaultRequest::unsetexternalProjectId()
{
    externalProjectIdIsSet_ = false;
}

int32_t ListExternalVaultRequest::getLimit() const
{
    return limit_;
}

void ListExternalVaultRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListExternalVaultRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListExternalVaultRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListExternalVaultRequest::getOffset() const
{
    return offset_;
}

void ListExternalVaultRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListExternalVaultRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListExternalVaultRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListExternalVaultRequest::getProtectType() const
{
    return protectType_;
}

void ListExternalVaultRequest::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool ListExternalVaultRequest::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void ListExternalVaultRequest::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

std::string ListExternalVaultRequest::getRegionId() const
{
    return regionId_;
}

void ListExternalVaultRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListExternalVaultRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListExternalVaultRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ListExternalVaultRequest::getObjcetType() const
{
    return objcetType_;
}

void ListExternalVaultRequest::setObjcetType(const std::string& value)
{
    objcetType_ = value;
    objcetTypeIsSet_ = true;
}

bool ListExternalVaultRequest::objcetTypeIsSet() const
{
    return objcetTypeIsSet_;
}

void ListExternalVaultRequest::unsetobjcetType()
{
    objcetTypeIsSet_ = false;
}

std::string ListExternalVaultRequest::getCloudType() const
{
    return cloudType_;
}

void ListExternalVaultRequest::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool ListExternalVaultRequest::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void ListExternalVaultRequest::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string ListExternalVaultRequest::getVaultId() const
{
    return vaultId_;
}

void ListExternalVaultRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ListExternalVaultRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ListExternalVaultRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


