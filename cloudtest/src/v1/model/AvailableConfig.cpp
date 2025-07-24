

#include "huaweicloud/cloudtest/v1/model/AvailableConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AvailableConfig::AvailableConfig()
{
    customAwAvailable_ = false;
    customAwAvailableIsSet_ = false;
    publicAwAvailable_ = false;
    publicAwAvailableIsSet_ = false;
    refreshAwAvailable_ = false;
    refreshAwAvailableIsSet_ = false;
}

AvailableConfig::~AvailableConfig() = default;

void AvailableConfig::validate()
{
}

web::json::value AvailableConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customAwAvailableIsSet_) {
        val[utility::conversions::to_string_t("custom_aw_available")] = ModelBase::toJson(customAwAvailable_);
    }
    if(publicAwAvailableIsSet_) {
        val[utility::conversions::to_string_t("public_aw_available")] = ModelBase::toJson(publicAwAvailable_);
    }
    if(refreshAwAvailableIsSet_) {
        val[utility::conversions::to_string_t("refresh_aw_available")] = ModelBase::toJson(refreshAwAvailable_);
    }

    return val;
}
bool AvailableConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_aw_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_aw_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomAwAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_aw_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_aw_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAwAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("refresh_aw_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("refresh_aw_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefreshAwAvailable(refVal);
        }
    }
    return ok;
}


bool AvailableConfig::isCustomAwAvailable() const
{
    return customAwAvailable_;
}

void AvailableConfig::setCustomAwAvailable(bool value)
{
    customAwAvailable_ = value;
    customAwAvailableIsSet_ = true;
}

bool AvailableConfig::customAwAvailableIsSet() const
{
    return customAwAvailableIsSet_;
}

void AvailableConfig::unsetcustomAwAvailable()
{
    customAwAvailableIsSet_ = false;
}

bool AvailableConfig::isPublicAwAvailable() const
{
    return publicAwAvailable_;
}

void AvailableConfig::setPublicAwAvailable(bool value)
{
    publicAwAvailable_ = value;
    publicAwAvailableIsSet_ = true;
}

bool AvailableConfig::publicAwAvailableIsSet() const
{
    return publicAwAvailableIsSet_;
}

void AvailableConfig::unsetpublicAwAvailable()
{
    publicAwAvailableIsSet_ = false;
}

bool AvailableConfig::isRefreshAwAvailable() const
{
    return refreshAwAvailable_;
}

void AvailableConfig::setRefreshAwAvailable(bool value)
{
    refreshAwAvailable_ = value;
    refreshAwAvailableIsSet_ = true;
}

bool AvailableConfig::refreshAwAvailableIsSet() const
{
    return refreshAwAvailableIsSet_;
}

void AvailableConfig::unsetrefreshAwAvailable()
{
    refreshAwAvailableIsSet_ = false;
}

}
}
}
}
}


