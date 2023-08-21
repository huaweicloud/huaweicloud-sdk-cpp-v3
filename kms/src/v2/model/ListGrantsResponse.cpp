

#include "huaweicloud/kms/v2/model/ListGrantsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListGrantsResponse::ListGrantsResponse()
{
    grantsIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
    truncated_ = "";
    truncatedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListGrantsResponse::~ListGrantsResponse() = default;

void ListGrantsResponse::validate()
{
}

web::json::value ListGrantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(grantsIsSet_) {
        val[utility::conversions::to_string_t("grants")] = ModelBase::toJson(grants_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }
    if(truncatedIsSet_) {
        val[utility::conversions::to_string_t("truncated")] = ModelBase::toJson(truncated_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}

bool ListGrantsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("truncated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("truncated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTruncated(refVal);
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
    return ok;
}

std::vector<Grants>& ListGrantsResponse::getGrants()
{
    return grants_;
}

void ListGrantsResponse::setGrants(const std::vector<Grants>& value)
{
    grants_ = value;
    grantsIsSet_ = true;
}

bool ListGrantsResponse::grantsIsSet() const
{
    return grantsIsSet_;
}

void ListGrantsResponse::unsetgrants()
{
    grantsIsSet_ = false;
}

std::string ListGrantsResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListGrantsResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListGrantsResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListGrantsResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

std::string ListGrantsResponse::getTruncated() const
{
    return truncated_;
}

void ListGrantsResponse::setTruncated(const std::string& value)
{
    truncated_ = value;
    truncatedIsSet_ = true;
}

bool ListGrantsResponse::truncatedIsSet() const
{
    return truncatedIsSet_;
}

void ListGrantsResponse::unsettruncated()
{
    truncatedIsSet_ = false;
}

int32_t ListGrantsResponse::getTotal() const
{
    return total_;
}

void ListGrantsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListGrantsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListGrantsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


