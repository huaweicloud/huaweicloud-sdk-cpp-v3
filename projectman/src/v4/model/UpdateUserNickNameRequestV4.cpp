

#include "huaweicloud/projectman/v4/model/UpdateUserNickNameRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateUserNickNameRequestV4::UpdateUserNickNameRequestV4()
{
    nickName_ = "";
    nickNameIsSet_ = false;
}

UpdateUserNickNameRequestV4::~UpdateUserNickNameRequestV4() = default;

void UpdateUserNickNameRequestV4::validate()
{
}

web::json::value UpdateUserNickNameRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool UpdateUserNickNameRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}


std::string UpdateUserNickNameRequestV4::getNickName() const
{
    return nickName_;
}

void UpdateUserNickNameRequestV4::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UpdateUserNickNameRequestV4::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UpdateUserNickNameRequestV4::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


