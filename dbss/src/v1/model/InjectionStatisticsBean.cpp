

#include "huaweicloud/dbss/v1/model/InjectionStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




InjectionStatisticsBean::InjectionStatisticsBean()
{
    injectionNum_ = 0L;
    injectionNumIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
}

InjectionStatisticsBean::~InjectionStatisticsBean() = default;

void InjectionStatisticsBean::validate()
{
}

web::json::value InjectionStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(injectionNumIsSet_) {
        val[utility::conversions::to_string_t("injection_num")] = ModelBase::toJson(injectionNum_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }

    return val;
}
bool InjectionStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("injection_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("injection_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInjectionNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    return ok;
}


int64_t InjectionStatisticsBean::getInjectionNum() const
{
    return injectionNum_;
}

void InjectionStatisticsBean::setInjectionNum(int64_t value)
{
    injectionNum_ = value;
    injectionNumIsSet_ = true;
}

bool InjectionStatisticsBean::injectionNumIsSet() const
{
    return injectionNumIsSet_;
}

void InjectionStatisticsBean::unsetinjectionNum()
{
    injectionNumIsSet_ = false;
}

std::string InjectionStatisticsBean::getPeriod() const
{
    return period_;
}

void InjectionStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool InjectionStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void InjectionStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

}
}
}
}
}


