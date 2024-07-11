

#include "huaweicloud/codeartsdeploy/v2/model/BatchDeleteHostsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




BatchDeleteHostsResponse::BatchDeleteHostsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

BatchDeleteHostsResponse::~BatchDeleteHostsResponse() = default;

void BatchDeleteHostsResponse::validate()
{
}

web::json::value BatchDeleteHostsResponse::toJson() const
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
bool BatchDeleteHostsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteHostsResponse::getStatus() const
{
    return status_;
}

void BatchDeleteHostsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeleteHostsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeleteHostsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& BatchDeleteHostsResponse::getResult()
{
    return result_;
}

void BatchDeleteHostsResponse::setResult(const std::vector<std::string>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeleteHostsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeleteHostsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


