

#include "huaweicloud/codeartsdeploy/v2/model/ShowHostClusterDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowHostClusterDetailResponse::ShowHostClusterDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ShowHostClusterDetailResponse::~ShowHostClusterDetailResponse() = default;

void ShowHostClusterDetailResponse::validate()
{
}

web::json::value ShowHostClusterDetailResponse::toJson() const
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
bool ShowHostClusterDetailResponse::fromJson(const web::json::value& val)
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
            HostClusterInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowHostClusterDetailResponse::getStatus() const
{
    return status_;
}

void ShowHostClusterDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHostClusterDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHostClusterDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

HostClusterInfoDetail ShowHostClusterDetailResponse::getResult() const
{
    return result_;
}

void ShowHostClusterDetailResponse::setResult(const HostClusterInfoDetail& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowHostClusterDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowHostClusterDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


