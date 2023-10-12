

#include "huaweicloud/dds/v3/model/ShowConnectionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConnectionStatisticsResponse::ShowConnectionStatisticsResponse()
{
    totalConnections_ = 0;
    totalConnectionsIsSet_ = false;
    totalInnerConnections_ = 0;
    totalInnerConnectionsIsSet_ = false;
    totalOuterConnections_ = 0;
    totalOuterConnectionsIsSet_ = false;
    innerConnectionsIsSet_ = false;
    outerConnectionsIsSet_ = false;
}

ShowConnectionStatisticsResponse::~ShowConnectionStatisticsResponse() = default;

void ShowConnectionStatisticsResponse::validate()
{
}

web::json::value ShowConnectionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalConnectionsIsSet_) {
        val[utility::conversions::to_string_t("total_connections")] = ModelBase::toJson(totalConnections_);
    }
    if(totalInnerConnectionsIsSet_) {
        val[utility::conversions::to_string_t("total_inner_connections")] = ModelBase::toJson(totalInnerConnections_);
    }
    if(totalOuterConnectionsIsSet_) {
        val[utility::conversions::to_string_t("total_outer_connections")] = ModelBase::toJson(totalOuterConnections_);
    }
    if(innerConnectionsIsSet_) {
        val[utility::conversions::to_string_t("inner_connections")] = ModelBase::toJson(innerConnections_);
    }
    if(outerConnectionsIsSet_) {
        val[utility::conversions::to_string_t("outer_connections")] = ModelBase::toJson(outerConnections_);
    }

    return val;
}
bool ShowConnectionStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_connections"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_inner_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_inner_connections"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalInnerConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_outer_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_outer_connections"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalOuterConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inner_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inner_connections"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryConnectionsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInnerConnections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outer_connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outer_connections"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryConnectionsResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOuterConnections(refVal);
        }
    }
    return ok;
}


int32_t ShowConnectionStatisticsResponse::getTotalConnections() const
{
    return totalConnections_;
}

void ShowConnectionStatisticsResponse::setTotalConnections(int32_t value)
{
    totalConnections_ = value;
    totalConnectionsIsSet_ = true;
}

bool ShowConnectionStatisticsResponse::totalConnectionsIsSet() const
{
    return totalConnectionsIsSet_;
}

void ShowConnectionStatisticsResponse::unsettotalConnections()
{
    totalConnectionsIsSet_ = false;
}

int32_t ShowConnectionStatisticsResponse::getTotalInnerConnections() const
{
    return totalInnerConnections_;
}

void ShowConnectionStatisticsResponse::setTotalInnerConnections(int32_t value)
{
    totalInnerConnections_ = value;
    totalInnerConnectionsIsSet_ = true;
}

bool ShowConnectionStatisticsResponse::totalInnerConnectionsIsSet() const
{
    return totalInnerConnectionsIsSet_;
}

void ShowConnectionStatisticsResponse::unsettotalInnerConnections()
{
    totalInnerConnectionsIsSet_ = false;
}

int32_t ShowConnectionStatisticsResponse::getTotalOuterConnections() const
{
    return totalOuterConnections_;
}

void ShowConnectionStatisticsResponse::setTotalOuterConnections(int32_t value)
{
    totalOuterConnections_ = value;
    totalOuterConnectionsIsSet_ = true;
}

bool ShowConnectionStatisticsResponse::totalOuterConnectionsIsSet() const
{
    return totalOuterConnectionsIsSet_;
}

void ShowConnectionStatisticsResponse::unsettotalOuterConnections()
{
    totalOuterConnectionsIsSet_ = false;
}

std::vector<QueryConnectionsResponse>& ShowConnectionStatisticsResponse::getInnerConnections()
{
    return innerConnections_;
}

void ShowConnectionStatisticsResponse::setInnerConnections(const std::vector<QueryConnectionsResponse>& value)
{
    innerConnections_ = value;
    innerConnectionsIsSet_ = true;
}

bool ShowConnectionStatisticsResponse::innerConnectionsIsSet() const
{
    return innerConnectionsIsSet_;
}

void ShowConnectionStatisticsResponse::unsetinnerConnections()
{
    innerConnectionsIsSet_ = false;
}

std::vector<QueryConnectionsResponse>& ShowConnectionStatisticsResponse::getOuterConnections()
{
    return outerConnections_;
}

void ShowConnectionStatisticsResponse::setOuterConnections(const std::vector<QueryConnectionsResponse>& value)
{
    outerConnections_ = value;
    outerConnectionsIsSet_ = true;
}

bool ShowConnectionStatisticsResponse::outerConnectionsIsSet() const
{
    return outerConnectionsIsSet_;
}

void ShowConnectionStatisticsResponse::unsetouterConnections()
{
    outerConnectionsIsSet_ = false;
}

}
}
}
}
}


