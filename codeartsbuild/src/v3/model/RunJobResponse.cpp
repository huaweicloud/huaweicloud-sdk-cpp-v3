

#include "huaweicloud/codeartsbuild/v3/model/RunJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RunJobResponse::RunJobResponse()
{
    octopusJobName_ = "";
    octopusJobNameIsSet_ = false;
    actualBuildNumber_ = "";
    actualBuildNumberIsSet_ = false;
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
}

RunJobResponse::~RunJobResponse() = default;

void RunJobResponse::validate()
{
}

web::json::value RunJobResponse::toJson() const
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
bool RunJobResponse::fromJson(const web::json::value& val)
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


std::string RunJobResponse::getOctopusJobName() const
{
    return octopusJobName_;
}

void RunJobResponse::setOctopusJobName(const std::string& value)
{
    octopusJobName_ = value;
    octopusJobNameIsSet_ = true;
}

bool RunJobResponse::octopusJobNameIsSet() const
{
    return octopusJobNameIsSet_;
}

void RunJobResponse::unsetoctopusJobName()
{
    octopusJobNameIsSet_ = false;
}

std::string RunJobResponse::getActualBuildNumber() const
{
    return actualBuildNumber_;
}

void RunJobResponse::setActualBuildNumber(const std::string& value)
{
    actualBuildNumber_ = value;
    actualBuildNumberIsSet_ = true;
}

bool RunJobResponse::actualBuildNumberIsSet() const
{
    return actualBuildNumberIsSet_;
}

void RunJobResponse::unsetactualBuildNumber()
{
    actualBuildNumberIsSet_ = false;
}

std::string RunJobResponse::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void RunJobResponse::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool RunJobResponse::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void RunJobResponse::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

}
}
}
}
}


