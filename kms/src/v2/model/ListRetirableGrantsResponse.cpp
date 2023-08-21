

#include "huaweicloud/kms/v2/model/ListRetirableGrantsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListRetirableGrantsResponse::ListRetirableGrantsResponse()
{
    grantsIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    truncated_ = "";
    truncatedIsSet_ = false;
}

ListRetirableGrantsResponse::~ListRetirableGrantsResponse() = default;

void ListRetirableGrantsResponse::validate()
{
}

web::json::value ListRetirableGrantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(truncatedIsSet_) {
        val[utility::conversions::to_string_t("truncated")] = ModelBase::toJson(truncated_);
    }

    return val;
}

bool ListRetirableGrantsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("grants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("grants"));
        if(!fieldValue.is_null())
        {
            std::vector<Grants> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGrants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("truncated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTruncated(refVal);
        }
    }
    return ok;
}

std::vector<Grants>& ListRetirableGrantsResponse::getGrants()
{
    return grants_;
}

void ListRetirableGrantsResponse::setGrants(const std::vector<Grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool ListRetirableGrantsResponse::grantsIsSet() const
{
    return grantsIsSet_;
}

void ListRetirableGrantsResponse::unsetgrants()
{
    grantsIsSet_ = false;
}

std::string ListRetirableGrantsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListRetirableGrantsResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListRetirableGrantsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListRetirableGrantsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

int32_t ListRetirableGrantsResponse::getTotal() const
{
    return total_;
}

void ListRetirableGrantsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRetirableGrantsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRetirableGrantsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListRetirableGrantsResponse::getTruncated() const
{
    return truncated_;
}

void ListRetirableGrantsResponse::setTruncated(const std::string& value)
{
    truncated_ = value;
    truncatedIsSet_ = true;
}

bool ListRetirableGrantsResponse::truncatedIsSet() const
{
    return truncatedIsSet_;
}

void ListRetirableGrantsResponse::unsettruncated()
{
    truncatedIsSet_ = false;
}

}
}
}
}
}


