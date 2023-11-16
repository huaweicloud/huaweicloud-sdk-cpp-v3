

#include "huaweicloud/aad/v1/model/BatchTransferRuleBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BatchTransferRuleBody::BatchTransferRuleBody()
{
    rulesIsSet_ = false;
}

BatchTransferRuleBody::~BatchTransferRuleBody() = default;

void BatchTransferRuleBody::validate()
{
}

web::json::value BatchTransferRuleBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool BatchTransferRuleBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferRuleBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::vector<TransferRuleBody>& BatchTransferRuleBody::getRules()
{
    return rules_;
}

void BatchTransferRuleBody::setRules(const std::vector<TransferRuleBody>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool BatchTransferRuleBody::rulesIsSet() const
{
    return rulesIsSet_;
}

void BatchTransferRuleBody::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


