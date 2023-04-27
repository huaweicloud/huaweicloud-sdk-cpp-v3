

#include "huaweicloud/lts/v2/model/CreateDashboardGroupReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashboardGroupReq::CreateDashboardGroupReq()
{
    groupName_ = "";
    groupNameIsSet_ = false;
}

CreateDashboardGroupReq::~CreateDashboardGroupReq() = default;

void CreateDashboardGroupReq::validate()
{
}

web::json::value CreateDashboardGroupReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }

    return val;
}

bool CreateDashboardGroupReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    return ok;
}


std::string CreateDashboardGroupReq::getGroupName() const
{
    return groupName_;
}

void CreateDashboardGroupReq::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool CreateDashboardGroupReq::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void CreateDashboardGroupReq::unsetgroupName()
{
    groupNameIsSet_ = false;
}

}
}
}
}
}


