

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksDatabaseUserResponse::ShowStarRocksDatabaseUserResponse()
{
    userDetailsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowStarRocksDatabaseUserResponse::~ShowStarRocksDatabaseUserResponse() = default;

void ShowStarRocksDatabaseUserResponse::validate()
{
}

web::json::value ShowStarRocksDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userDetailsIsSet_) {
        val[utility::conversions::to_string_t("user_details")] = ModelBase::toJson(userDetails_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowStarRocksDatabaseUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_details"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowStarRocksDatabaseUsers_user_details> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ShowStarRocksDatabaseUsers_user_details>& ShowStarRocksDatabaseUserResponse::getUserDetails()
{
    return userDetails_;
}

void ShowStarRocksDatabaseUserResponse::setUserDetails(const std::vector<ShowStarRocksDatabaseUsers_user_details>& value)
{
    userDetails_ = value;
    userDetailsIsSet_ = true;
}

bool ShowStarRocksDatabaseUserResponse::userDetailsIsSet() const
{
    return userDetailsIsSet_;
}

void ShowStarRocksDatabaseUserResponse::unsetuserDetails()
{
    userDetailsIsSet_ = false;
}

int32_t ShowStarRocksDatabaseUserResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowStarRocksDatabaseUserResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStarRocksDatabaseUserResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStarRocksDatabaseUserResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


