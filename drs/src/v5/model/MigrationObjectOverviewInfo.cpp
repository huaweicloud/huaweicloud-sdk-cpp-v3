

#include "huaweicloud/drs/v5/model/MigrationObjectOverviewInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




MigrationObjectOverviewInfo::MigrationObjectOverviewInfo()
{
    type_ = "";
    typeIsSet_ = false;
    srcCount_ = "";
    srcCountIsSet_ = false;
    dstCount_ = "";
    dstCountIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

MigrationObjectOverviewInfo::~MigrationObjectOverviewInfo() = default;

void MigrationObjectOverviewInfo::validate()
{
}

web::json::value MigrationObjectOverviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(srcCountIsSet_) {
        val[utility::conversions::to_string_t("src_count")] = ModelBase::toJson(srcCount_);
    }
    if(dstCountIsSet_) {
        val[utility::conversions::to_string_t("dst_count")] = ModelBase::toJson(dstCount_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool MigrationObjectOverviewInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::string MigrationObjectOverviewInfo::getType() const
{
    return type_;
}

void MigrationObjectOverviewInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MigrationObjectOverviewInfo::typeIsSet() const
{
    return typeIsSet_;
}

void MigrationObjectOverviewInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string MigrationObjectOverviewInfo::getSrcCount() const
{
    return srcCount_;
}

void MigrationObjectOverviewInfo::setSrcCount(const std::string& value)
{
    srcCount_ = value;
    srcCountIsSet_ = true;
}

bool MigrationObjectOverviewInfo::srcCountIsSet() const
{
    return srcCountIsSet_;
}

void MigrationObjectOverviewInfo::unsetsrcCount()
{
    srcCountIsSet_ = false;
}

std::string MigrationObjectOverviewInfo::getDstCount() const
{
    return dstCount_;
}

void MigrationObjectOverviewInfo::setDstCount(const std::string& value)
{
    dstCount_ = value;
    dstCountIsSet_ = true;
}

bool MigrationObjectOverviewInfo::dstCountIsSet() const
{
    return dstCountIsSet_;
}

void MigrationObjectOverviewInfo::unsetdstCount()
{
    dstCountIsSet_ = false;
}

std::string MigrationObjectOverviewInfo::getStatus() const
{
    return status_;
}

void MigrationObjectOverviewInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MigrationObjectOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void MigrationObjectOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MigrationObjectOverviewInfo::getStartTime() const
{
    return startTime_;
}

void MigrationObjectOverviewInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool MigrationObjectOverviewInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void MigrationObjectOverviewInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string MigrationObjectOverviewInfo::getEndTime() const
{
    return endTime_;
}

void MigrationObjectOverviewInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool MigrationObjectOverviewInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void MigrationObjectOverviewInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


