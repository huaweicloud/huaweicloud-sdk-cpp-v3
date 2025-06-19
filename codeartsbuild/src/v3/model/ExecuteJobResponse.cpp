

#include "huaweicloud/codeartsbuild/v3/model/ExecuteJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ExecuteJobResponse::ExecuteJobResponse()
{
    octopusJobName_ = "";
    octopusJobNameIsSet_ = false;
    actualBuildNumber_ = "";
    actualBuildNumberIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
}

ExecuteJobResponse::~ExecuteJobResponse() = default;

void ExecuteJobResponse::validate()
{
}

web::json::value ExecuteJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(octopusJobNameIsSet_) {
        val[utility::conversions::to_string_t("octopus_job_name")] = ModelBase::toJson(octopusJobName_);
    }
    if(actualBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("actual_build_number")] = ModelBase::toJson(actualBuildNumber_);
    }
    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }

    return val;
}
bool ExecuteJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("octopus_job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("octopus_job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOctopusJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    return ok;
}


std::string ExecuteJobResponse::getOctopusJobName() const
{
    return octopusJobName_;
}

void ExecuteJobResponse::setOctopusJobName(const std::string& value)
{
    octopusJobName_ = value;
    octopusJobNameIsSet_ = true;
}

bool ExecuteJobResponse::octopusJobNameIsSet() const
{
    return octopusJobNameIsSet_;
}

void ExecuteJobResponse::unsetoctopusJobName()
{
    octopusJobNameIsSet_ = false;
}

std::string ExecuteJobResponse::getActualBuildNumber() const
{
    return actualBuildNumber_;
}

void ExecuteJobResponse::setActualBuildNumber(const std::string& value)
{
    actualBuildNumber_ = value;
    actualBuildNumberIsSet_ = true;
}

bool ExecuteJobResponse::actualBuildNumberIsSet() const
{
    return actualBuildNumberIsSet_;
}

void ExecuteJobResponse::unsetactualBuildNumber()
{
    actualBuildNumberIsSet_ = false;
}

std::string ExecuteJobResponse::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void ExecuteJobResponse::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool ExecuteJobResponse::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void ExecuteJobResponse::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

}
}
}
}
}


