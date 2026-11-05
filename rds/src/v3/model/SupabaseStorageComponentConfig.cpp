

#include "huaweicloud/rds/v3/model/SupabaseStorageComponentConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseStorageComponentConfig::SupabaseStorageComponentConfig()
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

SupabaseStorageComponentConfig::~SupabaseStorageComponentConfig() = default;

void SupabaseStorageComponentConfig::validate()
{
}

web::json::value SupabaseStorageComponentConfig::toJson() const
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
bool SupabaseStorageComponentConfig::fromJson(const web::json::value& val)
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


bool SupabaseStorageComponentConfig::isEnabled() const
{
    return enabled_;
}

void SupabaseStorageComponentConfig::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SupabaseStorageComponentConfig::enabledIsSet() const
{
    return enabledIsSet_;
}

void SupabaseStorageComponentConfig::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string SupabaseStorageComponentConfig::getType() const
{
    return type_;
}

void SupabaseStorageComponentConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SupabaseStorageComponentConfig::typeIsSet() const
{
    return typeIsSet_;
}

void SupabaseStorageComponentConfig::unsettype()
{
    typeIsSet_ = false;
}

std::string SupabaseStorageComponentConfig::getBucketName() const
{
    return bucketName_;
}

void SupabaseStorageComponentConfig::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SupabaseStorageComponentConfig::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SupabaseStorageComponentConfig::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string SupabaseStorageComponentConfig::getAk() const
{
    return ak_;
}

void SupabaseStorageComponentConfig::setAk(const std::string& value)
{
    ak_ = value;
    akIsSet_ = true;
}

bool SupabaseStorageComponentConfig::akIsSet() const
{
    return akIsSet_;
}

void SupabaseStorageComponentConfig::unsetak()
{
    akIsSet_ = false;
}

std::string SupabaseStorageComponentConfig::getSk() const
{
    return sk_;
}

void SupabaseStorageComponentConfig::setSk(const std::string& value)
{
    sk_ = value;
    skIsSet_ = true;
}

bool SupabaseStorageComponentConfig::skIsSet() const
{
    return skIsSet_;
}

void SupabaseStorageComponentConfig::unsetsk()
{
    skIsSet_ = false;
}

}
}
}
}
}


