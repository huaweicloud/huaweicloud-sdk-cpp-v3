

#include "huaweicloud/functiongraph/v2/model/ListStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListStatisticsRequest::ListStatisticsRequest()
{
    filter_ = "";
    filterIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    option_ = "";
    optionIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListStatisticsRequest::~ListStatisticsRequest() = default;

void ListStatisticsRequest::validate()
{
}

web::json::value ListStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(optionIsSet_) {
        val[utility::conversions::to_string_t("option")] = ModelBase::toJson(option_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("option"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("option"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOption(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListStatisticsRequest::getFilter() const
{
    return filter_;
}

void ListStatisticsRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ListStatisticsRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ListStatisticsRequest::unsetfilter()
{
    filterIsSet_ = false;
}

std::string ListStatisticsRequest::getPeriod() const
{
    return period_;
}

void ListStatisticsRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ListStatisticsRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ListStatisticsRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ListStatisticsRequest::getOption() const
{
    return option_;
}

void ListStatisticsRequest::setOption(const std::string& value)
{
    option_ = value;
    optionIsSet_ = true;
}

bool ListStatisticsRequest::optionIsSet() const
{
    return optionIsSet_;
}

void ListStatisticsRequest::unsetoption()
{
    optionIsSet_ = false;
}

std::string ListStatisticsRequest::getLimit() const
{
    return limit_;
}

void ListStatisticsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListStatisticsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListStatisticsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListStatisticsRequest::getMarker() const
{
    return marker_;
}

void ListStatisticsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListStatisticsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListStatisticsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListStatisticsRequest::getContentType() const
{
    return contentType_;
}

void ListStatisticsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListStatisticsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListStatisticsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


