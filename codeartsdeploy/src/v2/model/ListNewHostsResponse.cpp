

#include "huaweicloud/codeartsdeploy/v2/model/ListNewHostsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListNewHostsResponse::ListNewHostsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListNewHostsResponse::~ListNewHostsResponse() = default;

void ListNewHostsResponse::validate()
{
}

web::json::value ListNewHostsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListNewHostsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<HostInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ListNewHostsResponse::getTotal() const
{
    return total_;
}

void ListNewHostsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListNewHostsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListNewHostsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListNewHostsResponse::getStatus() const
{
    return status_;
}

void ListNewHostsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListNewHostsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListNewHostsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<HostInfo>& ListNewHostsResponse::getResult()
{
    return result_;
}

void ListNewHostsResponse::setResult(const std::vector<HostInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListNewHostsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListNewHostsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


