

#include "huaweicloud/identitycenter/v1/model/SecurityConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




SecurityConfigDto::SecurityConfigDto()
{
    ttl_ = "";
    ttlIsSet_ = false;
}

SecurityConfigDto::~SecurityConfigDto() = default;

void SecurityConfigDto::validate()
{
}

web::json::value SecurityConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ttlIsSet_) {
        val[utility::conversions::to_string_t("ttl")] = ModelBase::toJson(ttl_);
    }

    return val;
}
bool SecurityConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ttl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtl(refVal);
        }
    }
    return ok;
}


std::string SecurityConfigDto::getTtl() const
{
    return ttl_;
}

void SecurityConfigDto::setTtl(const std::string& value)
{
    ttl_ = value;
    ttlIsSet_ = true;
}

bool SecurityConfigDto::ttlIsSet() const
{
    return ttlIsSet_;
}

void SecurityConfigDto::unsetttl()
{
    ttlIsSet_ = false;
}

}
}
}
}
}


