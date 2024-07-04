

#include "huaweicloud/kms/v2/model/UpdatePrimaryRegionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdatePrimaryRegionRequestBody::UpdatePrimaryRegionRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    primaryRegion_ = "";
    primaryRegionIsSet_ = false;
}

UpdatePrimaryRegionRequestBody::~UpdatePrimaryRegionRequestBody() = default;

void UpdatePrimaryRegionRequestBody::validate()
{
}

web::json::value UpdatePrimaryRegionRequestBody::toJson() const
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
bool UpdatePrimaryRegionRequestBody::fromJson(const web::json::value& val)
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


std::string UpdatePrimaryRegionRequestBody::getKeyId() const
{
    return keyId_;
}

void UpdatePrimaryRegionRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UpdatePrimaryRegionRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UpdatePrimaryRegionRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string UpdatePrimaryRegionRequestBody::getPrimaryRegion() const
{
    return primaryRegion_;
}

void UpdatePrimaryRegionRequestBody::setPrimaryRegion(const std::string& value)
{
    primaryRegion_ = value;
    primaryRegionIsSet_ = true;
}

bool UpdatePrimaryRegionRequestBody::primaryRegionIsSet() const
{
    return primaryRegionIsSet_;
}

void UpdatePrimaryRegionRequestBody::unsetprimaryRegion()
{
    primaryRegionIsSet_ = false;
}

}
}
}
}
}


