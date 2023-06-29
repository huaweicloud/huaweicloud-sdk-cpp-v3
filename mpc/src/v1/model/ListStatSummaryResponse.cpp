

#include "huaweicloud/mpc/v1/model/ListStatSummaryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListStatSummaryResponse::ListStatSummaryResponse()
{
    summaryIsSet_ = false;
    total_ = 0.0f;
    totalIsSet_ = false;
    statType_ = "";
    statTypeIsSet_ = false;
}

ListStatSummaryResponse::~ListStatSummaryResponse() = default;

void ListStatSummaryResponse::validate()
{
}

web::json::value ListStatSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statTypeIsSet_) {
        val[utility::conversions::to_string_t("stat_type")] = ModelBase::toJson(statType_);
    }

    return val;
}

bool ListStatSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            std::vector<StatSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stat_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stat_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatType(refVal);
        }
    }
    return ok;
}


std::vector<StatSummary>& ListStatSummaryResponse::getSummary()
{
    return summary_;
}

void ListStatSummaryResponse::setSummary(const std::vector<StatSummary>& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool ListStatSummaryResponse::summaryIsSet() const
{
    return summaryIsSet_;
}

void ListStatSummaryResponse::unsetsummary()
{
    summaryIsSet_ = false;
}

float ListStatSummaryResponse::getTotal() const
{
    return total_;
}

void ListStatSummaryResponse::setTotal(float value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListStatSummaryResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListStatSummaryResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListStatSummaryResponse::getStatType() const
{
    return statType_;
}

void ListStatSummaryResponse::setStatType(const std::string& value)
{
    statType_ = value;
    statTypeIsSet_ = true;
}

bool ListStatSummaryResponse::statTypeIsSet() const
{
    return statTypeIsSet_;
}

void ListStatSummaryResponse::unsetstatType()
{
    statTypeIsSet_ = false;
}

}
}
}
}
}


