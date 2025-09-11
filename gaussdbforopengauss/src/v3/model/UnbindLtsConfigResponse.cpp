

#include "huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UnbindLtsConfigResponse::UnbindLtsConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UnbindLtsConfigResponse::~UnbindLtsConfigResponse() = default;

void UnbindLtsConfigResponse::validate()
{
}

web::json::value UnbindLtsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UnbindLtsConfigResponse::fromJson(const web::json::value& val)
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


std::string UnbindLtsConfigResponse::getJobId() const
{
    return jobId_;
}

void UnbindLtsConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UnbindLtsConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UnbindLtsConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


