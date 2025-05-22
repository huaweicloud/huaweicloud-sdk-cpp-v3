

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteGeminiDbDualActiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteGeminiDbDualActiveResponse::DeleteGeminiDbDualActiveResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteGeminiDbDualActiveResponse::~DeleteGeminiDbDualActiveResponse() = default;

void DeleteGeminiDbDualActiveResponse::validate()
{
}

web::json::value DeleteGeminiDbDualActiveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteGeminiDbDualActiveResponse::fromJson(const web::json::value& val)
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


std::string DeleteGeminiDbDualActiveResponse::getJobId() const
{
    return jobId_;
}

void DeleteGeminiDbDualActiveResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGeminiDbDualActiveResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGeminiDbDualActiveResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


