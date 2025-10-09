

#include "huaweicloud/gaussdb/v3/model/OperateHtapQueryQueueControlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateHtapQueryQueueControlReq::OperateHtapQueryQueueControlReq()
{
    enableQueryQueueSelect_ = "";
    enableQueryQueueSelectIsSet_ = false;
}

OperateHtapQueryQueueControlReq::~OperateHtapQueryQueueControlReq() = default;

void OperateHtapQueryQueueControlReq::validate()
{
}

web::json::value OperateHtapQueryQueueControlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableQueryQueueSelectIsSet_) {
        val[utility::conversions::to_string_t("enable_query_queue_select")] = ModelBase::toJson(enableQueryQueueSelect_);
    }

    return val;
}
bool OperateHtapQueryQueueControlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_query_queue_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_query_queue_select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableQueryQueueSelect(refVal);
        }
    }
    return ok;
}


std::string OperateHtapQueryQueueControlReq::getEnableQueryQueueSelect() const
{
    return enableQueryQueueSelect_;
}

void OperateHtapQueryQueueControlReq::setEnableQueryQueueSelect(const std::string& value)
{
    enableQueryQueueSelect_ = value;
    enableQueryQueueSelectIsSet_ = true;
}

bool OperateHtapQueryQueueControlReq::enableQueryQueueSelectIsSet() const
{
    return enableQueryQueueSelectIsSet_;
}

void OperateHtapQueryQueueControlReq::unsetenableQueryQueueSelect()
{
    enableQueryQueueSelectIsSet_ = false;
}

}
}
}
}
}


