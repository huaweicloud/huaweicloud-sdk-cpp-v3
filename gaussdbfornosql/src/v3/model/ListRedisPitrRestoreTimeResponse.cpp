

#include "huaweicloud/gaussdbfornosql/v3/model/ListRedisPitrRestoreTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRedisPitrRestoreTimeResponse::ListRedisPitrRestoreTimeResponse()
{
    restoreTimeIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListRedisPitrRestoreTimeResponse::~ListRedisPitrRestoreTimeResponse() = default;

void ListRedisPitrRestoreTimeResponse::validate()
{
}

web::json::value ListRedisPitrRestoreTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListRedisPitrRestoreTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
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


std::vector<std::string>& ListRedisPitrRestoreTimeResponse::getRestoreTime()
{
    return restoreTime_;
}

void ListRedisPitrRestoreTimeResponse::setRestoreTime(const std::vector<std::string>& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool ListRedisPitrRestoreTimeResponse::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void ListRedisPitrRestoreTimeResponse::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

int32_t ListRedisPitrRestoreTimeResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRedisPitrRestoreTimeResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRedisPitrRestoreTimeResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRedisPitrRestoreTimeResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


