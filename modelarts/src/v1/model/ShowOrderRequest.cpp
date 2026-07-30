

#include "huaweicloud/modelarts/v1/model/ShowOrderRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowOrderRequest::ShowOrderRequest()
{
    orderName_ = "";
    orderNameIsSet_ = false;
}

ShowOrderRequest::~ShowOrderRequest() = default;

void ShowOrderRequest::validate()
{
}

web::json::value ShowOrderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderNameIsSet_) {
        val[utility::conversions::to_string_t("order_name")] = ModelBase::toJson(orderName_);
    }

    return val;
}
bool ShowOrderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderName(refVal);
        }
    }
    return ok;
}


std::string ShowOrderRequest::getOrderName() const
{
    return orderName_;
}

void ShowOrderRequest::setOrderName(const std::string& value)
{
    orderName_ = value;
    orderNameIsSet_ = true;
}

bool ShowOrderRequest::orderNameIsSet() const
{
    return orderNameIsSet_;
}

void ShowOrderRequest::unsetorderName()
{
    orderNameIsSet_ = false;
}

}
}
}
}
}


