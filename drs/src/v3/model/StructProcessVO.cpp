

#include "huaweicloud/drs/v3/model/StructProcessVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




StructProcessVO::StructProcessVO()
{
    type_ = "";
    typeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    srcCount_ = 0;
    srcCountIsSet_ = false;
    dstCount_ = 0;
    dstCountIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

StructProcessVO::~StructProcessVO() = default;

void StructProcessVO::validate()
{
}

web::json::value StructProcessVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(srcCountIsSet_) {
        val[utility::conversions::to_string_t("src_count")] = ModelBase::toJson(srcCount_);
    }
    if(dstCountIsSet_) {
        val[utility::conversions::to_string_t("dst_count")] = ModelBase::toJson(dstCount_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool StructProcessVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string StructProcessVO::getType() const
{
    return type_;
}

void StructProcessVO::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StructProcessVO::typeIsSet() const
{
    return typeIsSet_;
}

void StructProcessVO::unsettype()
{
    typeIsSet_ = false;
}

int32_t StructProcessVO::getStatus() const
{
    return status_;
}

void StructProcessVO::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StructProcessVO::statusIsSet() const
{
    return statusIsSet_;
}

void StructProcessVO::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t StructProcessVO::getSrcCount() const
{
    return srcCount_;
}

void StructProcessVO::setSrcCount(int32_t value)
{
    srcCount_ = value;
    srcCountIsSet_ = true;
}

bool StructProcessVO::srcCountIsSet() const
{
    return srcCountIsSet_;
}

void StructProcessVO::unsetsrcCount()
{
    srcCountIsSet_ = false;
}

int32_t StructProcessVO::getDstCount() const
{
    return dstCount_;
}

void StructProcessVO::setDstCount(int32_t value)
{
    dstCount_ = value;
    dstCountIsSet_ = true;
}

bool StructProcessVO::dstCountIsSet() const
{
    return dstCountIsSet_;
}

void StructProcessVO::unsetdstCount()
{
    dstCountIsSet_ = false;
}

int64_t StructProcessVO::getStartTime() const
{
    return startTime_;
}

void StructProcessVO::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool StructProcessVO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void StructProcessVO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t StructProcessVO::getEndTime() const
{
    return endTime_;
}

void StructProcessVO::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool StructProcessVO::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void StructProcessVO::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


