

#include "huaweicloud/codeartsdeploy/v2/model/ImportHostToEnvironmentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ImportHostToEnvironmentResponse::ImportHostToEnvironmentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ImportHostToEnvironmentResponse::~ImportHostToEnvironmentResponse() = default;

void ImportHostToEnvironmentResponse::validate()
{
}

web::json::value ImportHostToEnvironmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}

bool ImportHostToEnvironmentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}

std::string ImportHostToEnvironmentResponse::getStatus() const
{
    return status_;
}

void ImportHostToEnvironmentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ImportHostToEnvironmentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ImportHostToEnvironmentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ImportHostToEnvironmentResponse::getResult()
{
    return result_;
}

void ImportHostToEnvironmentResponse::setResult(const std::vector<std::string>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ImportHostToEnvironmentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ImportHostToEnvironmentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


