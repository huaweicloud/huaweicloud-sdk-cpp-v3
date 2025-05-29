

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildTime_result_chart.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildTime_result_chart::ShowJobBuildTime_result_chart()
{
    dailyBuildNumber_ = "";
    dailyBuildNumberIsSet_ = false;
    buildNumber_ = 0;
    buildNumberIsSet_ = false;
    buildTime_ = 0;
    buildTimeIsSet_ = false;
    buildResult_ = "";
    buildResultIsSet_ = false;
}

ShowJobBuildTime_result_chart::~ShowJobBuildTime_result_chart() = default;

void ShowJobBuildTime_result_chart::validate()
{
}

web::json::value ShowJobBuildTime_result_chart::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dailyBuildNumberIsSet_) {
        val[utility::conversions::to_string_t("daily_build_number")] = ModelBase::toJson(dailyBuildNumber_);
    }
    if(buildNumberIsSet_) {
        val[utility::conversions::to_string_t("build_number")] = ModelBase::toJson(buildNumber_);
    }
    if(buildTimeIsSet_) {
        val[utility::conversions::to_string_t("build_time")] = ModelBase::toJson(buildTime_);
    }
    if(buildResultIsSet_) {
        val[utility::conversions::to_string_t("build_result")] = ModelBase::toJson(buildResult_);
    }

    return val;
}
bool ShowJobBuildTime_result_chart::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("daily_build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daily_build_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildResult(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildTime_result_chart::getDailyBuildNumber() const
{
    return dailyBuildNumber_;
}

void ShowJobBuildTime_result_chart::setDailyBuildNumber(const std::string& value)
{
    dailyBuildNumber_ = value;
    dailyBuildNumberIsSet_ = true;
}

bool ShowJobBuildTime_result_chart::dailyBuildNumberIsSet() const
{
    return dailyBuildNumberIsSet_;
}

void ShowJobBuildTime_result_chart::unsetdailyBuildNumber()
{
    dailyBuildNumberIsSet_ = false;
}

int32_t ShowJobBuildTime_result_chart::getBuildNumber() const
{
    return buildNumber_;
}

void ShowJobBuildTime_result_chart::setBuildNumber(int32_t value)
{
    buildNumber_ = value;
    buildNumberIsSet_ = true;
}

bool ShowJobBuildTime_result_chart::buildNumberIsSet() const
{
    return buildNumberIsSet_;
}

void ShowJobBuildTime_result_chart::unsetbuildNumber()
{
    buildNumberIsSet_ = false;
}

int32_t ShowJobBuildTime_result_chart::getBuildTime() const
{
    return buildTime_;
}

void ShowJobBuildTime_result_chart::setBuildTime(int32_t value)
{
    buildTime_ = value;
    buildTimeIsSet_ = true;
}

bool ShowJobBuildTime_result_chart::buildTimeIsSet() const
{
    return buildTimeIsSet_;
}

void ShowJobBuildTime_result_chart::unsetbuildTime()
{
    buildTimeIsSet_ = false;
}

std::string ShowJobBuildTime_result_chart::getBuildResult() const
{
    return buildResult_;
}

void ShowJobBuildTime_result_chart::setBuildResult(const std::string& value)
{
    buildResult_ = value;
    buildResultIsSet_ = true;
}

bool ShowJobBuildTime_result_chart::buildResultIsSet() const
{
    return buildResultIsSet_;
}

void ShowJobBuildTime_result_chart::unsetbuildResult()
{
    buildResultIsSet_ = false;
}

}
}
}
}
}


