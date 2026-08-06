

#include "huaweicloud/kms/v2/model/RotateOnDemandResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




RotateOnDemandResponse::RotateOnDemandResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
}

RotateOnDemandResponse::~RotateOnDemandResponse() = default;

void RotateOnDemandResponse::validate()
{
}

web::json::value RotateOnDemandResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }

    return val;
}
bool RotateOnDemandResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RotateOnDemandResponse::getKeyId() const
{
    return keyId_;
}

void RotateOnDemandResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool RotateOnDemandResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void RotateOnDemandResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

}
}
}
}
}


