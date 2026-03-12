

#include "huaweicloud/organizations/v1/model/ListDryRunPoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListDryRunPoliciesRequest::ListDryRunPoliciesRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    attachedEntityId_ = "";
    attachedEntityIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListDryRunPoliciesRequest::~ListDryRunPoliciesRequest() = default;

void ListDryRunPoliciesRequest::validate()
{
}

web::json::value ListDryRunPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(attachedEntityIdIsSet_) {
        val[utility::conversions::to_string_t("attached_entity_id")] = ModelBase::toJson(attachedEntityId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListDryRunPoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attached_entity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attached_entity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachedEntityId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListDryRunPoliciesRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListDryRunPoliciesRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListDryRunPoliciesRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListDryRunPoliciesRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListDryRunPoliciesRequest::getAttachedEntityId() const
{
    return attachedEntityId_;
}

void ListDryRunPoliciesRequest::setAttachedEntityId(const std::string& value)
{
    attachedEntityId_ = value;
    attachedEntityIdIsSet_ = true;
}

bool ListDryRunPoliciesRequest::attachedEntityIdIsSet() const
{
    return attachedEntityIdIsSet_;
}

void ListDryRunPoliciesRequest::unsetattachedEntityId()
{
    attachedEntityIdIsSet_ = false;
}

int32_t ListDryRunPoliciesRequest::getLimit() const
{
    return limit_;
}

void ListDryRunPoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDryRunPoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDryRunPoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDryRunPoliciesRequest::getMarker() const
{
    return marker_;
}

void ListDryRunPoliciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDryRunPoliciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDryRunPoliciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListDryRunPoliciesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListDryRunPoliciesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListDryRunPoliciesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListDryRunPoliciesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


