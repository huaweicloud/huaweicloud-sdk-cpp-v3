

#include "huaweicloud/codeartsdeploy/v2/model/CheckIsDuplicateAppNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckIsDuplicateAppNameResponse::CheckIsDuplicateAppNameResponse()
{
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckIsDuplicateAppNameResponse::~CheckIsDuplicateAppNameResponse() = default;

void CheckIsDuplicateAppNameResponse::validate()
{
}

web::json::value CheckIsDuplicateAppNameResponse::toJson() const
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
bool CheckIsDuplicateAppNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
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


bool CheckIsDuplicateAppNameResponse::isResult() const
{
    return result_;
}

void CheckIsDuplicateAppNameResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckIsDuplicateAppNameResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckIsDuplicateAppNameResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CheckIsDuplicateAppNameResponse::getStatus() const
{
    return status_;
}

void CheckIsDuplicateAppNameResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckIsDuplicateAppNameResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckIsDuplicateAppNameResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


