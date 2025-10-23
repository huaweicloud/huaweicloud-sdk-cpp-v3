

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlPlanStateListResponse_sql_plan_bind_state_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlPlanStateListResponse_sql_plan_bind_state_list::SqlPlanStateListResponse_sql_plan_bind_state_list()
{
    outline_ = "";
    outlineIsSet_ = false;
    cost_ = "";
    costIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sqlHash_ = "";
    sqlHashIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
}

SqlPlanStateListResponse_sql_plan_bind_state_list::~SqlPlanStateListResponse_sql_plan_bind_state_list() = default;

void SqlPlanStateListResponse_sql_plan_bind_state_list::validate()
{
}

web::json::value SqlPlanStateListResponse_sql_plan_bind_state_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outlineIsSet_) {
        val[utility::conversions::to_string_t("outline")] = ModelBase::toJson(outline_);
    }
    if(costIsSet_) {
        val[utility::conversions::to_string_t("cost")] = ModelBase::toJson(cost_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sqlHashIsSet_) {
        val[utility::conversions::to_string_t("sql_hash")] = ModelBase::toJson(sqlHash_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }

    return val;
}
bool SqlPlanStateListResponse_sql_plan_bind_state_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("outline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutline(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cost"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCost(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sql_hash"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_hash"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlHash(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    return ok;
}


std::string SqlPlanStateListResponse_sql_plan_bind_state_list::getOutline() const
{
    return outline_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::setOutline(const std::string& value)
{
    outline_ = value;
    outlineIsSet_ = true;
}

bool SqlPlanStateListResponse_sql_plan_bind_state_list::outlineIsSet() const
{
    return outlineIsSet_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::unsetoutline()
{
    outlineIsSet_ = false;
}

std::string SqlPlanStateListResponse_sql_plan_bind_state_list::getCost() const
{
    return cost_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::setCost(const std::string& value)
{
    cost_ = value;
    costIsSet_ = true;
}

bool SqlPlanStateListResponse_sql_plan_bind_state_list::costIsSet() const
{
    return costIsSet_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::unsetcost()
{
    costIsSet_ = false;
}

std::string SqlPlanStateListResponse_sql_plan_bind_state_list::getStatus() const
{
    return status_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SqlPlanStateListResponse_sql_plan_bind_state_list::statusIsSet() const
{
    return statusIsSet_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SqlPlanStateListResponse_sql_plan_bind_state_list::getSqlHash() const
{
    return sqlHash_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::setSqlHash(const std::string& value)
{
    sqlHash_ = value;
    sqlHashIsSet_ = true;
}

bool SqlPlanStateListResponse_sql_plan_bind_state_list::sqlHashIsSet() const
{
    return sqlHashIsSet_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::unsetsqlHash()
{
    sqlHashIsSet_ = false;
}

std::string SqlPlanStateListResponse_sql_plan_bind_state_list::getPlanId() const
{
    return planId_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool SqlPlanStateListResponse_sql_plan_bind_state_list::planIdIsSet() const
{
    return planIdIsSet_;
}

void SqlPlanStateListResponse_sql_plan_bind_state_list::unsetplanId()
{
    planIdIsSet_ = false;
}

}
}
}
}
}


