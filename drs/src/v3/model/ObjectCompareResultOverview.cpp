

#include "huaweicloud/drs/v3/model/ObjectCompareResultOverview.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ObjectCompareResultOverview::ObjectCompareResultOverview()
{
    objectType_ = "";
    objectTypeIsSet_ = false;
    objectCompareResult_ = "";
    objectCompareResultIsSet_ = false;
    targetCount_ = 0;
    targetCountIsSet_ = false;
    sourceCount_ = 0;
    sourceCountIsSet_ = false;
    diffCount_ = 0;
    diffCountIsSet_ = false;
}

ObjectCompareResultOverview::~ObjectCompareResultOverview() = default;

void ObjectCompareResultOverview::validate()
{
}

web::json::value ObjectCompareResultOverview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(objectCompareResultIsSet_) {
        val[utility::conversions::to_string_t("object_compare_result")] = ModelBase::toJson(objectCompareResult_);
    }
    if(targetCountIsSet_) {
        val[utility::conversions::to_string_t("target_count")] = ModelBase::toJson(targetCount_);
    }
    if(sourceCountIsSet_) {
        val[utility::conversions::to_string_t("source_count")] = ModelBase::toJson(sourceCount_);
    }
    if(diffCountIsSet_) {
        val[utility::conversions::to_string_t("diff_count")] = ModelBase::toJson(diffCount_);
    }

    return val;
}

bool ObjectCompareResultOverview::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectCompareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffCount(refVal);
        }
    }
    return ok;
}

std::string ObjectCompareResultOverview::getObjectType() const
{
    return objectType_;
}

void ObjectCompareResultOverview::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool ObjectCompareResultOverview::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void ObjectCompareResultOverview::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string ObjectCompareResultOverview::getObjectCompareResult() const
{
    return objectCompareResult_;
}

void ObjectCompareResultOverview::setObjectCompareResult(const std::string& value)
{
    objectCompareResult_ = value;
    objectCompareResultIsSet_ = true;
}

bool ObjectCompareResultOverview::objectCompareResultIsSet() const
{
    return objectCompareResultIsSet_;
}

void ObjectCompareResultOverview::unsetobjectCompareResult()
{
    objectCompareResultIsSet_ = false;
}

int32_t ObjectCompareResultOverview::getTargetCount() const
{
    return targetCount_;
}

void ObjectCompareResultOverview::setTargetCount(int32_t value)
{
    targetCount_ = value;
    targetCountIsSet_ = true;
}

bool ObjectCompareResultOverview::targetCountIsSet() const
{
    return targetCountIsSet_;
}

void ObjectCompareResultOverview::unsettargetCount()
{
    targetCountIsSet_ = false;
}

int32_t ObjectCompareResultOverview::getSourceCount() const
{
    return sourceCount_;
}

void ObjectCompareResultOverview::setSourceCount(int32_t value)
{
    sourceCount_ = value;
    sourceCountIsSet_ = true;
}

bool ObjectCompareResultOverview::sourceCountIsSet() const
{
    return sourceCountIsSet_;
}

void ObjectCompareResultOverview::unsetsourceCount()
{
    sourceCountIsSet_ = false;
}

int32_t ObjectCompareResultOverview::getDiffCount() const
{
    return diffCount_;
}

void ObjectCompareResultOverview::setDiffCount(int32_t value)
{
    diffCount_ = value;
    diffCountIsSet_ = true;
}

bool ObjectCompareResultOverview::diffCountIsSet() const
{
    return diffCountIsSet_;
}

void ObjectCompareResultOverview::unsetdiffCount()
{
    diffCountIsSet_ = false;
}

}
}
}
}
}


