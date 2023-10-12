

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlReadonlyNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlReadonlyNodeResponse::DeleteGaussMySqlReadonlyNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

DeleteGaussMySqlReadonlyNodeResponse::~DeleteGaussMySqlReadonlyNodeResponse() = default;

void DeleteGaussMySqlReadonlyNodeResponse::validate()
{
}

web::json::value DeleteGaussMySqlReadonlyNodeResponse::toJson() const
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
bool DeleteGaussMySqlReadonlyNodeResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlReadonlyNodeResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlReadonlyNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlReadonlyNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlReadonlyNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteGaussMySqlReadonlyNodeResponse::getOrderId() const
{
    return orderId_;
}

void DeleteGaussMySqlReadonlyNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool DeleteGaussMySqlReadonlyNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void DeleteGaussMySqlReadonlyNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


