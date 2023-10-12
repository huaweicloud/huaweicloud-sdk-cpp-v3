

#include "huaweicloud/cfw/v1/model/IpsProtectDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsProtectDTO::IpsProtectDTO()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    mode_ = 0;
    modeIsSet_ = false;
}

IpsProtectDTO::~IpsProtectDTO() = default;

void IpsProtectDTO::validate()
{
}

web::json::value IpsProtectDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool IpsProtectDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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


std::string IpsProtectDTO::getObjectId() const
{
    return objectId_;
}

void IpsProtectDTO::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool IpsProtectDTO::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void IpsProtectDTO::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t IpsProtectDTO::getMode() const
{
    return mode_;
}

void IpsProtectDTO::setMode(int32_t value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool IpsProtectDTO::modeIsSet() const
{
    return modeIsSet_;
}

void IpsProtectDTO::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


