

#include "huaweicloud/functiongraph/v2/model/StrategyConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StrategyConfig::StrategyConfig()
{
    concurrency_ = 0;
    concurrencyIsSet_ = false;
    concurrentNum_ = 0;
    concurrentNumIsSet_ = false;
}

StrategyConfig::~StrategyConfig() = default;

void StrategyConfig::validate()
{
}

web::json::value StrategyConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(concurrencyIsSet_) {
        val[utility::conversions::to_string_t("concurrency")] = ModelBase::toJson(concurrency_);
    }
    if(concurrentNumIsSet_) {
        val[utility::conversions::to_string_t("concurrent_num")] = ModelBase::toJson(concurrentNum_);
    }

    return val;
}
bool StrategyConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrent_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrent_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrentNum(refVal);
        }
    }
    return ok;
}


int32_t StrategyConfig::getConcurrency() const
{
    return concurrency_;
}

void StrategyConfig::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool StrategyConfig::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void StrategyConfig::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

int32_t StrategyConfig::getConcurrentNum() const
{
    return concurrentNum_;
}

void StrategyConfig::setConcurrentNum(int32_t value)
{
    concurrentNum_ = value;
    concurrentNumIsSet_ = true;
}

bool StrategyConfig::concurrentNumIsSet() const
{
    return concurrentNumIsSet_;
}

void StrategyConfig::unsetconcurrentNum()
{
    concurrentNumIsSet_ = false;
}

}
}
}
}
}


