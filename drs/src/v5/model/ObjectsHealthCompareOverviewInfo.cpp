

#include "huaweicloud/drs/v5/model/ObjectsHealthCompareOverviewInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ObjectsHealthCompareOverviewInfo::ObjectsHealthCompareOverviewInfo()
{
    type_ = "";
    typeIsSet_ = false;
    sourceCount_ = 0L;
    sourceCountIsSet_ = false;
    targetCount_ = 0L;
    targetCountIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ObjectsHealthCompareOverviewInfo::~ObjectsHealthCompareOverviewInfo() = default;

void ObjectsHealthCompareOverviewInfo::validate()
{
}

web::json::value ObjectsHealthCompareOverviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sourceCountIsSet_) {
        val[utility::conversions::to_string_t("source_count")] = ModelBase::toJson(sourceCount_);
    }
    if(targetCountIsSet_) {
        val[utility::conversions::to_string_t("target_count")] = ModelBase::toJson(targetCount_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ObjectsHealthCompareOverviewInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetCount(refVal);
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
    return ok;
}


std::string ObjectsHealthCompareOverviewInfo::getType() const
{
    return type_;
}

void ObjectsHealthCompareOverviewInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ObjectsHealthCompareOverviewInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ObjectsHealthCompareOverviewInfo::unsettype()
{
    typeIsSet_ = false;
}

int64_t ObjectsHealthCompareOverviewInfo::getSourceCount() const
{
    return sourceCount_;
}

void ObjectsHealthCompareOverviewInfo::setSourceCount(int64_t value)
{
    sourceCount_ = value;
    sourceCountIsSet_ = true;
}

bool ObjectsHealthCompareOverviewInfo::sourceCountIsSet() const
{
    return sourceCountIsSet_;
}

void ObjectsHealthCompareOverviewInfo::unsetsourceCount()
{
    sourceCountIsSet_ = false;
}

int64_t ObjectsHealthCompareOverviewInfo::getTargetCount() const
{
    return targetCount_;
}

void ObjectsHealthCompareOverviewInfo::setTargetCount(int64_t value)
{
    targetCount_ = value;
    targetCountIsSet_ = true;
}

bool ObjectsHealthCompareOverviewInfo::targetCountIsSet() const
{
    return targetCountIsSet_;
}

void ObjectsHealthCompareOverviewInfo::unsettargetCount()
{
    targetCountIsSet_ = false;
}

int32_t ObjectsHealthCompareOverviewInfo::getStatus() const
{
    return status_;
}

void ObjectsHealthCompareOverviewInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ObjectsHealthCompareOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ObjectsHealthCompareOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


