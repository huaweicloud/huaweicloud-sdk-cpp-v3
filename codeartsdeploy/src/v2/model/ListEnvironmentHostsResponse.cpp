

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentHostsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentHostsResponse::ListEnvironmentHostsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListEnvironmentHostsResponse::~ListEnvironmentHostsResponse() = default;

void ListEnvironmentHostsResponse::validate()
{
}

web::json::value ListEnvironmentHostsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListEnvironmentHostsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<EnvironmentHostInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListEnvironmentHostsResponse::getStatus() const
{
    return status_;
}

void ListEnvironmentHostsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEnvironmentHostsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListEnvironmentHostsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListEnvironmentHostsResponse::getTotal() const
{
    return total_;
}

void ListEnvironmentHostsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListEnvironmentHostsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListEnvironmentHostsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EnvironmentHostInfo>& ListEnvironmentHostsResponse::getResult()
{
    return result_;
}

void ListEnvironmentHostsResponse::setResult(const std::vector<EnvironmentHostInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListEnvironmentHostsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListEnvironmentHostsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


