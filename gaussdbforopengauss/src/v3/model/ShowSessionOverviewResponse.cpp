

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSessionOverviewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSessionOverviewResponse::ShowSessionOverviewResponse()
{
    activeNum_ = "";
    activeNumIsSet_ = false;
    totalNum_ = "";
    totalNumIsSet_ = false;
    slowSqlNum_ = "";
    slowSqlNumIsSet_ = false;
    lockNum_ = "";
    lockNumIsSet_ = false;
}

ShowSessionOverviewResponse::~ShowSessionOverviewResponse() = default;

void ShowSessionOverviewResponse::validate()
{
}

web::json::value ShowSessionOverviewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeNumIsSet_) {
        val[utility::conversions::to_string_t("active_num")] = ModelBase::toJson(activeNum_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(slowSqlNumIsSet_) {
        val[utility::conversions::to_string_t("slow_sql_num")] = ModelBase::toJson(slowSqlNum_);
    }
    if(lockNumIsSet_) {
        val[utility::conversions::to_string_t("lock_num")] = ModelBase::toJson(lockNum_);
    }

    return val;
}
bool ShowSessionOverviewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sql_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqlNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockNum(refVal);
        }
    }
    return ok;
}


std::string ShowSessionOverviewResponse::getActiveNum() const
{
    return activeNum_;
}

void ShowSessionOverviewResponse::setActiveNum(const std::string& value)
{
    activeNum_ = value;
    activeNumIsSet_ = true;
}

bool ShowSessionOverviewResponse::activeNumIsSet() const
{
    return activeNumIsSet_;
}

void ShowSessionOverviewResponse::unsetactiveNum()
{
    activeNumIsSet_ = false;
}

std::string ShowSessionOverviewResponse::getTotalNum() const
{
    return totalNum_;
}

void ShowSessionOverviewResponse::setTotalNum(const std::string& value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ShowSessionOverviewResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ShowSessionOverviewResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::string ShowSessionOverviewResponse::getSlowSqlNum() const
{
    return slowSqlNum_;
}

void ShowSessionOverviewResponse::setSlowSqlNum(const std::string& value)
{
    slowSqlNum_ = value;
    slowSqlNumIsSet_ = true;
}

bool ShowSessionOverviewResponse::slowSqlNumIsSet() const
{
    return slowSqlNumIsSet_;
}

void ShowSessionOverviewResponse::unsetslowSqlNum()
{
    slowSqlNumIsSet_ = false;
}

std::string ShowSessionOverviewResponse::getLockNum() const
{
    return lockNum_;
}

void ShowSessionOverviewResponse::setLockNum(const std::string& value)
{
    lockNum_ = value;
    lockNumIsSet_ = true;
}

bool ShowSessionOverviewResponse::lockNumIsSet() const
{
    return lockNumIsSet_;
}

void ShowSessionOverviewResponse::unsetlockNum()
{
    lockNumIsSet_ = false;
}

}
}
}
}
}


