

#include "huaweicloud/ram/v1/model/SearchResourceShareInvitationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareInvitationRequest::SearchResourceShareInvitationRequest()
{
    bodyIsSet_ = false;
}

SearchResourceShareInvitationRequest::~SearchResourceShareInvitationRequest() = default;

void SearchResourceShareInvitationRequest::validate()
{
}

web::json::value SearchResourceShareInvitationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchResourceShareInvitationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchResourceShareInvitationReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SearchResourceShareInvitationReqBody SearchResourceShareInvitationRequest::getBody() const
{
    return body_;
}

void SearchResourceShareInvitationRequest::setBody(const SearchResourceShareInvitationReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchResourceShareInvitationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchResourceShareInvitationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


