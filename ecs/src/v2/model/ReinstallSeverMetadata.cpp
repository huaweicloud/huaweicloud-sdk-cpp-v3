

#include "huaweicloud/ecs/v2/model/ReinstallSeverMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallSeverMetadata::ReinstallSeverMetadata()
{
    userData_ = "";
    userDataIsSet_ = false;
}

ReinstallSeverMetadata::~ReinstallSeverMetadata() = default;

void ReinstallSeverMetadata::validate()
{
}

web::json::value ReinstallSeverMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool ReinstallSeverMetadata::fromJson(const web::json::value& val)
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


std::string ReinstallSeverMetadata::getUserData() const
{
    return userData_;
}

void ReinstallSeverMetadata::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ReinstallSeverMetadata::userDataIsSet() const
{
    return userDataIsSet_;
}

void ReinstallSeverMetadata::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


