

#include "huaweicloud/cbr/v1/model/SelfLinksInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




SelfLinksInfo::SelfLinksInfo()
{
    self_ = "";
    selfIsSet_ = false;
}

SelfLinksInfo::~SelfLinksInfo() = default;

void SelfLinksInfo::validate()
{
}

web::json::value SelfLinksInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(selfIsSet_) {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(self_);
    }

    return val;
}

bool SelfLinksInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("self"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelf(refVal);
        }
    }
    return ok;
}

std::string SelfLinksInfo::getSelf() const
{
    return self_;
}

void SelfLinksInfo::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool SelfLinksInfo::selfIsSet() const
{
    return selfIsSet_;
}

void SelfLinksInfo::unsetself()
{
    selfIsSet_ = false;
}

}
}
}
}
}


