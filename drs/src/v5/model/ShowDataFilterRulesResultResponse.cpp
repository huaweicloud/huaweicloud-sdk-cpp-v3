

#include "huaweicloud/drs/v5/model/ShowDataFilterRulesResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDataFilterRulesResultResponse::ShowDataFilterRulesResultResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    rulesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDataFilterRulesResultResponse::~ShowDataFilterRulesResultResponse() = default;

void ShowDataFilterRulesResultResponse::validate()
{
}

web::json::value ShowDataFilterRulesResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowDataFilterRulesResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<DataFilterRuleResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int64_t ShowDataFilterRulesResultResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowDataFilterRulesResultResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowDataFilterRulesResultResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowDataFilterRulesResultResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<DataFilterRuleResp>& ShowDataFilterRulesResultResponse::getRules()
{
    return rules_;
}

void ShowDataFilterRulesResultResponse::setRules(const std::vector<DataFilterRuleResp>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ShowDataFilterRulesResultResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ShowDataFilterRulesResultResponse::unsetrules()
{
    rulesIsSet_ = false;
}

std::string ShowDataFilterRulesResultResponse::getStatus() const
{
    return status_;
}

void ShowDataFilterRulesResultResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDataFilterRulesResultResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDataFilterRulesResultResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


