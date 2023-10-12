

#include "huaweicloud/gaussdb/v3/model/ChangeGaussMySqlInstanceSpecificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChangeGaussMySqlInstanceSpecificationResponse::ChangeGaussMySqlInstanceSpecificationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ChangeGaussMySqlInstanceSpecificationResponse::~ChangeGaussMySqlInstanceSpecificationResponse() = default;

void ChangeGaussMySqlInstanceSpecificationResponse::validate()
{
}

web::json::value ChangeGaussMySqlInstanceSpecificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool ChangeGaussMySqlInstanceSpecificationResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ChangeGaussMySqlInstanceSpecificationResponse::getJobId() const
{
    return jobId_;
}

void ChangeGaussMySqlInstanceSpecificationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeGaussMySqlInstanceSpecificationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeGaussMySqlInstanceSpecificationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ChangeGaussMySqlInstanceSpecificationResponse::getOrderId() const
{
    return orderId_;
}

void ChangeGaussMySqlInstanceSpecificationResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeGaussMySqlInstanceSpecificationResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeGaussMySqlInstanceSpecificationResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


