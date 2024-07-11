

#include "huaweicloud/codeartsdeploy/v2/model/ListAssociateEnvironmentsInfosResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAssociateEnvironmentsInfosResponse::ListAssociateEnvironmentsInfosResponse()
{
    status_ = "";
    statusIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListAssociateEnvironmentsInfosResponse::~ListAssociateEnvironmentsInfosResponse() = default;

void ListAssociateEnvironmentsInfosResponse::validate()
{
}

web::json::value ListAssociateEnvironmentsInfosResponse::toJson() const
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
bool ListAssociateEnvironmentsInfosResponse::fromJson(const web::json::value& val)
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
            std::vector<EnvironmentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListAssociateEnvironmentsInfosResponse::getStatus() const
{
    return status_;
}

void ListAssociateEnvironmentsInfosResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAssociateEnvironmentsInfosResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListAssociateEnvironmentsInfosResponse::getTotal() const
{
    return total_;
}

void ListAssociateEnvironmentsInfosResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssociateEnvironmentsInfosResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EnvironmentInfo>& ListAssociateEnvironmentsInfosResponse::getResult()
{
    return result_;
}

void ListAssociateEnvironmentsInfosResponse::setResult(const std::vector<EnvironmentInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAssociateEnvironmentsInfosResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAssociateEnvironmentsInfosResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


