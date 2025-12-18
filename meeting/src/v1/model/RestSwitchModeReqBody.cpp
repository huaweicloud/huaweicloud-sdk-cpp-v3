

#include "huaweicloud/meeting/v1/model/RestSwitchModeReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSwitchModeReqBody::RestSwitchModeReqBody()
{
    switchMode_ = "";
    switchModeIsSet_ = false;
    imageType_ = 0;
    imageTypeIsSet_ = false;
}

RestSwitchModeReqBody::~RestSwitchModeReqBody() = default;

void RestSwitchModeReqBody::validate()
{
}

web::json::value RestSwitchModeReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchModeIsSet_) {
        val[utility::conversions::to_string_t("switchMode")] = ModelBase::toJson(switchMode_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("imageType")] = ModelBase::toJson(imageType_);
    }

    return val;
}
bool RestSwitchModeReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switchMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("imageType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("imageType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
        }
    }
    return ok;
}


std::string RestSwitchModeReqBody::getSwitchMode() const
{
    return switchMode_;
}

void RestSwitchModeReqBody::setSwitchMode(const std::string& value)
{
    switchMode_ = value;
    switchModeIsSet_ = true;
}

bool RestSwitchModeReqBody::switchModeIsSet() const
{
    return switchModeIsSet_;
}

void RestSwitchModeReqBody::unsetswitchMode()
{
    switchModeIsSet_ = false;
}

int32_t RestSwitchModeReqBody::getImageType() const
{
    return imageType_;
}

void RestSwitchModeReqBody::setImageType(int32_t value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool RestSwitchModeReqBody::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void RestSwitchModeReqBody::unsetimageType()
{
    imageTypeIsSet_ = false;
}

}
}
}
}
}


