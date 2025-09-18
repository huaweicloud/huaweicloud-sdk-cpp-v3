

#include "huaweicloud/projectman/v4/model/BatchDeleteMembersV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteMembersV4RequestBody::BatchDeleteMembersV4RequestBody()
{
    userIdsIsSet_ = false;
}

BatchDeleteMembersV4RequestBody::~BatchDeleteMembersV4RequestBody() = default;

void BatchDeleteMembersV4RequestBody::validate()
{
}

web::json::value BatchDeleteMembersV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdsIsSet_) {
        val[utility::conversions::to_string_t("user_ids")] = ModelBase::toJson(userIds_);
    }

    return val;
}
bool BatchDeleteMembersV4RequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchDeleteMembersV4RequestBody::getUserIds()
{
    return userIds_;
}

void BatchDeleteMembersV4RequestBody::setUserIds(const std::vector<std::string>& value)
{
    userIds_ = value;
    userIdsIsSet_ = true;
}

bool BatchDeleteMembersV4RequestBody::userIdsIsSet() const
{
    return userIdsIsSet_;
}

void BatchDeleteMembersV4RequestBody::unsetuserIds()
{
    userIdsIsSet_ = false;
}

}
}
}
}
}


