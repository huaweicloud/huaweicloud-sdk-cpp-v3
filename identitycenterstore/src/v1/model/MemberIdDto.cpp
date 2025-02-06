

#include "huaweicloud/identitycenterstore/v1/model/MemberIdDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




MemberIdDto::MemberIdDto()
{
    userId_ = "";
    userIdIsSet_ = false;
}

MemberIdDto::~MemberIdDto() = default;

void MemberIdDto::validate()
{
}

web::json::value MemberIdDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool MemberIdDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string MemberIdDto::getUserId() const
{
    return userId_;
}

void MemberIdDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool MemberIdDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void MemberIdDto::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


