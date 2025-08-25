

#include "huaweicloud/cce/v3/model/ExtensionScaleGroupMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ExtensionScaleGroupMetadata::ExtensionScaleGroupMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ExtensionScaleGroupMetadata::~ExtensionScaleGroupMetadata() = default;

void ExtensionScaleGroupMetadata::validate()
{
}

web::json::value ExtensionScaleGroupMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ExtensionScaleGroupMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ExtensionScaleGroupMetadata::getUid() const
{
    return uid_;
}

void ExtensionScaleGroupMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool ExtensionScaleGroupMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void ExtensionScaleGroupMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string ExtensionScaleGroupMetadata::getName() const
{
    return name_;
}

void ExtensionScaleGroupMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExtensionScaleGroupMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ExtensionScaleGroupMetadata::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


