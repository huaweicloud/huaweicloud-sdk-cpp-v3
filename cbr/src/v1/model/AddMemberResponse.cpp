

#include "huaweicloud/cbr/v1/model/AddMemberResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddMemberResponse::AddMemberResponse()
{
    membersIsSet_ = false;
}

AddMemberResponse::~AddMemberResponse() = default;

void AddMemberResponse::validate()
{
}

web::json::value AddMemberResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }

    return val;
}
bool AddMemberResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<Member> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
        }
    }
    return ok;
}


std::vector<Member>& AddMemberResponse::getMembers()
{
    return members_;
}

void AddMemberResponse::setMembers(const std::vector<Member>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool AddMemberResponse::membersIsSet() const
{
    return membersIsSet_;
}

void AddMemberResponse::unsetmembers()
{
    membersIsSet_ = false;
}

}
}
}
}
}


