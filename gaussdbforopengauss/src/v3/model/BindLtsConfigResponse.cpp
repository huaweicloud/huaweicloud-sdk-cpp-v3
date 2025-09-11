

#include "huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindLtsConfigResponse::BindLtsConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BindLtsConfigResponse::~BindLtsConfigResponse() = default;

void BindLtsConfigResponse::validate()
{
}

web::json::value BindLtsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BindLtsConfigResponse::fromJson(const web::json::value& val)
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


std::string BindLtsConfigResponse::getJobId() const
{
    return jobId_;
}

void BindLtsConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BindLtsConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BindLtsConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


