

#include "huaweicloud/organizations/v1/model/ListPoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListPoliciesRequest::ListPoliciesRequest()
{
    attachedEntityId_ = "";
    attachedEntityIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListPoliciesRequest::~ListPoliciesRequest() = default;

void ListPoliciesRequest::validate()
{
}

web::json::value ListPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ListPoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListPoliciesRequest::getAttachedEntityId() const
{
    return attachedEntityId_;
}

void ListPoliciesRequest::setAttachedEntityId(const std::string& value)
{
    attachedEntityId_ = value;
    attachedEntityIdIsSet_ = true;
}

bool ListPoliciesRequest::attachedEntityIdIsSet() const
{
    return attachedEntityIdIsSet_;
}

void ListPoliciesRequest::unsetattachedEntityId()
{
    attachedEntityIdIsSet_ = false;
}

int32_t ListPoliciesRequest::getLimit() const
{
    return limit_;
}

void ListPoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPoliciesRequest::getMarker() const
{
    return marker_;
}

void ListPoliciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPoliciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPoliciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListPoliciesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPoliciesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPoliciesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPoliciesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


