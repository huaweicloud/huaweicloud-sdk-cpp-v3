

#include "huaweicloud/iotda/v5/model/ConfirmBatchTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ConfirmBatchTaskResponse::ConfirmBatchTaskResponse()
{
    targetsIsSet_ = false;
}

ConfirmBatchTaskResponse::~ConfirmBatchTaskResponse() = default;

void ConfirmBatchTaskResponse::validate()
{
}

web::json::value ConfirmBatchTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetsIsSet_) {
        val[utility::conversions::to_string_t("targets")] = ModelBase::toJson(targets_);
    }

    return val;
}
bool ConfirmBatchTaskResponse::fromJson(const web::json::value& val)
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


std::vector<BatchTargetResult>& ConfirmBatchTaskResponse::getTargets()
{
    return targets_;
}

void ConfirmBatchTaskResponse::setTargets(const std::vector<BatchTargetResult>& value)
{
    targets_ = value;
    targetsIsSet_ = true;
}

bool ConfirmBatchTaskResponse::targetsIsSet() const
{
    return targetsIsSet_;
}

void ConfirmBatchTaskResponse::unsettargets()
{
    targetsIsSet_ = false;
}

}
}
}
}
}


