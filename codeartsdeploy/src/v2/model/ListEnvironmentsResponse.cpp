

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentsResponse::ListEnvironmentsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListEnvironmentsResponse::~ListEnvironmentsResponse() = default;

void ListEnvironmentsResponse::validate()
{
}

web::json::value ListEnvironmentsResponse::toJson() const
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
bool ListEnvironmentsResponse::fromJson(const web::json::value& val)
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
            std::vector<EnvironmentDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListEnvironmentsResponse::getStatus() const
{
    return status_;
}

void ListEnvironmentsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListEnvironmentsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListEnvironmentsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListEnvironmentsResponse::getTotal() const
{
    return total_;
}

void ListEnvironmentsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListEnvironmentsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListEnvironmentsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<EnvironmentDetail>& ListEnvironmentsResponse::getResult()
{
    return result_;
}

void ListEnvironmentsResponse::setResult(const std::vector<EnvironmentDetail>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListEnvironmentsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListEnvironmentsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


