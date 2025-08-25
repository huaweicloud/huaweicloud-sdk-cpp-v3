

#include "huaweicloud/cce/v3/model/UpgradeCluserResponseMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeCluserResponseMetadata::UpgradeCluserResponseMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
}

UpgradeCluserResponseMetadata::~UpgradeCluserResponseMetadata() = default;

void UpgradeCluserResponseMetadata::validate()
{
}

web::json::value UpgradeCluserResponseMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }

    return val;
}
bool UpgradeCluserResponseMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    return ok;
}


std::string UpgradeCluserResponseMetadata::getUid() const
{
    return uid_;
}

void UpgradeCluserResponseMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool UpgradeCluserResponseMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void UpgradeCluserResponseMetadata::unsetuid()
{
    uidIsSet_ = false;
}

}
}
}
}
}


