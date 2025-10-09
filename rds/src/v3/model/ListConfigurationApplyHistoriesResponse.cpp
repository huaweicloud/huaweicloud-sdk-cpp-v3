

#include "huaweicloud/rds/v3/model/ListConfigurationApplyHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListConfigurationApplyHistoriesResponse::ListConfigurationApplyHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListConfigurationApplyHistoriesResponse::~ListConfigurationApplyHistoriesResponse() = default;

void ListConfigurationApplyHistoriesResponse::validate()
{
}

web::json::value ListConfigurationApplyHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }

    return val;
}
bool ListConfigurationApplyHistoriesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplyHistoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


int32_t ListConfigurationApplyHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListConfigurationApplyHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListConfigurationApplyHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListConfigurationApplyHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ApplyHistoryInfo>& ListConfigurationApplyHistoriesResponse::getHistories()
{
    return histories_;
}

void ListConfigurationApplyHistoriesResponse::setHistories(const std::vector<ApplyHistoryInfo>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListConfigurationApplyHistoriesResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListConfigurationApplyHistoriesResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


