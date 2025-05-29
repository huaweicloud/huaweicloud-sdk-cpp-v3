

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildTimeResponse::ShowJobBuildTimeResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobBuildTimeResponse::~ShowJobBuildTimeResponse() = default;

void ShowJobBuildTimeResponse::validate()
{
}

web::json::value ShowJobBuildTimeResponse::toJson() const
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
bool ShowJobBuildTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ShowJobBuildTime_result refVal;
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


ShowJobBuildTime_result ShowJobBuildTimeResponse::getResult() const
{
    return result_;
}

void ShowJobBuildTimeResponse::setResult(const ShowJobBuildTime_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobBuildTimeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobBuildTimeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobBuildTimeResponse::getStatus() const
{
    return status_;
}

void ShowJobBuildTimeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobBuildTimeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobBuildTimeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


