

#include "huaweicloud/identitycenterstore/v1/model/DescribeUsersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeUsersRequestBody::DescribeUsersRequestBody()
{
    userIdsIsSet_ = false;
}

DescribeUsersRequestBody::~DescribeUsersRequestBody() = default;

void DescribeUsersRequestBody::validate()
{
}

web::json::value DescribeUsersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }

    return val;
}
bool DescribeUsersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DescribeUsersRequestBody::getUserIds()
{
    return userIds_;
}

void DescribeUsersRequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool DescribeUsersRequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void DescribeUsersRequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

}
}
}
}
}


