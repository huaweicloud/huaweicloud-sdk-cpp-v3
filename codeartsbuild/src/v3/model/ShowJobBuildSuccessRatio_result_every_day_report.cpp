

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatio_result_every_day_report.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildSuccessRatio_result_every_day_report::ShowJobBuildSuccessRatio_result_every_day_report()
{
    date_ = "";
    dateIsSet_ = false;
    successRatio_ = 0;
    successRatioIsSet_ = false;
}

ShowJobBuildSuccessRatio_result_every_day_report::~ShowJobBuildSuccessRatio_result_every_day_report() = default;

void ShowJobBuildSuccessRatio_result_every_day_report::validate()
{
}

web::json::value ShowJobBuildSuccessRatio_result_every_day_report::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(successRatioIsSet_) {
        val[utility::conversions::to_string_t("success_ratio")] = ModelBase::toJson(successRatio_);
    }

    return val;
}
bool ShowJobBuildSuccessRatio_result_every_day_report::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_ratio"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRatio(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildSuccessRatio_result_every_day_report::getDate() const
{
    return date_;
}

void ShowJobBuildSuccessRatio_result_every_day_report::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result_every_day_report::dateIsSet() const
{
    return dateIsSet_;
}

void ShowJobBuildSuccessRatio_result_every_day_report::unsetdate()
{
    dateIsSet_ = false;
}

int32_t ShowJobBuildSuccessRatio_result_every_day_report::getSuccessRatio() const
{
    return successRatio_;
}

void ShowJobBuildSuccessRatio_result_every_day_report::setSuccessRatio(int32_t value)
{
    successRatio_ = value;
    successRatioIsSet_ = true;
}

bool ShowJobBuildSuccessRatio_result_every_day_report::successRatioIsSet() const
{
    return successRatioIsSet_;
}

void ShowJobBuildSuccessRatio_result_every_day_report::unsetsuccessRatio()
{
    successRatioIsSet_ = false;
}

}
}
}
}
}


