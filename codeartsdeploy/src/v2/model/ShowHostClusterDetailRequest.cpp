

#include "huaweicloud/codeartsdeploy/v2/model/ShowHostClusterDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowHostClusterDetailRequest::ShowHostClusterDetailRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

ShowHostClusterDetailRequest::~ShowHostClusterDetailRequest() = default;

void ShowHostClusterDetailRequest::validate()
{
}

web::json::value ShowHostClusterDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}

bool ShowHostClusterDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}

std::string ShowHostClusterDetailRequest::getGroupId() const
{
    return groupId_;
}

void ShowHostClusterDetailRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowHostClusterDetailRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowHostClusterDetailRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


