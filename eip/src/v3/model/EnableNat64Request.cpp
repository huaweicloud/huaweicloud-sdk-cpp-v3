

#include "huaweicloud/eip/v3/model/EnableNat64Request.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




EnableNat64Request::EnableNat64Request()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

EnableNat64Request::~EnableNat64Request() = default;

void EnableNat64Request::validate()
{
}

web::json::value EnableNat64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}

bool EnableNat64Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}

std::string EnableNat64Request::getPublicipId() const
{
    return publicipId_;
}

void EnableNat64Request::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool EnableNat64Request::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void EnableNat64Request::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


