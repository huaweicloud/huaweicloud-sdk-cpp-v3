

#include "huaweicloud/rds/v3/model/ListDbAgentJobHistorysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListDbAgentJobHistorysResponse::ListDbAgentJobHistorysResponse()
{
    historysIsSet_ = false;
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

    if(historysIsSet_) {
        val[utility::conversions::to_string_t("historys")] = ModelBase::toJson(historys_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDbAgentJobHistorysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("historys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("historys"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDbAgentJobHistorysResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistorys(refVal);
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


std::vector<ListDbAgentJobHistorysResult>& ListDbAgentJobHistorysResponse::getHistorys()
{
    return historys_;
}

void ListDbAgentJobHistorysResponse::setHistorys(const std::vector<ListDbAgentJobHistorysResult>& value)
{
    historys_ = value;
    historysIsSet_ = true;
}

bool ListDbAgentJobHistorysResponse::historysIsSet() const
{
    return historysIsSet_;
}

void ListDbAgentJobHistorysResponse::unsethistorys()
{
    historysIsSet_ = false;
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


