

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistorysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistorysResponse::ListDbAgentJobHistorysResponse()
{
    historiesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDbAgentJobHistorysResponse::~ListDbAgentJobHistorysResponse() = default;

void ListDbAgentJobHistorysResponse::validate()
{
}

web::json::value ListDbAgentJobHistorysResponse::toJson() const
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
bool ListDbAgentJobHistorysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDbAgentJobHistorysResult> refVal;
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


std::vector<ListDbAgentJobHistorysResult>& ListDbAgentJobHistorysResponse::getHistories()
{
    return histories_;
}

void ListDbAgentJobHistorysResponse::setHistories(const std::vector<ListDbAgentJobHistorysResult>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ListDbAgentJobHistorysResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ListDbAgentJobHistorysResponse::unsethistories()
{
    historiesIsSet_ = false;
}

int32_t ListDbAgentJobHistorysResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDbAgentJobHistorysResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDbAgentJobHistorysResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDbAgentJobHistorysResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


