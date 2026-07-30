

#include "huaweicloud/modelarts/v1/model/ServerJobDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerJobDeleteRequest::ServerJobDeleteRequest()
{
    jobIdsIsSet_ = false;
}

ServerJobDeleteRequest::~ServerJobDeleteRequest() = default;

void ServerJobDeleteRequest::validate()
{
}

web::json::value ServerJobDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool ServerJobDeleteRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& ServerJobDeleteRequest::getJobIds()
{
    return jobIds_;
}

void ServerJobDeleteRequest::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool ServerJobDeleteRequest::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void ServerJobDeleteRequest::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


