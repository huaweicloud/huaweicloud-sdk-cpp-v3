

#include "huaweicloud/iotda/v5/model/RetryBatchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RetryBatchTaskResponse::RetryBatchTaskResponse()
{
    targetsIsSet_ = false;
}

RetryBatchTaskResponse::~RetryBatchTaskResponse() = default;

void RetryBatchTaskResponse::validate()
{
}

web::json::value RetryBatchTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }

    return val;
}
bool RetryBatchTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("targets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targets"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchTargetResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargets(refVal);
        }
    }
    return ok;
}


std::vector<BatchTargetResult>& RetryBatchTaskResponse::getTargets()
{
    return targets_;
}

void RetryBatchTaskResponse::setTargets(const std::vector<BatchTargetResult>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool RetryBatchTaskResponse::targetsIsSet() const
{
    return targetsIsSet_;
}

void RetryBatchTaskResponse::unsettargets()
{
    targetsIsSet_ = false;
}

}
}
}
}
}


