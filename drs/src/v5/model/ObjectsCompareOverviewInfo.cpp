

#include "huaweicloud/drs/v5/model/ObjectsCompareOverviewInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ObjectsCompareOverviewInfo::ObjectsCompareOverviewInfo()
{
    type_ = "";
    typeIsSet_ = false;
    sourceCount_ = 0L;
    sourceCountIsSet_ = false;
    targetCount_ = 0L;
    targetCountIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ObjectsCompareOverviewInfo::~ObjectsCompareOverviewInfo() = default;

void ObjectsCompareOverviewInfo::validate()
{
}

web::json::value ObjectsCompareOverviewInfo::toJson() const
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

bool ObjectsCompareOverviewInfo::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string ObjectsCompareOverviewInfo::getType() const
{
    return type_;
}

void ObjectsCompareOverviewInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ObjectsCompareOverviewInfo::typeIsSet() const
{
    return typeIsSet_;
}

void ObjectsCompareOverviewInfo::unsettype()
{
    typeIsSet_ = false;
}

int64_t ObjectsCompareOverviewInfo::getSourceCount() const
{
    return sourceCount_;
}

void ObjectsCompareOverviewInfo::setSourceCount(int64_t value)
{
    sourceCount_ = value;
    sourceCountIsSet_ = true;
}

bool ObjectsCompareOverviewInfo::sourceCountIsSet() const
{
    return sourceCountIsSet_;
}

void ObjectsCompareOverviewInfo::unsetsourceCount()
{
    sourceCountIsSet_ = false;
}

int64_t ObjectsCompareOverviewInfo::getTargetCount() const
{
    return targetCount_;
}

void ObjectsCompareOverviewInfo::setTargetCount(int64_t value)
{
    targetCount_ = value;
    targetCountIsSet_ = true;
}

bool ObjectsCompareOverviewInfo::targetCountIsSet() const
{
    return targetCountIsSet_;
}

void ObjectsCompareOverviewInfo::unsettargetCount()
{
    targetCountIsSet_ = false;
}

std::string ObjectsCompareOverviewInfo::getStatus() const
{
    return status_;
}

void ObjectsCompareOverviewInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ObjectsCompareOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ObjectsCompareOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


