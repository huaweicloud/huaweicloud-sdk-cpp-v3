

#include "huaweicloud/codeartsbuild/v3/model/ShowJobConfigDiffResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobConfigDiffResponse::ShowJobConfigDiffResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobConfigDiffResponse::~ShowJobConfigDiffResponse() = default;

void ShowJobConfigDiffResponse::validate()
{
}

web::json::value ShowJobConfigDiffResponse::toJson() const
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
bool ShowJobConfigDiffResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ShowJobConfigDiffResponse::getResult() const
{
    return result_;
}

void ShowJobConfigDiffResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobConfigDiffResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobConfigDiffResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobConfigDiffResponse::getStatus() const
{
    return status_;
}

void ShowJobConfigDiffResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobConfigDiffResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobConfigDiffResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


