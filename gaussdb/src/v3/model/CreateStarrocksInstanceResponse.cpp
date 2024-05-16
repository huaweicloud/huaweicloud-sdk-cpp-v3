

#include "huaweicloud/gaussdb/v3/model/CreateStarrocksInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateStarrocksInstanceResponse::CreateStarrocksInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateStarrocksInstanceResponse::~CreateStarrocksInstanceResponse() = default;

void CreateStarrocksInstanceResponse::validate()
{
}

web::json::value CreateStarrocksInstanceResponse::toJson() const
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
bool CreateStarrocksInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            SrCreateInstanceRsp_instance refVal;
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


SrCreateInstanceRsp_instance CreateStarrocksInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateStarrocksInstanceResponse::setInstance(const SrCreateInstanceRsp_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateStarrocksInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateStarrocksInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateStarrocksInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateStarrocksInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateStarrocksInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateStarrocksInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


