

#include "huaweicloud/eip/v2/model/BatchDisassociatePublicipsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchDisassociatePublicipsResponse::BatchDisassociatePublicipsResponse()
{
    jobIdsIsSet_ = false;
}

BatchDisassociatePublicipsResponse::~BatchDisassociatePublicipsResponse() = default;

void BatchDisassociatePublicipsResponse::validate()
{
}

web::json::value BatchDisassociatePublicipsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}

bool BatchDisassociatePublicipsResponse::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchDisassociatePublicipsResponse::getJobIds()
{
    return jobIds_;
}

void BatchDisassociatePublicipsResponse::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool BatchDisassociatePublicipsResponse::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void BatchDisassociatePublicipsResponse::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


