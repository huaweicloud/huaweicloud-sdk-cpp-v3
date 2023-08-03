

#include "huaweicloud/rds/v3/model/ListInstanceParamHistoriesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceParamHistoriesResponse::ListInstanceParamHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListInstanceParamHistoriesResponse::~ListInstanceParamHistoriesResponse() = default;

void ListInstanceParamHistoriesResponse::validate()
{
}

web::json::value ListInstanceParamHistoriesResponse::toJson() const
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

bool ListInstanceParamHistoriesResponse::fromJson(const web::json::value& val)
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
            std::vector<ParamGroupHistoryResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}

int32_t ListInstanceParamHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceParamHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceParamHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceParamHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ParamGroupHistoryResult>& ListInstanceParamHistoriesResponse::getHistories()
{
    return histories_;
}

void ListInstanceParamHistoriesResponse::setHistories(const std::vector<ParamGroupHistoryResult>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListInstanceParamHistoriesResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListInstanceParamHistoriesResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


