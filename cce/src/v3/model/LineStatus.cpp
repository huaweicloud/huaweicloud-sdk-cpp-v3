

#include "huaweicloud/cce/v3/model/LineStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




LineStatus::LineStatus()
{
    startPointIsSet_ = false;
    endPointIsSet_ = false;
    critical_ = "";
    criticalIsSet_ = false;
}

LineStatus::~LineStatus() = default;

void LineStatus::validate()
{
}

web::json::value LineStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startPointIsSet_) {
        val[utility::conversions::to_string_t("startPoint")] = ModelBase::toJson(startPoint_);
    }
    if(endPointIsSet_) {
        val[utility::conversions::to_string_t("endPoint")] = ModelBase::toJson(endPoint_);
    }
    if(criticalIsSet_) {
        val[utility::conversions::to_string_t("critical")] = ModelBase::toJson(critical_);
    }

    return val;
}
bool LineStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("startPoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startPoint"));
        if(!fieldValue.is_null())
        {
            Point refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endPoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endPoint"));
        if(!fieldValue.is_null())
        {
            Point refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("critical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("critical"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCritical(refVal);
        }
    }
    return ok;
}


Point LineStatus::getStartPoint() const
{
    return startPoint_;
}

void LineStatus::setStartPoint(const Point& value)
{
    startPoint_ = value;
    startPointIsSet_ = true;
}

bool LineStatus::startPointIsSet() const
{
    return startPointIsSet_;
}

void LineStatus::unsetstartPoint()
{
    startPointIsSet_ = false;
}

Point LineStatus::getEndPoint() const
{
    return endPoint_;
}

void LineStatus::setEndPoint(const Point& value)
{
    endPoint_ = value;
    endPointIsSet_ = true;
}

bool LineStatus::endPointIsSet() const
{
    return endPointIsSet_;
}

void LineStatus::unsetendPoint()
{
    endPointIsSet_ = false;
}

std::string LineStatus::getCritical() const
{
    return critical_;
}

void LineStatus::setCritical(const std::string& value)
{
    critical_ = value;
    criticalIsSet_ = true;
}

bool LineStatus::criticalIsSet() const
{
    return criticalIsSet_;
}

void LineStatus::unsetcritical()
{
    criticalIsSet_ = false;
}

}
}
}
}
}


