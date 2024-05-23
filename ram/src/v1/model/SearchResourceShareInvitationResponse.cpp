

#include "huaweicloud/ram/v1/model/SearchResourceShareInvitationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareInvitationResponse::SearchResourceShareInvitationResponse()
{
    resourceShareInvitationsIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchResourceShareInvitationResponse::~SearchResourceShareInvitationResponse() = default;

void SearchResourceShareInvitationResponse::validate()
{
}

web::json::value SearchResourceShareInvitationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareInvitationsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitations")] = ModelBase::toJson(resourceShareInvitations_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchResourceShareInvitationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_invitations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_invitations"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceShareInvitation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareInvitations(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ResourceShareInvitation>& SearchResourceShareInvitationResponse::getResourceShareInvitations()
{
    return resourceShareInvitations_;
}

void SearchResourceShareInvitationResponse::setResourceShareInvitations(const std::vector<ResourceShareInvitation>& value)
{
    resourceShareInvitations_ = value;
    resourceShareInvitationsIsSet_ = true;
}

bool SearchResourceShareInvitationResponse::resourceShareInvitationsIsSet() const
{
    return resourceShareInvitationsIsSet_;
}

void SearchResourceShareInvitationResponse::unsetresourceShareInvitations()
{
    resourceShareInvitationsIsSet_ = false;
}

PageInfo SearchResourceShareInvitationResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchResourceShareInvitationResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchResourceShareInvitationResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchResourceShareInvitationResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


