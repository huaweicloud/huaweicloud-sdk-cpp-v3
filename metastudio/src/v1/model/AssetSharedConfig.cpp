

#include "huaweicloud/metastudio/v1/model/AssetSharedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssetSharedConfig::AssetSharedConfig()
{
    sharedType_ = "";
    sharedTypeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    allowedProjectIdsIsSet_ = false;
}

AssetSharedConfig::~AssetSharedConfig() = default;

void AssetSharedConfig::validate()
{
}

web::json::value AssetSharedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sharedTypeIsSet_) {
        val[utility::conversions::to_string_t("shared_type")] = ModelBase::toJson(sharedType_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(allowedProjectIdsIsSet_) {
        val[utility::conversions::to_string_t("allowed_project_ids")] = ModelBase::toJson(allowedProjectIds_);
    }

    return val;
}
bool AssetSharedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shared_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_project_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedProjectIds(refVal);
        }
    }
    return ok;
}


std::string AssetSharedConfig::getSharedType() const
{
    return sharedType_;
}

void AssetSharedConfig::setSharedType(const std::string& value)
{
    sharedType_ = value;
    sharedTypeIsSet_ = true;
}

bool AssetSharedConfig::sharedTypeIsSet() const
{
    return sharedTypeIsSet_;
}

void AssetSharedConfig::unsetsharedType()
{
    sharedTypeIsSet_ = false;
}

std::string AssetSharedConfig::getExpireTime() const
{
    return expireTime_;
}

void AssetSharedConfig::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool AssetSharedConfig::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void AssetSharedConfig::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::vector<std::string>& AssetSharedConfig::getAllowedProjectIds()
{
    return allowedProjectIds_;
}

void AssetSharedConfig::setAllowedProjectIds(const std::vector<std::string>& value)
{
    allowedProjectIds_ = value;
    allowedProjectIdsIsSet_ = true;
}

bool AssetSharedConfig::allowedProjectIdsIsSet() const
{
    return allowedProjectIdsIsSet_;
}

void AssetSharedConfig::unsetallowedProjectIds()
{
    allowedProjectIdsIsSet_ = false;
}

}
}
}
}
}


