

#include "huaweicloud/cce/v3/model/ResizeClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResizeClusterResponse::ResizeClusterResponse()
{
    jobID_ = "";
    jobIDIsSet_ = false;
    orderID_ = "";
    orderIDIsSet_ = false;
}

ResizeClusterResponse::~ResizeClusterResponse() = default;

void ResizeClusterResponse::validate()
{
}

web::json::value ResizeClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIDIsSet_) {
        val[utility::conversions::to_string_t("jobID")] = ModelBase::toJson(jobID_);
    }
    if(orderIDIsSet_) {
        val[utility::conversions::to_string_t("orderID")] = ModelBase::toJson(orderID_);
    }

    return val;
}
bool ResizeClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("orderID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("orderID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderID(refVal);
        }
    }
    return ok;
}


std::string ResizeClusterResponse::getJobID() const
{
    return jobID_;
}

void ResizeClusterResponse::setJobID(const std::string& value)
{
    jobID_ = value;
    jobIDIsSet_ = true;
}

bool ResizeClusterResponse::jobIDIsSet() const
{
    return jobIDIsSet_;
}

void ResizeClusterResponse::unsetjobID()
{
    jobIDIsSet_ = false;
}

std::string ResizeClusterResponse::getOrderID() const
{
    return orderID_;
}

void ResizeClusterResponse::setOrderID(const std::string& value)
{
    orderID_ = value;
    orderIDIsSet_ = true;
}

bool ResizeClusterResponse::orderIDIsSet() const
{
    return orderIDIsSet_;
}

void ResizeClusterResponse::unsetorderID()
{
    orderIDIsSet_ = false;
}

}
}
}
}
}


