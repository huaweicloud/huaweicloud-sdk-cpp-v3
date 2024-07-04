

#include "huaweicloud/kms/v2/model/UpdatePrimaryRegionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdatePrimaryRegionResponse::UpdatePrimaryRegionResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    primaryRegion_ = "";
    primaryRegionIsSet_ = false;
}

UpdatePrimaryRegionResponse::~UpdatePrimaryRegionResponse() = default;

void UpdatePrimaryRegionResponse::validate()
{
}

web::json::value UpdatePrimaryRegionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(primaryRegionIsSet_) {
        val[utility::conversions::to_string_t("primary_region")] = ModelBase::toJson(primaryRegion_);
    }

    return val;
}
bool UpdatePrimaryRegionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryRegion(refVal);
        }
    }
    return ok;
}


std::string UpdatePrimaryRegionResponse::getKeyId() const
{
    return keyId_;
}

void UpdatePrimaryRegionResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdatePrimaryRegionResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdatePrimaryRegionResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string UpdatePrimaryRegionResponse::getPrimaryRegion() const
{
    return primaryRegion_;
}

void UpdatePrimaryRegionResponse::setPrimaryRegion(const std::string& value)
{
    primaryRegion_ = value;
    primaryRegionIsSet_ = true;
}

bool UpdatePrimaryRegionResponse::primaryRegionIsSet() const
{
    return primaryRegionIsSet_;
}

void UpdatePrimaryRegionResponse::unsetprimaryRegion()
{
    primaryRegionIsSet_ = false;
}

}
}
}
}
}


