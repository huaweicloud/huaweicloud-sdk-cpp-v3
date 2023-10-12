

#include "huaweicloud/dds/v3/model/UpdateInstancePortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateInstancePortResponse::UpdateInstancePortResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
}

UpdateInstancePortResponse::~UpdateInstancePortResponse() = default;

void UpdateInstancePortResponse::validate()
{
}

web::json::value UpdateInstancePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }

    return val;
}
bool UpdateInstancePortResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    return ok;
}


std::string UpdateInstancePortResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstancePortResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstancePortResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstancePortResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t UpdateInstancePortResponse::getPort() const
{
    return port_;
}

void UpdateInstancePortResponse::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool UpdateInstancePortResponse::portIsSet() const
{
    return portIsSet_;
}

void UpdateInstancePortResponse::unsetport()
{
    portIsSet_ = false;
}

}
}
}
}
}


