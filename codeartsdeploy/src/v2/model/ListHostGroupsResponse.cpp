

#include "huaweicloud/codeartsdeploy/v2/model/ListHostGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostGroupsResponse::ListHostGroupsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    hostGroupsIsSet_ = false;
}

ListHostGroupsResponse::~ListHostGroupsResponse() = default;

void ListHostGroupsResponse::validate()
{
}

web::json::value ListHostGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(hostGroupsIsSet_) {
        val[utility::conversions::to_string_t("host_groups")] = ModelBase::toJson(hostGroups_);
    }

    return val;
}
bool ListHostGroupsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<DeploymentGroupDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroups(refVal);
        }
    }
    return ok;
}


int32_t ListHostGroupsResponse::getTotal() const
{
    return total_;
}

void ListHostGroupsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostGroupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostGroupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DeploymentGroupDetail>& ListHostGroupsResponse::getHostGroups()
{
    return hostGroups_;
}

void ListHostGroupsResponse::setHostGroups(const std::vector<DeploymentGroupDetail>& value)
{
    hostGroups_ = value;
    hostGroupsIsSet_ = true;
}

bool ListHostGroupsResponse::hostGroupsIsSet() const
{
    return hostGroupsIsSet_;
}

void ListHostGroupsResponse::unsethostGroups()
{
    hostGroupsIsSet_ = false;
}

}
}
}
}
}


