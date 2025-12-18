

#include "huaweicloud/meeting/v1/model/UserFunctionDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UserFunctionDTO::UserFunctionDTO()
{
    enableRoom_ = false;
    enableRoomIsSet_ = false;
}

UserFunctionDTO::~UserFunctionDTO() = default;

void UserFunctionDTO::validate()
{
}

web::json::value UserFunctionDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableRoomIsSet_) {
        val[utility::conversions::to_string_t("enableRoom")] = ModelBase::toJson(enableRoom_);
    }

    return val;
}
bool UserFunctionDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enableRoom"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableRoom"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableRoom(refVal);
        }
    }
    return ok;
}


bool UserFunctionDTO::isEnableRoom() const
{
    return enableRoom_;
}

void UserFunctionDTO::setEnableRoom(bool value)
{
    enableRoom_ = value;
    enableRoomIsSet_ = true;
}

bool UserFunctionDTO::enableRoomIsSet() const
{
    return enableRoomIsSet_;
}

void UserFunctionDTO::unsetenableRoom()
{
    enableRoomIsSet_ = false;
}

}
}
}
}
}


