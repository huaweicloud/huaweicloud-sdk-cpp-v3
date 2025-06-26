

#include "huaweicloud/smn/v2/model/ListTopicMessageStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListTopicMessageStatisticsResponse::ListTopicMessageStatisticsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    totalIsSet_ = false;
    statisticsIsSet_ = false;
}

ListTopicMessageStatisticsResponse::~ListTopicMessageStatisticsResponse() = default;

void ListTopicMessageStatisticsResponse::validate()
{
}

web::json::value ListTopicMessageStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statisticsIsSet_) {
        val[utility::conversions::to_string_t("statistics")] = ModelBase::toJson(statistics_);
    }

    return val;
}
bool ListTopicMessageStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            SumCountDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<StatisticsDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatistics(refVal);
        }
    }
    return ok;
}


std::string ListTopicMessageStatisticsResponse::getRequestId() const
{
    return requestId_;
}

void ListTopicMessageStatisticsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTopicMessageStatisticsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTopicMessageStatisticsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

SumCountDetail ListTopicMessageStatisticsResponse::getTotal() const
{
    return total_;
}

void ListTopicMessageStatisticsResponse::setTotal(const SumCountDetail& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTopicMessageStatisticsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTopicMessageStatisticsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<StatisticsDetail>& ListTopicMessageStatisticsResponse::getStatistics()
{
    return statistics_;
}

void ListTopicMessageStatisticsResponse::setStatistics(const std::vector<StatisticsDetail>& value)
{
    statistics_ = value;
    statisticsIsSet_ = true;
}

bool ListTopicMessageStatisticsResponse::statisticsIsSet() const
{
    return statisticsIsSet_;
}

void ListTopicMessageStatisticsResponse::unsetstatistics()
{
    statisticsIsSet_ = false;
}

}
}
}
}
}


