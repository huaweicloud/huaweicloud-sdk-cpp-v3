

#include "huaweicloud/eip/v2/model/BatchModifyBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchModifyBandwidthResponse::BatchModifyBandwidthResponse()
{
    successResourcesIsSet_ = false;
    failureResourcesIsSet_ = false;
}

BatchModifyBandwidthResponse::~BatchModifyBandwidthResponse() = default;

void BatchModifyBandwidthResponse::validate()
{
}

web::json::value BatchModifyBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successResourcesIsSet_) {
        val[utility::conversions::to_string_t("success_resources")] = ModelBase::toJson(successResources_);
    }
    if(failureResourcesIsSet_) {
        val[utility::conversions::to_string_t("failure_resources")] = ModelBase::toJson(failureResources_);
    }

    return val;
}
bool BatchModifyBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<SuccessResources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<FailureResources> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureResources(refVal);
        }
    }
    return ok;
}


std::vector<SuccessResources>& BatchModifyBandwidthResponse::getSuccessResources()
{
    return successResources_;
}

void BatchModifyBandwidthResponse::setSuccessResources(const std::vector<SuccessResources>& value)
{
    successResources_ = value;
    successResourcesIsSet_ = true;
}

bool BatchModifyBandwidthResponse::successResourcesIsSet() const
{
    return successResourcesIsSet_;
}

void BatchModifyBandwidthResponse::unsetsuccessResources()
{
    successResourcesIsSet_ = false;
}

std::vector<FailureResources>& BatchModifyBandwidthResponse::getFailureResources()
{
    return failureResources_;
}

void BatchModifyBandwidthResponse::setFailureResources(const std::vector<FailureResources>& value)
{
    failureResources_ = value;
    failureResourcesIsSet_ = true;
}

bool BatchModifyBandwidthResponse::failureResourcesIsSet() const
{
    return failureResourcesIsSet_;
}

void BatchModifyBandwidthResponse::unsetfailureResources()
{
    failureResourcesIsSet_ = false;
}

}
}
}
}
}


