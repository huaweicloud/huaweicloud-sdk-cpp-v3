

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppGroupsResponse::CreateAppGroupsResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateAppGroupsResponse::~CreateAppGroupsResponse() = default;

void CreateAppGroupsResponse::validate()
{
}

web::json::value CreateAppGroupsResponse::toJson() const
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
bool CreateAppGroupsResponse::fromJson(const web::json::value& val)
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


std::string CreateAppGroupsResponse::getResult() const
{
    return result_;
}

void CreateAppGroupsResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateAppGroupsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateAppGroupsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CreateAppGroupsResponse::getStatus() const
{
    return status_;
}

void CreateAppGroupsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateAppGroupsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateAppGroupsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


