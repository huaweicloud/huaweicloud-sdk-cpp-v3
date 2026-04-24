

#include "huaweicloud/drs/v5/model/ShowCompareUsersDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowCompareUsersDetailResponse::ShowCompareUsersDetailResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    userCompareInfoIsSet_ = false;
}

ShowCompareUsersDetailResponse::~ShowCompareUsersDetailResponse() = default;

void ShowCompareUsersDetailResponse::validate()
{
}

web::json::value ShowCompareUsersDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(userCompareInfoIsSet_) {
        val[utility::conversions::to_string_t("user_compare_info")] = ModelBase::toJson(userCompareInfo_);
    }

    return val;
}
bool ShowCompareUsersDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_compare_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_compare_info"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareUserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserCompareInfo(refVal);
        }
    }
    return ok;
}


int32_t ShowCompareUsersDetailResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowCompareUsersDetailResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowCompareUsersDetailResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowCompareUsersDetailResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<CompareUserInfo>& ShowCompareUsersDetailResponse::getUserCompareInfo()
{
    return userCompareInfo_;
}

void ShowCompareUsersDetailResponse::setUserCompareInfo(const std::vector<CompareUserInfo>& value)
{
    userCompareInfo_ = value;
    userCompareInfoIsSet_ = true;
}

bool ShowCompareUsersDetailResponse::userCompareInfoIsSet() const
{
    return userCompareInfoIsSet_;
}

void ShowCompareUsersDetailResponse::unsetuserCompareInfo()
{
    userCompareInfoIsSet_ = false;
}

}
}
}
}
}


