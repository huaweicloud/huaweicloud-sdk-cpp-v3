

#include "huaweicloud/cfw/v1/model/CreateFirewallResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallResponse::CreateFirewallResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    dataIsSet_ = false;
}

CreateFirewallResponse::~CreateFirewallResponse() = default;

void CreateFirewallResponse::validate()
{
}

web::json::value CreateFirewallResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateFirewallResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CreateFirewallReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string CreateFirewallResponse::getJobId() const
{
    return jobId_;
}

void CreateFirewallResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateFirewallResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateFirewallResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateFirewallResponse::getOrderId() const
{
    return orderId_;
}

void CreateFirewallResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool CreateFirewallResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void CreateFirewallResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

CreateFirewallReq CreateFirewallResponse::getData() const
{
    return data_;
}

void CreateFirewallResponse::setData(const CreateFirewallReq& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateFirewallResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateFirewallResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


