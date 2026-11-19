

#include "huaweicloud/gaussdb/v3/model/ExchangeInstanceVipProxyIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExchangeInstanceVipProxyIpResponse::ExchangeInstanceVipProxyIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ExchangeInstanceVipProxyIpResponse::~ExchangeInstanceVipProxyIpResponse() = default;

void ExchangeInstanceVipProxyIpResponse::validate()
{
}

web::json::value ExchangeInstanceVipProxyIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ExchangeInstanceVipProxyIpResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ExchangeInstanceVipProxyIpResponse::getJobId() const
{
    return jobId_;
}

void ExchangeInstanceVipProxyIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExchangeInstanceVipProxyIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExchangeInstanceVipProxyIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


