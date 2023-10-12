

#include "huaweicloud/codeartsdeploy/v2/model/ShowAppDetailByIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowAppDetailByIdResponse::ShowAppDetailByIdResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowAppDetailByIdResponse::~ShowAppDetailByIdResponse() = default;

void ShowAppDetailByIdResponse::validate()
{
}

web::json::value ShowAppDetailByIdResponse::toJson() const
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
bool ShowAppDetailByIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AppDetailInfo refVal;
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


AppDetailInfo ShowAppDetailByIdResponse::getResult() const
{
    return result_;
}

void ShowAppDetailByIdResponse::setResult(const AppDetailInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAppDetailByIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAppDetailByIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowAppDetailByIdResponse::getStatus() const
{
    return status_;
}

void ShowAppDetailByIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAppDetailByIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAppDetailByIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


