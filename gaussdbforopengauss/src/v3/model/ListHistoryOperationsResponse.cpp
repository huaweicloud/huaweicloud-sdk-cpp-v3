

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHistoryOperationsResponse::ListHistoryOperationsResponse()
{
    historiesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListHistoryOperationsResponse::~ListHistoryOperationsResponse() = default;

void ListHistoryOperationsResponse::validate()
{
}

web::json::value ListHistoryOperationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListHistoryOperationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ListHistoryOperationsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
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

std::vector<ListHistoryOperationsResult>& ListHistoryOperationsResponse::getHistories()
{
    return histories_;
}

void ListHistoryOperationsResponse::setHistories(const std::vector<ListHistoryOperationsResult>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListHistoryOperationsResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListHistoryOperationsResponse::unsethistories()
{
    historiesIsSet_ = false;
}

int32_t ListHistoryOperationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListHistoryOperationsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListHistoryOperationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListHistoryOperationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


