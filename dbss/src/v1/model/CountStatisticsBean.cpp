

#include "huaweicloud/dbss/v1/model/CountStatisticsBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountStatisticsBean::CountStatisticsBean()
{
    period_ = "";
    periodIsSet_ = false;
    sqlNum_ = 0L;
    sqlNumIsSet_ = false;
}

CountStatisticsBean::~CountStatisticsBean() = default;

void CountStatisticsBean::validate()
{
}

web::json::value CountStatisticsBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(sqlNumIsSet_) {
        val[utility::conversions::to_string_t("sql_num")] = ModelBase::toJson(sqlNum_);
    }

    return val;
}
bool CountStatisticsBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlNum(refVal);
        }
    }
    return ok;
}


std::string CountStatisticsBean::getPeriod() const
{
    return period_;
}

void CountStatisticsBean::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool CountStatisticsBean::periodIsSet() const
{
    return periodIsSet_;
}

void CountStatisticsBean::unsetperiod()
{
    periodIsSet_ = false;
}

int64_t CountStatisticsBean::getSqlNum() const
{
    return sqlNum_;
}

void CountStatisticsBean::setSqlNum(int64_t value)
{
    sqlNum_ = value;
    sqlNumIsSet_ = true;
}

bool CountStatisticsBean::sqlNumIsSet() const
{
    return sqlNumIsSet_;
}

void CountStatisticsBean::unsetsqlNum()
{
    sqlNumIsSet_ = false;
}

}
}
}
}
}


