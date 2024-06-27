

#include "huaweicloud/gaussdb/v3/model/CreateClickHouseInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateClickHouseInstanceResponse::CreateClickHouseInstanceResponse()
{
    instanceIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateClickHouseInstanceResponse::~CreateClickHouseInstanceResponse() = default;

void CreateClickHouseInstanceResponse::validate()
{
}

web::json::value CreateClickHouseInstanceResponse::toJson() const
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
bool CreateClickHouseInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            CreateChInstanceInfo refVal;
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


CreateChInstanceInfo CreateClickHouseInstanceResponse::getInstance() const
{
    return instance_;
}

void CreateClickHouseInstanceResponse::setInstance(const CreateChInstanceInfo& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool CreateClickHouseInstanceResponse::instanceIsSet() const
{
    return instanceIsSet_;
}

void CreateClickHouseInstanceResponse::unsetinstance()
{
    instanceIsSet_ = false;
}

std::string CreateClickHouseInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateClickHouseInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateClickHouseInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateClickHouseInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


