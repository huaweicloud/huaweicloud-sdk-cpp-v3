

#include "huaweicloud/gaussdb/v3/model/DeleteScheduleTasKRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteScheduleTasKRequestBody::DeleteScheduleTasKRequestBody()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteScheduleTasKRequestBody::~DeleteScheduleTasKRequestBody() = default;

void DeleteScheduleTasKRequestBody::validate()
{
}

web::json::value DeleteScheduleTasKRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteScheduleTasKRequestBody::fromJson(const web::json::value& val)
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


std::string DeleteScheduleTasKRequestBody::getJobId() const
{
    return jobId_;
}

void DeleteScheduleTasKRequestBody::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteScheduleTasKRequestBody::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteScheduleTasKRequestBody::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


