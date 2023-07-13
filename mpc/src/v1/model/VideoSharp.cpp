

#include "huaweicloud/mpc/v1/model/VideoSharp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoSharp::VideoSharp()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
}

VideoSharp::~VideoSharp() = default;

void VideoSharp::validate()
{
}

web::json::value VideoSharp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionOrderIsSet_) {
        val[utility::conversions::to_string_t("execution_order")] = ModelBase::toJson(executionOrder_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }

    return val;
}

bool VideoSharp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    return ok;
}

std::string VideoSharp::getName() const
{
    return name_;
}

void VideoSharp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoSharp::nameIsSet() const
{
    return nameIsSet_;
}

void VideoSharp::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoSharp::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoSharp::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoSharp::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoSharp::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

std::string VideoSharp::getAmount() const
{
    return amount_;
}

void VideoSharp::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool VideoSharp::amountIsSet() const
{
    return amountIsSet_;
}

void VideoSharp::unsetamount()
{
    amountIsSet_ = false;
}

}
}
}
}
}


