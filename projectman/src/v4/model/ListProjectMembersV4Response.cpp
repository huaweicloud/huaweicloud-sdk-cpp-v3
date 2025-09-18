

#include "huaweicloud/projectman/v4/model/ListProjectMembersV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectMembersV4Response::ListProjectMembersV4Response()
{
    membersIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListProjectMembersV4Response::~ListProjectMembersV4Response() = default;

void ListProjectMembersV4Response::validate()
{
}

web::json::value ListProjectMembersV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectMembersV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<MemberListV4_members> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
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
    return ok;
}


std::vector<MemberListV4_members>& ListProjectMembersV4Response::getMembers()
{
    return members_;
}

void ListProjectMembersV4Response::setMembers(const std::vector<MemberListV4_members>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool ListProjectMembersV4Response::membersIsSet() const
{
    return membersIsSet_;
}

void ListProjectMembersV4Response::unsetmembers()
{
    membersIsSet_ = false;
}

int32_t ListProjectMembersV4Response::getTotal() const
{
    return total_;
}

void ListProjectMembersV4Response::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectMembersV4Response::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectMembersV4Response::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


