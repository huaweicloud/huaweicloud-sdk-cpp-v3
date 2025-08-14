

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupsResponse::DescribeGroupsResponse()
{
    groupsIsSet_ = false;
}

DescribeGroupsResponse::~DescribeGroupsResponse() = default;

void DescribeGroupsResponse::validate()
{
}

web::json::value DescribeGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }

    return val;
}
bool DescribeGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<DescribeGroupResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    return ok;
}


std::vector<DescribeGroupResp>& DescribeGroupsResponse::getGroups()
{
    return groups_;
}

void DescribeGroupsResponse::setGroups(const std::vector<DescribeGroupResp>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool DescribeGroupsResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void DescribeGroupsResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

}
}
}
}
}


