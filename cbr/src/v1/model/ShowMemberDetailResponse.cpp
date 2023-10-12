

#include "huaweicloud/cbr/v1/model/ShowMemberDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMemberDetailResponse::ShowMemberDetailResponse()
{
    memberIsSet_ = false;
}

ShowMemberDetailResponse::~ShowMemberDetailResponse() = default;

void ShowMemberDetailResponse::validate()
{
}

web::json::value ShowMemberDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIsSet_) {
        val[utility::conversions::to_string_t("member")] = ModelBase::toJson(member_);
    }

    return val;
}
bool ShowMemberDetailResponse::fromJson(const web::json::value& val)
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


Member ShowMemberDetailResponse::getMember() const
{
    return member_;
}

void ShowMemberDetailResponse::setMember(const Member& value)
{
    member_ = value;
    memberIsSet_ = true;
}

bool ShowMemberDetailResponse::memberIsSet() const
{
    return memberIsSet_;
}

void ShowMemberDetailResponse::unsetmember()
{
    memberIsSet_ = false;
}

}
}
}
}
}


