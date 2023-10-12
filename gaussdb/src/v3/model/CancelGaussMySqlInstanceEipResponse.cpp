

#include "huaweicloud/gaussdb/v3/model/CancelGaussMySqlInstanceEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelGaussMySqlInstanceEipResponse::CancelGaussMySqlInstanceEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CancelGaussMySqlInstanceEipResponse::~CancelGaussMySqlInstanceEipResponse() = default;

void CancelGaussMySqlInstanceEipResponse::validate()
{
}

web::json::value CancelGaussMySqlInstanceEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CancelGaussMySqlInstanceEipResponse::fromJson(const web::json::value& val)
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


std::string CancelGaussMySqlInstanceEipResponse::getJobId() const
{
    return jobId_;
}

void CancelGaussMySqlInstanceEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CancelGaussMySqlInstanceEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CancelGaussMySqlInstanceEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


