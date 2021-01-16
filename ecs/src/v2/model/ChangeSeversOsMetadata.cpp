

#include "huaweicloud/ecs/v2/model/ChangeSeversOsMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeSeversOsMetadata::ChangeSeversOsMetadata()
{
    userData_ = "";
    userDataIsSet_ = false;
}

ChangeSeversOsMetadata::~ChangeSeversOsMetadata() = default;

void ChangeSeversOsMetadata::validate()
{
}

web::json::value ChangeSeversOsMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool ChangeSeversOsMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}


std::string ChangeSeversOsMetadata::getUserData() const
{
    return userData_;
}

void ChangeSeversOsMetadata::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ChangeSeversOsMetadata::userDataIsSet() const
{
    return userDataIsSet_;
}

void ChangeSeversOsMetadata::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


