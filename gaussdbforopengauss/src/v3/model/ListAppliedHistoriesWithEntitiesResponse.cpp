

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesWithEntitiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAppliedHistoriesWithEntitiesResponse::ListAppliedHistoriesWithEntitiesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historiesIsSet_ = false;
}

ListAppliedHistoriesWithEntitiesResponse::~ListAppliedHistoriesWithEntitiesResponse() = default;

void ListAppliedHistoriesWithEntitiesResponse::validate()
{
}

web::json::value ListAppliedHistoriesWithEntitiesResponse::toJson() const
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
bool ListAppliedHistoriesWithEntitiesResponse::fromJson(const web::json::value& val)
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


int32_t ListAppliedHistoriesWithEntitiesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAppliedHistoriesWithEntitiesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAppliedHistoriesWithEntitiesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAppliedHistoriesWithEntitiesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AppliedHistoriesResult>& ListAppliedHistoriesWithEntitiesResponse::getHistories()
{
    return histories_;
}

void ListAppliedHistoriesWithEntitiesResponse::setHistories(const std::vector<AppliedHistoriesResult>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListAppliedHistoriesWithEntitiesResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListAppliedHistoriesWithEntitiesResponse::unsethistories()
{
    historiesIsSet_ = false;
}

}
}
}
}
}


