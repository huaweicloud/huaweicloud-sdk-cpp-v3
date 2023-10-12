

#include "huaweicloud/codeartsdeploy/v2/model/ListHostsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostsResponse::ListHostsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    hostsIsSet_ = false;
}

ListHostsResponse::~ListHostsResponse() = default;

void ListHostsResponse::validate()
{
}

web::json::value ListHostsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool ListHostsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<DeploymentHostDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


int32_t ListHostsResponse::getTotal() const
{
    return total_;
}

void ListHostsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHostsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHostsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListHostsResponse::getGroupName() const
{
    return groupName_;
}

void ListHostsResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListHostsResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListHostsResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<DeploymentHostDetail>& ListHostsResponse::getHosts()
{
    return hosts_;
}

void ListHostsResponse::setHosts(const std::vector<DeploymentHostDetail>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool ListHostsResponse::hostsIsSet() const
{
    return hostsIsSet_;
}

void ListHostsResponse::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


