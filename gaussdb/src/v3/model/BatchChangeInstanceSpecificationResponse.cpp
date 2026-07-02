

#include "huaweicloud/gaussdb/v3/model/BatchChangeInstanceSpecificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchChangeInstanceSpecificationResponse::BatchChangeInstanceSpecificationResponse()
{
    jobIdsIsSet_ = false;
    orderIdsIsSet_ = false;
}

BatchChangeInstanceSpecificationResponse::~BatchChangeInstanceSpecificationResponse() = default;

void BatchChangeInstanceSpecificationResponse::validate()
{
}

web::json::value BatchChangeInstanceSpecificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }
    if(orderIdsIsSet_) {
        val[utility::conversions::to_string_t("order_ids")] = ModelBase::toJson(orderIds_);
    }

    return val;
}
bool BatchChangeInstanceSpecificationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchChangeInstanceSpecificationResponse::getJobIds()
{
    return jobIds_;
}

void BatchChangeInstanceSpecificationResponse::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool BatchChangeInstanceSpecificationResponse::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void BatchChangeInstanceSpecificationResponse::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

std::vector<std::string>& BatchChangeInstanceSpecificationResponse::getOrderIds()
{
    return orderIds_;
}

void BatchChangeInstanceSpecificationResponse::setOrderIds(const std::vector<std::string>& value)
{
    orderIds_ = value;
    orderIdsIsSet_ = true;
}

bool BatchChangeInstanceSpecificationResponse::orderIdsIsSet() const
{
    return orderIdsIsSet_;
}

void BatchChangeInstanceSpecificationResponse::unsetorderIds()
{
    orderIdsIsSet_ = false;
}

}
}
}
}
}


