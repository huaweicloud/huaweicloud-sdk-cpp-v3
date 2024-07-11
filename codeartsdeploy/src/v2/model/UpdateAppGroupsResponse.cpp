

#include "huaweicloud/codeartsdeploy/v2/model/UpdateAppGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




UpdateAppGroupsResponse::UpdateAppGroupsResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateAppGroupsResponse::~UpdateAppGroupsResponse() = default;

void UpdateAppGroupsResponse::validate()
{
}

web::json::value UpdateAppGroupsResponse::toJson() const
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
bool UpdateAppGroupsResponse::fromJson(const web::json::value& val)
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


std::string UpdateAppGroupsResponse::getResult() const
{
    return result_;
}

void UpdateAppGroupsResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateAppGroupsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateAppGroupsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateAppGroupsResponse::getStatus() const
{
    return status_;
}

void UpdateAppGroupsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAppGroupsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAppGroupsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


