

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatioResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildSuccessRatioResponse::ShowJobBuildSuccessRatioResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobBuildSuccessRatioResponse::~ShowJobBuildSuccessRatioResponse() = default;

void ShowJobBuildSuccessRatioResponse::validate()
{
}

web::json::value ShowJobBuildSuccessRatioResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowJobBuildSuccessRatioResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowJobBuildSuccessRatio_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


ShowJobBuildSuccessRatio_result ShowJobBuildSuccessRatioResponse::getResult() const
{
    return result_;
}

void ShowJobBuildSuccessRatioResponse::setResult(const ShowJobBuildSuccessRatio_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobBuildSuccessRatioResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobBuildSuccessRatioResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobBuildSuccessRatioResponse::getStatus() const
{
    return status_;
}

void ShowJobBuildSuccessRatioResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobBuildSuccessRatioResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobBuildSuccessRatioResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


