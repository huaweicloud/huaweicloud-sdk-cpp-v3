

#include "huaweicloud/cbr/v1/model/CombinedOrder.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CombinedOrder::CombinedOrder()
{
    combinedOrderId_ = "";
    combinedOrderIdIsSet_ = false;
    combinedOrderEcsNum_ = 0;
    combinedOrderEcsNumIsSet_ = false;
    combinedOrderNum_ = 0;
    combinedOrderNumIsSet_ = false;
}

CombinedOrder::~CombinedOrder() = default;

void CombinedOrder::validate()
{
}

web::json::value CombinedOrder::toJson() const
{
    web::json::value val = web::json::value::object();

    if(combinedOrderIdIsSet_) {
        val[utility::conversions::to_string_t("combined_order_id")] = ModelBase::toJson(combinedOrderId_);
    }
    if(combinedOrderEcsNumIsSet_) {
        val[utility::conversions::to_string_t("combined_order_ecs_num")] = ModelBase::toJson(combinedOrderEcsNum_);
    }
    if(combinedOrderNumIsSet_) {
        val[utility::conversions::to_string_t("combined_order_num")] = ModelBase::toJson(combinedOrderNum_);
    }

    return val;
}
bool CombinedOrder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("combined_order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("combined_order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCombinedOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("combined_order_ecs_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("combined_order_ecs_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCombinedOrderEcsNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("combined_order_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("combined_order_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCombinedOrderNum(refVal);
        }
    }
    return ok;
}


std::string CombinedOrder::getCombinedOrderId() const
{
    return combinedOrderId_;
}

void CombinedOrder::setCombinedOrderId(const std::string& value)
{
    combinedOrderId_ = value;
    combinedOrderIdIsSet_ = true;
}

bool CombinedOrder::combinedOrderIdIsSet() const
{
    return combinedOrderIdIsSet_;
}

void CombinedOrder::unsetcombinedOrderId()
{
    combinedOrderIdIsSet_ = false;
}

int32_t CombinedOrder::getCombinedOrderEcsNum() const
{
    return combinedOrderEcsNum_;
}

void CombinedOrder::setCombinedOrderEcsNum(int32_t value)
{
    combinedOrderEcsNum_ = value;
    combinedOrderEcsNumIsSet_ = true;
}

bool CombinedOrder::combinedOrderEcsNumIsSet() const
{
    return combinedOrderEcsNumIsSet_;
}

void CombinedOrder::unsetcombinedOrderEcsNum()
{
    combinedOrderEcsNumIsSet_ = false;
}

int32_t CombinedOrder::getCombinedOrderNum() const
{
    return combinedOrderNum_;
}

void CombinedOrder::setCombinedOrderNum(int32_t value)
{
    combinedOrderNum_ = value;
    combinedOrderNumIsSet_ = true;
}

bool CombinedOrder::combinedOrderNumIsSet() const
{
    return combinedOrderNumIsSet_;
}

void CombinedOrder::unsetcombinedOrderNum()
{
    combinedOrderNumIsSet_ = false;
}

}
}
}
}
}


