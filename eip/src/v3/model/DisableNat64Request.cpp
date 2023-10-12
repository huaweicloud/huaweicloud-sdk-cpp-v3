

#include "huaweicloud/eip/v3/model/DisableNat64Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DisableNat64Request::DisableNat64Request()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

DisableNat64Request::~DisableNat64Request() = default;

void DisableNat64Request::validate()
{
}

web::json::value DisableNat64Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}
bool DisableNat64Request::fromJson(const web::json::value& val)
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


std::string DisableNat64Request::getPublicipId() const
{
    return publicipId_;
}

void DisableNat64Request::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DisableNat64Request::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DisableNat64Request::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


