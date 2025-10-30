

#include "huaweicloud/live/v1/model/ListWatermarkRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListWatermarkRuleResponse::ListWatermarkRuleResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    rulesInfosIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListWatermarkRuleResponse::~ListWatermarkRuleResponse() = default;

void ListWatermarkRuleResponse::validate()
{
}

web::json::value ListWatermarkRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(rulesInfosIsSet_) {
        val[utility::conversions::to_string_t("rules_infos")] = ModelBase::toJson(rulesInfos_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListWatermarkRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<WatermarkRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRulesInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListWatermarkRuleResponse::getTotal() const
{
    return total_;
}

void ListWatermarkRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListWatermarkRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListWatermarkRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WatermarkRule>& ListWatermarkRuleResponse::getRulesInfos()
{
    return rulesInfos_;
}

void ListWatermarkRuleResponse::setRulesInfos(const std::vector<WatermarkRule>& value)
{
    rulesInfos_ = value;
    rulesInfosIsSet_ = true;
}

bool ListWatermarkRuleResponse::rulesInfosIsSet() const
{
    return rulesInfosIsSet_;
}

void ListWatermarkRuleResponse::unsetrulesInfos()
{
    rulesInfosIsSet_ = false;
}

std::string ListWatermarkRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListWatermarkRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListWatermarkRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListWatermarkRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


