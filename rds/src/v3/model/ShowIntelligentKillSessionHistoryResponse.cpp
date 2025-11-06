

#include "huaweicloud/rds/v3/model/ShowIntelligentKillSessionHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIntelligentKillSessionHistoryResponse::ShowIntelligentKillSessionHistoryResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    historyIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowIntelligentKillSessionHistoryResponse::~ShowIntelligentKillSessionHistoryResponse() = default;

void ShowIntelligentKillSessionHistoryResponse::validate()
{
}

web::json::value ShowIntelligentKillSessionHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(historyIsSet_) {
        val[utility::conversions::to_string_t("history")] = ModelBase::toJson(history_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowIntelligentKillSessionHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("history"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history"));
        if(!fieldValue.is_null())
        {
            std::vector<IntelligentKillSessionHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistory(refVal);
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


std::string ShowIntelligentKillSessionHistoryResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowIntelligentKillSessionHistoryResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowIntelligentKillSessionHistoryResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<IntelligentKillSessionHistory>& ShowIntelligentKillSessionHistoryResponse::getHistory()
{
    return history_;
}

void ShowIntelligentKillSessionHistoryResponse::setHistory(const std::vector<IntelligentKillSessionHistory>& value)
{
    history_ = value;
    historyIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryResponse::historyIsSet() const
{
    return historyIsSet_;
}

void ShowIntelligentKillSessionHistoryResponse::unsethistory()
{
    historyIsSet_ = false;
}

int32_t ShowIntelligentKillSessionHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowIntelligentKillSessionHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowIntelligentKillSessionHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowIntelligentKillSessionHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


