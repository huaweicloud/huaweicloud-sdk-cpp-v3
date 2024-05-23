

#include "huaweicloud/ram/v1/model/SearchResourceShareInvitationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareInvitationReqBody::SearchResourceShareInvitationReqBody()
{
    resourceShareIdsIsSet_ = false;
    resourceShareInvitationIdsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

SearchResourceShareInvitationReqBody::~SearchResourceShareInvitationReqBody() = default;

void SearchResourceShareInvitationReqBody::validate()
{
}

web::json::value SearchResourceShareInvitationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_ids")] = ModelBase::toJson(resourceShareIds_);
    }
    if(resourceShareInvitationIdsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_invitation_ids")] = ModelBase::toJson(resourceShareInvitationIds_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool SearchResourceShareInvitationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_share_invitation_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_invitation_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareInvitationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SearchResourceShareInvitationReqBody::getResourceShareIds()
{
    return resourceShareIds_;
}

void SearchResourceShareInvitationReqBody::setResourceShareIds(const std::vector<std::string>& value)
{
    resourceShareIds_ = value;
    resourceShareIdsIsSet_ = true;
}

bool SearchResourceShareInvitationReqBody::resourceShareIdsIsSet() const
{
    return resourceShareIdsIsSet_;
}

void SearchResourceShareInvitationReqBody::unsetresourceShareIds()
{
    resourceShareIdsIsSet_ = false;
}

std::vector<std::string>& SearchResourceShareInvitationReqBody::getResourceShareInvitationIds()
{
    return resourceShareInvitationIds_;
}

void SearchResourceShareInvitationReqBody::setResourceShareInvitationIds(const std::vector<std::string>& value)
{
    resourceShareInvitationIds_ = value;
    resourceShareInvitationIdsIsSet_ = true;
}

bool SearchResourceShareInvitationReqBody::resourceShareInvitationIdsIsSet() const
{
    return resourceShareInvitationIdsIsSet_;
}

void SearchResourceShareInvitationReqBody::unsetresourceShareInvitationIds()
{
    resourceShareInvitationIdsIsSet_ = false;
}

std::string SearchResourceShareInvitationReqBody::getStatus() const
{
    return status_;
}

void SearchResourceShareInvitationReqBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchResourceShareInvitationReqBody::statusIsSet() const
{
    return statusIsSet_;
}

void SearchResourceShareInvitationReqBody::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t SearchResourceShareInvitationReqBody::getLimit() const
{
    return limit_;
}

void SearchResourceShareInvitationReqBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchResourceShareInvitationReqBody::limitIsSet() const
{
    return limitIsSet_;
}

void SearchResourceShareInvitationReqBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchResourceShareInvitationReqBody::getMarker() const
{
    return marker_;
}

void SearchResourceShareInvitationReqBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool SearchResourceShareInvitationReqBody::markerIsSet() const
{
    return markerIsSet_;
}

void SearchResourceShareInvitationReqBody::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


