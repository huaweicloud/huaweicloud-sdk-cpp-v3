

#include "huaweicloud/lts/v2/model/CreateDashBoardReqBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashBoardReqBody::CreateDashBoardReqBody()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

CreateDashBoardReqBody::~CreateDashBoardReqBody() = default;

void CreateDashBoardReqBody::validate()
{
}

web::json::value CreateDashBoardReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}

bool CreateDashBoardReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    return ok;
}

std::string CreateDashBoardReqBody::getGroupName() const
{
    return groupName_;
}

void CreateDashBoardReqBody::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool CreateDashBoardReqBody::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void CreateDashBoardReqBody::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string CreateDashBoardReqBody::getTitle() const
{
    return title_;
}

void CreateDashBoardReqBody::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateDashBoardReqBody::titleIsSet() const
{
    return titleIsSet_;
}

void CreateDashBoardReqBody::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


