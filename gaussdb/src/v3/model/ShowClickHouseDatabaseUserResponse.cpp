

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseDatabaseUserResponse::ShowClickHouseDatabaseUserResponse()
{
    userDetailsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowClickHouseDatabaseUserResponse::~ShowClickHouseDatabaseUserResponse() = default;

void ShowClickHouseDatabaseUserResponse::validate()
{
}

web::json::value ShowClickHouseDatabaseUserResponse::toJson() const
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
bool ShowClickHouseDatabaseUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_details"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowClickHouseDatabaseUsers_user_details> refVal;
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


std::vector<ShowClickHouseDatabaseUsers_user_details>& ShowClickHouseDatabaseUserResponse::getUserDetails()
{
    return userDetails_;
}

void ShowClickHouseDatabaseUserResponse::setUserDetails(const std::vector<ShowClickHouseDatabaseUsers_user_details>& value)
{
    userDetails_ = value;
    userDetailsIsSet_ = true;
}

bool ShowClickHouseDatabaseUserResponse::userDetailsIsSet() const
{
    return userDetailsIsSet_;
}

void ShowClickHouseDatabaseUserResponse::unsetuserDetails()
{
    userDetailsIsSet_ = false;
}

int32_t ShowClickHouseDatabaseUserResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowClickHouseDatabaseUserResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowClickHouseDatabaseUserResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowClickHouseDatabaseUserResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


