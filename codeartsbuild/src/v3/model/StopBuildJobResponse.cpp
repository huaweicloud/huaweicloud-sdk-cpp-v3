

#include "huaweicloud/codeartsbuild/v3/model/StopBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StopBuildJobResponse::StopBuildJobResponse()
{
    success_ = false;
    successIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

StopBuildJobResponse::~StopBuildJobResponse() = default;

void StopBuildJobResponse::validate()
{
}

web::json::value StopBuildJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool StopBuildJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool StopBuildJobResponse::isSuccess() const
{
    return success_;
}

void StopBuildJobResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool StopBuildJobResponse::successIsSet() const
{
    return successIsSet_;
}

void StopBuildJobResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string StopBuildJobResponse::getResult() const
{
    return result_;
}

void StopBuildJobResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StopBuildJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StopBuildJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


