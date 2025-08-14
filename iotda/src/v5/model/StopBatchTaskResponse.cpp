

#include "huaweicloud/iotda/v5/model/StopBatchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




StopBatchTaskResponse::StopBatchTaskResponse()
{
    targetsIsSet_ = false;
}

StopBatchTaskResponse::~StopBatchTaskResponse() = default;

void StopBatchTaskResponse::validate()
{
}

web::json::value StopBatchTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }

    return val;
}
bool StopBatchTaskResponse::fromJson(const web::json::value& val)
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


std::vector<BatchTargetResult>& StopBatchTaskResponse::getTargets()
{
    return targets_;
}

void StopBatchTaskResponse::setTargets(const std::vector<BatchTargetResult>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool StopBatchTaskResponse::targetsIsSet() const
{
    return targetsIsSet_;
}

void StopBatchTaskResponse::unsettargets()
{
    targetsIsSet_ = false;
}

}
}
}
}
}


