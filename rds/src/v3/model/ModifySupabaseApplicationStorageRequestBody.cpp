

#include "huaweicloud/rds/v3/model/ModifySupabaseApplicationStorageRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifySupabaseApplicationStorageRequestBody::ModifySupabaseApplicationStorageRequestBody()
{
    enabled_ = false;
    enabledIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    ak_ = "";
    akIsSet_ = false;
    sk_ = "";
    skIsSet_ = false;
}

ModifySupabaseApplicationStorageRequestBody::~ModifySupabaseApplicationStorageRequestBody() = default;

void ModifySupabaseApplicationStorageRequestBody::validate()
{
}

web::json::value ModifySupabaseApplicationStorageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(akIsSet_) {
        val[utility::conversions::to_string_t("ak")] = ModelBase::toJson(ak_);
    }
    if(skIsSet_) {
        val[utility::conversions::to_string_t("sk")] = ModelBase::toJson(sk_);
    }

    return val;
}
bool ModifySupabaseApplicationStorageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ak"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSk(refVal);
        }
    }
    return ok;
}


bool ModifySupabaseApplicationStorageRequestBody::isEnabled() const
{
    return enabled_;
}

void ModifySupabaseApplicationStorageRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void ModifySupabaseApplicationStorageRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ModifySupabaseApplicationStorageRequestBody::getType() const
{
    return type_;
}

void ModifySupabaseApplicationStorageRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void ModifySupabaseApplicationStorageRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ModifySupabaseApplicationStorageRequestBody::getBucketName() const
{
    return bucketName_;
}

void ModifySupabaseApplicationStorageRequestBody::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequestBody::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void ModifySupabaseApplicationStorageRequestBody::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string ModifySupabaseApplicationStorageRequestBody::getAk() const
{
    return ak_;
}

void ModifySupabaseApplicationStorageRequestBody::setAk(const std::string& value)
{
    ak_ = value;
    akIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequestBody::akIsSet() const
{
    return akIsSet_;
}

void ModifySupabaseApplicationStorageRequestBody::unsetak()
{
    akIsSet_ = false;
}

std::string ModifySupabaseApplicationStorageRequestBody::getSk() const
{
    return sk_;
}

void ModifySupabaseApplicationStorageRequestBody::setSk(const std::string& value)
{
    sk_ = value;
    skIsSet_ = true;
}

bool ModifySupabaseApplicationStorageRequestBody::skIsSet() const
{
    return skIsSet_;
}

void ModifySupabaseApplicationStorageRequestBody::unsetsk()
{
    skIsSet_ = false;
}

}
}
}
}
}


