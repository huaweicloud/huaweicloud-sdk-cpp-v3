

#include "huaweicloud/eip/v2/model/BatchDeletePublicIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDeletePublicIpResponse::BatchDeletePublicIpResponse()
{
    jobIdsIsSet_ = false;
}

BatchDeletePublicIpResponse::~BatchDeletePublicIpResponse() = default;

void BatchDeletePublicIpResponse::validate()
{
}

web::json::value BatchDeletePublicIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool BatchDeletePublicIpResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<std::string>& BatchDeletePublicIpResponse::getJobIds()
{
    return jobIds_;
}

void BatchDeletePublicIpResponse::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool BatchDeletePublicIpResponse::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void BatchDeletePublicIpResponse::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


