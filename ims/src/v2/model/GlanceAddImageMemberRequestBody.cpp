

#include "huaweicloud/ims/v2/model/GlanceAddImageMemberRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceAddImageMemberRequestBody::GlanceAddImageMemberRequestBody()
{
    member_ = "";
    memberIsSet_ = false;
}

GlanceAddImageMemberRequestBody::~GlanceAddImageMemberRequestBody() = default;

void GlanceAddImageMemberRequestBody::validate()
{
}

web::json::value GlanceAddImageMemberRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIsSet_) {
        val[utility::conversions::to_string_t("member")] = ModelBase::toJson(member_);
    }

    return val;
}
bool GlanceAddImageMemberRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMember(refVal);
        }
    }
    return ok;
}


std::string GlanceAddImageMemberRequestBody::getMember() const
{
    return member_;
}

void GlanceAddImageMemberRequestBody::setMember(const std::string& value)
{
    member_ = value;
    memberIsSet_ = true;
}

bool GlanceAddImageMemberRequestBody::memberIsSet() const
{
    return memberIsSet_;
}

void GlanceAddImageMemberRequestBody::unsetmember()
{
    memberIsSet_ = false;
}

}
}
}
}
}


