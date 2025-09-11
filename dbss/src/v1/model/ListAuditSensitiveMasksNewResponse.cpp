

#include "huaweicloud/dbss/v1/model/ListAuditSensitiveMasksNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSensitiveMasksNewResponse::ListAuditSensitiveMasksNewResponse()
{
    rulesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditSensitiveMasksNewResponse::~ListAuditSensitiveMasksNewResponse() = default;

void ListAuditSensitiveMasksNewResponse::validate()
{
}

web::json::value ListAuditSensitiveMasksNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditSensitiveMasksNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SensitiveMaskResponse_rules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SensitiveMaskResponse_rules>& ListAuditSensitiveMasksNewResponse::getRules()
{
    return rules_;
}

void ListAuditSensitiveMasksNewResponse::setRules(const std::vector<SensitiveMaskResponse_rules>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool ListAuditSensitiveMasksNewResponse::rulesIsSet() const
{
    return rulesIsSet_;
}

void ListAuditSensitiveMasksNewResponse::unsetrules()
{
    rulesIsSet_ = false;
}

int32_t ListAuditSensitiveMasksNewResponse::getTotal() const
{
    return total_;
}

void ListAuditSensitiveMasksNewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditSensitiveMasksNewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditSensitiveMasksNewResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


