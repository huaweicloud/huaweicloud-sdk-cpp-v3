

#include "huaweicloud/gaussdb/v3/model/ListIntelligentKillSessionHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListIntelligentKillSessionHistoryResponse::ListIntelligentKillSessionHistoryResponse()
{
    intelligentKillSessionHistoriesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListIntelligentKillSessionHistoryResponse::~ListIntelligentKillSessionHistoryResponse() = default;

void ListIntelligentKillSessionHistoryResponse::validate()
{
}

web::json::value ListIntelligentKillSessionHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intelligentKillSessionHistoriesIsSet_) {
        val[utility::conversions::to_string_t("intelligent_kill_session_histories")] = ModelBase::toJson(intelligentKillSessionHistories_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListIntelligentKillSessionHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intelligent_kill_session_histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intelligent_kill_session_histories"));
        if(!fieldValue.is_null())
        {
            std::vector<IntelligentKillSessionHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntelligentKillSessionHistories(refVal);
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


std::vector<IntelligentKillSessionHistory>& ListIntelligentKillSessionHistoryResponse::getIntelligentKillSessionHistories()
{
    return intelligentKillSessionHistories_;
}

void ListIntelligentKillSessionHistoryResponse::setIntelligentKillSessionHistories(const std::vector<IntelligentKillSessionHistory>& value)
{
    intelligentKillSessionHistories_ = value;
    intelligentKillSessionHistoriesIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryResponse::intelligentKillSessionHistoriesIsSet() const
{
    return intelligentKillSessionHistoriesIsSet_;
}

void ListIntelligentKillSessionHistoryResponse::unsetintelligentKillSessionHistories()
{
    intelligentKillSessionHistoriesIsSet_ = false;
}

int32_t ListIntelligentKillSessionHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ListIntelligentKillSessionHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListIntelligentKillSessionHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListIntelligentKillSessionHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


