

#include "huaweicloud/codeartsdeploy/v2/model/ListHostClustersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostClustersResponse::ListHostClustersResponse()
{
    status_ = "";
    statusIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListHostClustersResponse::~ListHostClustersResponse() = default;

void ListHostClustersResponse::validate()
{
}

web::json::value ListHostClustersResponse::toJson() const
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
bool ListHostClustersResponse::fromJson(const web::json::value& val)
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
            std::vector<HostClusterInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListHostClustersResponse::getStatus() const
{
    return status_;
}

void ListHostClustersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListHostClustersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListHostClustersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListHostClustersResponse::getTotal() const
{
    return total_;
}

void ListHostClustersResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostClustersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostClustersResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HostClusterInfo>& ListHostClustersResponse::getResult()
{
    return result_;
}

void ListHostClustersResponse::setResult(const std::vector<HostClusterInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListHostClustersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListHostClustersResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


