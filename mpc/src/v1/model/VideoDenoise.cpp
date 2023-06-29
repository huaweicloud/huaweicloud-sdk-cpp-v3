

#include "huaweicloud/mpc/v1/model/VideoDenoise.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoDenoise::VideoDenoise()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
}

VideoDenoise::~VideoDenoise() = default;

void VideoDenoise::validate()
{
}

web::json::value VideoDenoise::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(executionOrderIsSet_) {
        val[utility::conversions::to_string_t("execution_order")] = ModelBase::toJson(executionOrder_);
    }

    return val;
}

bool VideoDenoise::fromJson(const web::json::value& val)
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
    return ok;
}


std::string VideoDenoise::getName() const
{
    return name_;
}

void VideoDenoise::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoDenoise::nameIsSet() const
{
    return nameIsSet_;
}

void VideoDenoise::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoDenoise::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoDenoise::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoDenoise::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoDenoise::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

}
}
}
}
}


