

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupBaseInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupBaseInfosResponse::ListHostGroupBaseInfosResponse()
{
    status_ = "";
    statusIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListHostGroupBaseInfosResponse::~ListHostGroupBaseInfosResponse() = default;

void ListHostGroupBaseInfosResponse::validate()
{
}

web::json::value ListHostGroupBaseInfosResponse::toJson() const
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
bool ListHostGroupBaseInfosResponse::fromJson(const web::json::value& val)
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
            std::vector<EnvironmentBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListHostGroupBaseInfosResponse::getStatus() const
{
    return status_;
}

void ListHostGroupBaseInfosResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListHostGroupBaseInfosResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListHostGroupBaseInfosResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListHostGroupBaseInfosResponse::getTotal() const
{
    return total_;
}

void ListHostGroupBaseInfosResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostGroupBaseInfosResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostGroupBaseInfosResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EnvironmentBaseInfo>& ListHostGroupBaseInfosResponse::getResult()
{
    return result_;
}

void ListHostGroupBaseInfosResponse::setResult(const std::vector<EnvironmentBaseInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListHostGroupBaseInfosResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListHostGroupBaseInfosResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


