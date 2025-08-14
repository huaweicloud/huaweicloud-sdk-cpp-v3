

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupsRequestBody::DescribeGroupsRequestBody()
{
    groupIdsIsSet_ = false;
}

DescribeGroupsRequestBody::~DescribeGroupsRequestBody() = default;

void DescribeGroupsRequestBody::validate()
{
}

web::json::value DescribeGroupsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdsIsSet_) {
        val[utility::conversions::to_string_t("group_ids")] = ModelBase::toJson(groupIds_);
    }

    return val;
}
bool DescribeGroupsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DescribeGroupsRequestBody::getGroupIds()
{
    return groupIds_;
}

void DescribeGroupsRequestBody::setGroupIds(const std::vector<std::string>& value)
{
    groupIds_ = value;
    groupIdsIsSet_ = true;
}

bool DescribeGroupsRequestBody::groupIdsIsSet() const
{
    return groupIdsIsSet_;
}

void DescribeGroupsRequestBody::unsetgroupIds()
{
    groupIdsIsSet_ = false;
}

}
}
}
}
}


