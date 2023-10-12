

#include "huaweicloud/cfw/v1/model/IpsProtectModeObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsProtectModeObject::IpsProtectModeObject()
{
    id_ = "";
    idIsSet_ = false;
    mode_ = 0;
    modeIsSet_ = false;
}

IpsProtectModeObject::~IpsProtectModeObject() = default;

void IpsProtectModeObject::validate()
{
}

web::json::value IpsProtectModeObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool IpsProtectModeObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string IpsProtectModeObject::getId() const
{
    return id_;
}

void IpsProtectModeObject::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IpsProtectModeObject::idIsSet() const
{
    return idIsSet_;
}

void IpsProtectModeObject::unsetid()
{
    idIsSet_ = false;
}

int32_t IpsProtectModeObject::getMode() const
{
    return mode_;
}

void IpsProtectModeObject::setMode(int32_t value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool IpsProtectModeObject::modeIsSet() const
{
    return modeIsSet_;
}

void IpsProtectModeObject::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


