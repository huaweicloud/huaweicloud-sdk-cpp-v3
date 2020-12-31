

#include "huaweicloud/evs/model/CreateVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateVolumeResponse::CreateVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    volumeIdsIsSet_ = false;
}

CreateVolumeResponse::~CreateVolumeResponse() = default;

void CreateVolumeResponse::validate()
{
}

web::json::value CreateVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }

    return val;
}

bool CreateVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    return ok;
}


std::string CreateVolumeResponse::getJobId() const
{
    return jobId_;
}

void CreateVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateVolumeResponse::getOrderId() const
{
    return orderId_;
}

void CreateVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::vector<std::string>& CreateVolumeResponse::getVolumeIds()
{
    return volumeIds_;
}

void CreateVolumeResponse::setVolumeIds(const std::vector<std::string>& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool CreateVolumeResponse::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void CreateVolumeResponse::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

}
}
}
}
}


