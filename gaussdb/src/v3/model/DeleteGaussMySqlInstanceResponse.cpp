

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlInstanceResponse::DeleteGaussMySqlInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

DeleteGaussMySqlInstanceResponse::~DeleteGaussMySqlInstanceResponse() = default;

void DeleteGaussMySqlInstanceResponse::validate()
{
}

web::json::value DeleteGaussMySqlInstanceResponse::toJson() const
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
bool DeleteGaussMySqlInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlInstanceResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteGaussMySqlInstanceResponse::getOrderId() const
{
    return orderId_;
}

void DeleteGaussMySqlInstanceResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteGaussMySqlInstanceResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteGaussMySqlInstanceResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


