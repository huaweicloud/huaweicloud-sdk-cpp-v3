

#include "huaweicloud/cpcs/v1/model/ShowResourceDetailAccessKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowResourceDetailAccessKeyResponse::ShowResourceDetailAccessKeyResponse()
{
    metricName_ = "";
    metricNameIsSet_ = false;
    akListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowResourceDetailAccessKeyResponse::~ShowResourceDetailAccessKeyResponse() = default;

void ShowResourceDetailAccessKeyResponse::validate()
{
}

web::json::value ShowResourceDetailAccessKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metricNameIsSet_) {
        val[utility::conversions::to_string_t("metric_name")] = ModelBase::toJson(metricName_);
    }
    if(akListIsSet_) {
        val[utility::conversions::to_string_t("ak_list")] = ModelBase::toJson(akList_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowResourceDetailAccessKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metric_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ak_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ak_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAkList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string ShowResourceDetailAccessKeyResponse::getMetricName() const
{
    return metricName_;
}

void ShowResourceDetailAccessKeyResponse::setMetricName(const std::string& value)
{
    metricName_ = value;
    metricNameIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponse::metricNameIsSet() const
{
    return metricNameIsSet_;
}

void ShowResourceDetailAccessKeyResponse::unsetmetricName()
{
    metricNameIsSet_ = false;
}

std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list>& ShowResourceDetailAccessKeyResponse::getAkList()
{
    return akList_;
}

void ShowResourceDetailAccessKeyResponse::setAkList(const std::vector<ShowResourceDetailAccessKeyResponseBody_ak_list>& value)
{
    akList_ = value;
    akListIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponse::akListIsSet() const
{
    return akListIsSet_;
}

void ShowResourceDetailAccessKeyResponse::unsetakList()
{
    akListIsSet_ = false;
}

int32_t ShowResourceDetailAccessKeyResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowResourceDetailAccessKeyResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowResourceDetailAccessKeyResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowResourceDetailAccessKeyResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


