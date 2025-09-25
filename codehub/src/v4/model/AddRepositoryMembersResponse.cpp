

#include "huaweicloud/codehub/v4/model/AddRepositoryMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddRepositoryMembersResponse::AddRepositoryMembersResponse()
{
    bodyIsSet_ = false;
}

AddRepositoryMembersResponse::~AddRepositoryMembersResponse() = default;

void AddRepositoryMembersResponse::validate()
{
}

web::json::value AddRepositoryMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddRepositoryMembersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchCreateRepositoryMemberDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<BatchCreateRepositoryMemberDto>& AddRepositoryMembersResponse::getBody()
{
    return body_;
}

void AddRepositoryMembersResponse::setBody(const std::vector<BatchCreateRepositoryMemberDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddRepositoryMembersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddRepositoryMembersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


