

#include "huaweicloud/codeartsdeploy/v2/model/DeleteHostClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteHostClusterRequest::DeleteHostClusterRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteHostClusterRequest::~DeleteHostClusterRequest() = default;

void DeleteHostClusterRequest::validate()
{
}

web::json::value DeleteHostClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool DeleteHostClusterRequest::fromJson(const web::json::value& val)
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


std::string DeleteHostClusterRequest::getGroupId() const
{
    return groupId_;
}

void DeleteHostClusterRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteHostClusterRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteHostClusterRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


