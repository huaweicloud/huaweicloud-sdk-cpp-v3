

#include "huaweicloud/drs/v3/model/ExportCompareResultReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ExportCompareResultReq::ExportCompareResultReq()
{
    compareType_ = "";
    compareTypeIsSet_ = false;
    compareJobId_ = "";
    compareJobIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

ExportCompareResultReq::~ExportCompareResultReq() = default;

void ExportCompareResultReq::validate()
{
}

web::json::value ExportCompareResultReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTypeIsSet_) {
        val[utility::conversions::to_string_t("compare_type")] = ModelBase::toJson(compareType_);
    }
    if(compareJobIdIsSet_) {
        val[utility::conversions::to_string_t("compare_job_id")] = ModelBase::toJson(compareJobId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool ExportCompareResultReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string ExportCompareResultReq::getCompareType() const
{
    return compareType_;
}

void ExportCompareResultReq::setCompareType(const std::string& value)
{
    compareType_ = value;
    compareTypeIsSet_ = true;
}

bool ExportCompareResultReq::compareTypeIsSet() const
{
    return compareTypeIsSet_;
}

void ExportCompareResultReq::unsetcompareType()
{
    compareTypeIsSet_ = false;
}

std::string ExportCompareResultReq::getCompareJobId() const
{
    return compareJobId_;
}

void ExportCompareResultReq::setCompareJobId(const std::string& value)
{
    compareJobId_ = value;
    compareJobIdIsSet_ = true;
}

bool ExportCompareResultReq::compareJobIdIsSet() const
{
    return compareJobIdIsSet_;
}

void ExportCompareResultReq::unsetcompareJobId()
{
    compareJobIdIsSet_ = false;
}

std::string ExportCompareResultReq::getTimeZone() const
{
    return timeZone_;
}

void ExportCompareResultReq::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool ExportCompareResultReq::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void ExportCompareResultReq::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


