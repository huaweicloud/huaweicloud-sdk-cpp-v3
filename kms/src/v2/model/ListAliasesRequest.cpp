

#include "huaweicloud/kms/v2/model/ListAliasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAliasesRequest::ListAliasesRequest()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListAliasesRequest::~ListAliasesRequest() = default;

void ListAliasesRequest::validate()
{
}

web::json::value ListAliasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListAliasesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string ListAliasesRequest::getKeyId() const
{
    return keyId_;
}

void ListAliasesRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ListAliasesRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ListAliasesRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ListAliasesRequest::getLimit() const
{
    return limit_;
}

void ListAliasesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAliasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAliasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAliasesRequest::getMarker() const
{
    return marker_;
}

void ListAliasesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAliasesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAliasesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


