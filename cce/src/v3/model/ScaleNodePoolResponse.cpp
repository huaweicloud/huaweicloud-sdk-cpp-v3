

#include "huaweicloud/cce/v3/model/ScaleNodePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleNodePoolResponse::ScaleNodePoolResponse()
{
    orderID_ = "";
    orderIDIsSet_ = false;
}

ScaleNodePoolResponse::~ScaleNodePoolResponse() = default;

void ScaleNodePoolResponse::validate()
{
}

web::json::value ScaleNodePoolResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIDIsSet_) {
        val[utility::conversions::to_string_t("orderID")] = ModelBase::toJson(orderID_);
    }

    return val;
}
bool ScaleNodePoolResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("orderID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderID(refVal);
        }
    }
    return ok;
}


std::string ScaleNodePoolResponse::getOrderID() const
{
    return orderID_;
}

void ScaleNodePoolResponse::setOrderID(const std::string& value)
{
    orderID_ = value;
    orderIDIsSet_ = true;
}

bool ScaleNodePoolResponse::orderIDIsSet() const
{
    return orderIDIsSet_;
}

void ScaleNodePoolResponse::unsetorderID()
{
    orderIDIsSet_ = false;
}

}
}
}
}
}


