

#include "huaweicloud/gaussdbfornosql/v3/model/CreateGeminiDbDualActiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateGeminiDbDualActiveResponse::CreateGeminiDbDualActiveResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGeminiDbDualActiveResponse::~CreateGeminiDbDualActiveResponse() = default;

void CreateGeminiDbDualActiveResponse::validate()
{
}

web::json::value CreateGeminiDbDualActiveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateGeminiDbDualActiveResponse::fromJson(const web::json::value& val)
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


std::string CreateGeminiDbDualActiveResponse::getJobId() const
{
    return jobId_;
}

void CreateGeminiDbDualActiveResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGeminiDbDualActiveResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGeminiDbDualActiveResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


