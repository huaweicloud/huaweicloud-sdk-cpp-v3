

#include "huaweicloud/vod/v1/model/AssetDailySummaryResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




AssetDailySummaryResult::AssetDailySummaryResult()
{
    date_ = "";
    dateIsSet_ = false;
    link_ = "";
    linkIsSet_ = false;
}

AssetDailySummaryResult::~AssetDailySummaryResult() = default;

void AssetDailySummaryResult::validate()
{
}

web::json::value AssetDailySummaryResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(linkIsSet_) {
        val[utility::conversions::to_string_t("link")] = ModelBase::toJson(link_);
    }

    return val;
}
bool AssetDailySummaryResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLink(refVal);
        }
    }
    return ok;
}


std::string AssetDailySummaryResult::getDate() const
{
    return date_;
}

void AssetDailySummaryResult::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool AssetDailySummaryResult::dateIsSet() const
{
    return dateIsSet_;
}

void AssetDailySummaryResult::unsetdate()
{
    dateIsSet_ = false;
}

std::string AssetDailySummaryResult::getLink() const
{
    return link_;
}

void AssetDailySummaryResult::setLink(const std::string& value)
{
    link_ = value;
    linkIsSet_ = true;
}

bool AssetDailySummaryResult::linkIsSet() const
{
    return linkIsSet_;
}

void AssetDailySummaryResult::unsetlink()
{
    linkIsSet_ = false;
}

}
}
}
}
}


