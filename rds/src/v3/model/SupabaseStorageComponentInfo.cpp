

#include "huaweicloud/rds/v3/model/SupabaseStorageComponentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseStorageComponentInfo::SupabaseStorageComponentInfo()
{
    enabled_ = false;
    enabledIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    ak_ = "";
    akIsSet_ = false;
}

SupabaseStorageComponentInfo::~SupabaseStorageComponentInfo() = default;

void SupabaseStorageComponentInfo::validate()
{
}

web::json::value SupabaseStorageComponentInfo::toJson() const
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

    return val;
}
bool SupabaseStorageComponentInfo::fromJson(const web::json::value& val)
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
    return ok;
}


bool SupabaseStorageComponentInfo::isEnabled() const
{
    return enabled_;
}

void SupabaseStorageComponentInfo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SupabaseStorageComponentInfo::enabledIsSet() const
{
    return enabledIsSet_;
}

void SupabaseStorageComponentInfo::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string SupabaseStorageComponentInfo::getType() const
{
    return type_;
}

void SupabaseStorageComponentInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SupabaseStorageComponentInfo::typeIsSet() const
{
    return typeIsSet_;
}

void SupabaseStorageComponentInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string SupabaseStorageComponentInfo::getBucketName() const
{
    return bucketName_;
}

void SupabaseStorageComponentInfo::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool SupabaseStorageComponentInfo::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void SupabaseStorageComponentInfo::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string SupabaseStorageComponentInfo::getAk() const
{
    return ak_;
}

void SupabaseStorageComponentInfo::setAk(const std::string& value)
{
    ak_ = value;
    akIsSet_ = true;
}

bool SupabaseStorageComponentInfo::akIsSet() const
{
    return akIsSet_;
}

void SupabaseStorageComponentInfo::unsetak()
{
    akIsSet_ = false;
}

}
}
}
}
}


