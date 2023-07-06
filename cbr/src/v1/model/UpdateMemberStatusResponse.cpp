

#include "huaweicloud/cbr/v1/model/UpdateMemberStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateMemberStatusResponse::UpdateMemberStatusResponse()
{
    memberIsSet_ = false;
}

UpdateMemberStatusResponse::~UpdateMemberStatusResponse() = default;

void UpdateMemberStatusResponse::validate()
{
}

web::json::value UpdateMemberStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIsSet_) {
        val[utility::conversions::to_string_t("member")] = ModelBase::toJson(member_);
    }

    return val;
}

bool UpdateMemberStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member"));
        if(!fieldValue.is_null())
        {
            Member refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMember(refVal);
        }
    }
    return ok;
}

Member UpdateMemberStatusResponse::getMember() const
{
    return member_;
}

void UpdateMemberStatusResponse::setMember(const Member& value)
{
    member_ = value;
    memberIsSet_ = true;
}

bool UpdateMemberStatusResponse::memberIsSet() const
{
    return memberIsSet_;
}

void UpdateMemberStatusResponse::unsetmember()
{
    memberIsSet_ = false;
}

}
}
}
}
}


