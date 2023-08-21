

#include "huaweicloud/kms/v2/model/ListRetirableGrantsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListRetirableGrantsRequestBody::ListRetirableGrantsRequestBody()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ListRetirableGrantsRequestBody::~ListRetirableGrantsRequestBody() = default;

void ListRetirableGrantsRequestBody::validate()
{
}

web::json::value ListRetirableGrantsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool ListRetirableGrantsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string ListRetirableGrantsRequestBody::getLimit() const
{
    return limit_;
}

void ListRetirableGrantsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRetirableGrantsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListRetirableGrantsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRetirableGrantsRequestBody::getMarker() const
{
    return marker_;
}

void ListRetirableGrantsRequestBody::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListRetirableGrantsRequestBody::markerIsSet() const
{
    return markerIsSet_;
}

void ListRetirableGrantsRequestBody::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListRetirableGrantsRequestBody::getSequence() const
{
    return sequence_;
}

void ListRetirableGrantsRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListRetirableGrantsRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListRetirableGrantsRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


