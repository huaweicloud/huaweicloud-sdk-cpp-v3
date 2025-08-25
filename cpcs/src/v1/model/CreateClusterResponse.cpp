

#include "huaweicloud/cpcs/v1/model/CreateClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CreateClusterResponse::CreateClusterResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
}

CreateClusterResponse::~CreateClusterResponse() = default;

void CreateClusterResponse::validate()
{
}

web::json::value CreateClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool CreateClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


std::string CreateClusterResponse::getOrderId() const
{
    return orderId_;
}

void CreateClusterResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateClusterResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateClusterResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


