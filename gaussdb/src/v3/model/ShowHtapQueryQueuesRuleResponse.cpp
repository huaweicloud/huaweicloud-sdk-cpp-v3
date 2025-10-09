

#include "huaweicloud/gaussdb/v3/model/ShowHtapQueryQueuesRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapQueryQueuesRuleResponse::ShowHtapQueryQueuesRuleResponse()
{
    queryQueueRuleIsSet_ = false;
}

ShowHtapQueryQueuesRuleResponse::~ShowHtapQueryQueuesRuleResponse() = default;

void ShowHtapQueryQueuesRuleResponse::validate()
{
}

web::json::value ShowHtapQueryQueuesRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryQueueRuleIsSet_) {
        val[utility::conversions::to_string_t("query_queue_rule")] = ModelBase::toJson(queryQueueRule_);
    }

    return val;
}
bool ShowHtapQueryQueuesRuleResponse::fromJson(const web::json::value& val)
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


HtapQueryQueueRule ShowHtapQueryQueuesRuleResponse::getQueryQueueRule() const
{
    return queryQueueRule_;
}

void ShowHtapQueryQueuesRuleResponse::setQueryQueueRule(const HtapQueryQueueRule& value)
{
    queryQueueRule_ = value;
    queryQueueRuleIsSet_ = true;
}

bool ShowHtapQueryQueuesRuleResponse::queryQueueRuleIsSet() const
{
    return queryQueueRuleIsSet_;
}

void ShowHtapQueryQueuesRuleResponse::unsetqueryQueueRule()
{
    queryQueueRuleIsSet_ = false;
}

}
}
}
}
}


