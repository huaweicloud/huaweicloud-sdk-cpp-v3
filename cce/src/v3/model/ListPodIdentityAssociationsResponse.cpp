

#include "huaweicloud/cce/v3/model/ListPodIdentityAssociationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPodIdentityAssociationsResponse::ListPodIdentityAssociationsResponse()
{
    bodyIsSet_ = false;
}

ListPodIdentityAssociationsResponse::~ListPodIdentityAssociationsResponse() = default;

void ListPodIdentityAssociationsResponse::validate()
{
}

web::json::value ListPodIdentityAssociationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListPodIdentityAssociationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PodIdentityAssociationResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PodIdentityAssociationResp>& ListPodIdentityAssociationsResponse::getBody()
{
    return body_;
}

void ListPodIdentityAssociationsResponse::setBody(const std::vector<PodIdentityAssociationResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPodIdentityAssociationsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPodIdentityAssociationsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


