

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAppliedHistoriesResponse::ListAppliedHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListAppliedHistoriesResponse::~ListAppliedHistoriesResponse() = default;

void ListAppliedHistoriesResponse::validate()
{
}

web::json::value ListAppliedHistoriesResponse::toJson() const
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
bool ListAppliedHistoriesResponse::fromJson(const web::json::value& val)
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
            std::vector<AppliedHistoriesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
        }
    }
    return ok;
}


int32_t ListAppliedHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAppliedHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAppliedHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAppliedHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AppliedHistoriesResult>& ListAppliedHistoriesResponse::getHistories()
{
    return histories_;
}

void ListAppliedHistoriesResponse::setHistories(const std::vector<AppliedHistoriesResult>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListAppliedHistoriesResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListAppliedHistoriesResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


