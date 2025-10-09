

#include "huaweicloud/gaussdb/v3/model/OperateHtapQueryQueueRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateHtapQueryQueueRuleReq::OperateHtapQueryQueueRuleReq()
{
    queryQueueRuleIsSet_ = false;
}

OperateHtapQueryQueueRuleReq::~OperateHtapQueryQueueRuleReq() = default;

void OperateHtapQueryQueueRuleReq::validate()
{
}

web::json::value OperateHtapQueryQueueRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryQueueRuleIsSet_) {
        val[utility::conversions::to_string_t("query_queue_rule")] = ModelBase::toJson(queryQueueRule_);
    }

    return val;
}
bool OperateHtapQueryQueueRuleReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_queue_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_rule"));
        if(!fieldValue.is_null())
        {
            HtapQueryQueueRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueueRule(refVal);
        }
    }
    return ok;
}


HtapQueryQueueRule OperateHtapQueryQueueRuleReq::getQueryQueueRule() const
{
    return queryQueueRule_;
}

void OperateHtapQueryQueueRuleReq::setQueryQueueRule(const HtapQueryQueueRule& value)
{
    queryQueueRule_ = value;
    queryQueueRuleIsSet_ = true;
}

bool OperateHtapQueryQueueRuleReq::queryQueueRuleIsSet() const
{
    return queryQueueRuleIsSet_;
}

void OperateHtapQueryQueueRuleReq::unsetqueryQueueRule()
{
    queryQueueRuleIsSet_ = false;
}

}
}
}
}
}


