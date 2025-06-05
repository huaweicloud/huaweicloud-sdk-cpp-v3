

#include "huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDefaultBuildParametersResponse::ShowDefaultBuildParametersResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDefaultBuildParametersResponse::~ShowDefaultBuildParametersResponse() = default;

void ShowDefaultBuildParametersResponse::validate()
{
}

web::json::value ShowDefaultBuildParametersResponse::toJson() const
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
bool ShowDefaultBuildParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowDefaultBuildParameters_result> refVal;
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


std::vector<ShowDefaultBuildParameters_result>& ShowDefaultBuildParametersResponse::getResult()
{
    return result_;
}

void ShowDefaultBuildParametersResponse::setResult(const std::vector<ShowDefaultBuildParameters_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDefaultBuildParametersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDefaultBuildParametersResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDefaultBuildParametersResponse::getStatus() const
{
    return status_;
}

void ShowDefaultBuildParametersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDefaultBuildParametersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDefaultBuildParametersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


