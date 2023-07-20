

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateRestoreInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateRestoreInstanceResponse::CreateRestoreInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateRestoreInstanceResponse::~CreateRestoreInstanceResponse() = default;

void CreateRestoreInstanceResponse::validate()
{
}

web::json::value CreateRestoreInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateRestoreInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            CreateInstanceRespItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
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

CreateInstanceRespItem CreateRestoreInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateRestoreInstanceResponse::setInstance(const CreateInstanceRespItem& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateRestoreInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateRestoreInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateRestoreInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateRestoreInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateRestoreInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateRestoreInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


