

#include "huaweicloud/kms/v2/model/ListGrantsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListGrantsRequestBody::ListGrantsRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ListGrantsRequestBody::~ListGrantsRequestBody() = default;

void ListGrantsRequestBody::validate()
{
}

web::json::value ListGrantsRequestBody::toJson() const
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
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool ListGrantsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}

std::string ListGrantsRequestBody::getKeyId() const
{
    return keyId_;
}

void ListGrantsRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ListGrantsRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ListGrantsRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ListGrantsRequestBody::getLimit() const
{
    return limit_;
}

void ListGrantsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGrantsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListGrantsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGrantsRequestBody::getMarker() const
{
    return marker_;
}

void ListGrantsRequestBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGrantsRequestBody::markerIsSet() const
{
    return markerIsSet_;
}

void ListGrantsRequestBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListGrantsRequestBody::getSequence() const
{
    return sequence_;
}

void ListGrantsRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListGrantsRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListGrantsRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


