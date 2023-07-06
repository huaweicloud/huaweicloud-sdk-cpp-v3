

#include "huaweicloud/mpc/v1/model/VideoDeblock.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




VideoDeblock::VideoDeblock()
{
    name_ = "";
    nameIsSet_ = false;
    executionOrder_ = 0;
    executionOrderIsSet_ = false;
}

VideoDeblock::~VideoDeblock() = default;

void VideoDeblock::validate()
{
}

web::json::value VideoDeblock::toJson() const
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

bool VideoDeblock::fromJson(const web::json::value& val)
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

std::string VideoDeblock::getName() const
{
    return name_;
}

void VideoDeblock::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool VideoDeblock::nameIsSet() const
{
    return nameIsSet_;
}

void VideoDeblock::unsetname()
{
    nameIsSet_ = false;
}

int32_t VideoDeblock::getExecutionOrder() const
{
    return executionOrder_;
}

void VideoDeblock::setExecutionOrder(int32_t value)
{
    executionOrder_ = value;
    executionOrderIsSet_ = true;
}

bool VideoDeblock::executionOrderIsSet() const
{
    return executionOrderIsSet_;
}

void VideoDeblock::unsetexecutionOrder()
{
    executionOrderIsSet_ = false;
}

}
}
}
}
}


