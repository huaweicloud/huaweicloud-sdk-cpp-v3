

#include "huaweicloud/gaussdb/v3/model/SwitchGaussMySqlInstanceSslResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchGaussMySqlInstanceSslResponse::SwitchGaussMySqlInstanceSslResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SwitchGaussMySqlInstanceSslResponse::~SwitchGaussMySqlInstanceSslResponse() = default;

void SwitchGaussMySqlInstanceSslResponse::validate()
{
}

web::json::value SwitchGaussMySqlInstanceSslResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SwitchGaussMySqlInstanceSslResponse::fromJson(const web::json::value& val)
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


std::string SwitchGaussMySqlInstanceSslResponse::getJobId() const
{
    return jobId_;
}

void SwitchGaussMySqlInstanceSslResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchGaussMySqlInstanceSslResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchGaussMySqlInstanceSslResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


