

#include "huaweicloud/cce/v3/model/ScaleGroupStatus_upcomingNodeCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleGroupStatus_upcomingNodeCount::ScaleGroupStatus_upcomingNodeCount()
{
    postPaid_ = 0;
    postPaidIsSet_ = false;
    prePaid_ = 0;
    prePaidIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ScaleGroupStatus_upcomingNodeCount::~ScaleGroupStatus_upcomingNodeCount() = default;

void ScaleGroupStatus_upcomingNodeCount::validate()
{
}

web::json::value ScaleGroupStatus_upcomingNodeCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(postPaidIsSet_) {
        val[utility::conversions::to_string_t("postPaid")] = ModelBase::toJson(postPaid_);
    }
    if(prePaidIsSet_) {
        val[utility::conversions::to_string_t("prePaid")] = ModelBase::toJson(prePaid_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ScaleGroupStatus_upcomingNodeCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("postPaid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("postPaid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostPaid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prePaid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prePaid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrePaid(refVal);
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


int32_t ScaleGroupStatus_upcomingNodeCount::getPostPaid() const
{
    return postPaid_;
}

void ScaleGroupStatus_upcomingNodeCount::setPostPaid(int32_t value)
{
    postPaid_ = value;
    postPaidIsSet_ = true;
}

bool ScaleGroupStatus_upcomingNodeCount::postPaidIsSet() const
{
    return postPaidIsSet_;
}

void ScaleGroupStatus_upcomingNodeCount::unsetpostPaid()
{
    postPaidIsSet_ = false;
}

int32_t ScaleGroupStatus_upcomingNodeCount::getPrePaid() const
{
    return prePaid_;
}

void ScaleGroupStatus_upcomingNodeCount::setPrePaid(int32_t value)
{
    prePaid_ = value;
    prePaidIsSet_ = true;
}

bool ScaleGroupStatus_upcomingNodeCount::prePaidIsSet() const
{
    return prePaidIsSet_;
}

void ScaleGroupStatus_upcomingNodeCount::unsetprePaid()
{
    prePaidIsSet_ = false;
}

int32_t ScaleGroupStatus_upcomingNodeCount::getTotal() const
{
    return total_;
}

void ScaleGroupStatus_upcomingNodeCount::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ScaleGroupStatus_upcomingNodeCount::totalIsSet() const
{
    return totalIsSet_;
}

void ScaleGroupStatus_upcomingNodeCount::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


