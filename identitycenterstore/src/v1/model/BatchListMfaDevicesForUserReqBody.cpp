

#include "huaweicloud/identitycenterstore/v1/model/BatchListMfaDevicesForUserReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




BatchListMfaDevicesForUserReqBody::BatchListMfaDevicesForUserReqBody()
{
    userListIsSet_ = false;
}

BatchListMfaDevicesForUserReqBody::~BatchListMfaDevicesForUserReqBody() = default;

void BatchListMfaDevicesForUserReqBody::validate()
{
}

web::json::value BatchListMfaDevicesForUserReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userListIsSet_) {
        val[utility::conversions::to_string_t("user_list")] = ModelBase::toJson(userList_);
    }

    return val;
}
bool BatchListMfaDevicesForUserReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RetrieveMfaDevicesForUserDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserList(refVal);
        }
    }
    return ok;
}


std::vector<RetrieveMfaDevicesForUserDto>& BatchListMfaDevicesForUserReqBody::getUserList()
{
    return userList_;
}

void BatchListMfaDevicesForUserReqBody::setUserList(const std::vector<RetrieveMfaDevicesForUserDto>& value)
{
    userList_ = value;
    userListIsSet_ = true;
}

bool BatchListMfaDevicesForUserReqBody::userListIsSet() const
{
    return userListIsSet_;
}

void BatchListMfaDevicesForUserReqBody::unsetuserList()
{
    userListIsSet_ = false;
}

}
}
}
}
}


