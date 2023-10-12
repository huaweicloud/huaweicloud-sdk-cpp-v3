

#include "huaweicloud/live/v2/model/AreaDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




AreaDetail::AreaDetail()
{
    area_ = "";
    areaIsSet_ = false;
    summaryIsSet_ = false;
    detailIsSet_ = false;
}

AreaDetail::~AreaDetail() = default;

void AreaDetail::validate()
{
}

web::json::value AreaDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool AreaDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            std::vector<TimeValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::vector<AreaTimeValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string AreaDetail::getArea() const
{
    return area_;
}

void AreaDetail::setArea(const std::string& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool AreaDetail::areaIsSet() const
{
    return areaIsSet_;
}

void AreaDetail::unsetarea()
{
    areaIsSet_ = false;
}

std::vector<TimeValue>& AreaDetail::getSummary()
{
    return summary_;
}

void AreaDetail::setSummary(const std::vector<TimeValue>& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool AreaDetail::summaryIsSet() const
{
    return summaryIsSet_;
}

void AreaDetail::unsetsummary()
{
    summaryIsSet_ = false;
}

std::vector<AreaTimeValue>& AreaDetail::getDetail()
{
    return detail_;
}

void AreaDetail::setDetail(const std::vector<AreaTimeValue>& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool AreaDetail::detailIsSet() const
{
    return detailIsSet_;
}

void AreaDetail::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


