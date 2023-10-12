

#include "huaweicloud/dds/v3/model/SwitchSslResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SwitchSslResponse::SwitchSslResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    sslOption_ = "";
    sslOptionIsSet_ = false;
}

SwitchSslResponse::~SwitchSslResponse() = default;

void SwitchSslResponse::validate()
{
}

web::json::value SwitchSslResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(sslOptionIsSet_) {
        val[utility::conversions::to_string_t("ssl_option")] = ModelBase::toJson(sslOption_);
    }

    return val;
}
bool SwitchSslResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ssl_option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ssl_option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSslOption(refVal);
        }
    }
    return ok;
}


std::string SwitchSslResponse::getJobId() const
{
    return jobId_;
}

void SwitchSslResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchSslResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchSslResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SwitchSslResponse::getSslOption() const
{
    return sslOption_;
}

void SwitchSslResponse::setSslOption(const std::string& value)
{
    sslOption_ = value;
    sslOptionIsSet_ = true;
}

bool SwitchSslResponse::sslOptionIsSet() const
{
    return sslOptionIsSet_;
}

void SwitchSslResponse::unsetsslOption()
{
    sslOptionIsSet_ = false;
}

}
}
}
}
}


