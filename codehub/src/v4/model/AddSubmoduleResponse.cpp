

#include "huaweicloud/codehub/v4/model/AddSubmoduleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddSubmoduleResponse::AddSubmoduleResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddSubmoduleResponse::~AddSubmoduleResponse() = default;

void AddSubmoduleResponse::validate()
{
}

web::json::value AddSubmoduleResponse::toJson() const
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
bool AddSubmoduleResponse::fromJson(const web::json::value& val)
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


std::string AddSubmoduleResponse::getResult() const
{
    return result_;
}

void AddSubmoduleResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddSubmoduleResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddSubmoduleResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddSubmoduleResponse::getStatus() const
{
    return status_;
}

void AddSubmoduleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddSubmoduleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddSubmoduleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


