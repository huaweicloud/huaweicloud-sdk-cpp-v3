

#include "huaweicloud/cbr/v1/model/ShowFeatureRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowFeatureRequest::ShowFeatureRequest()
{
    featureKey_ = "";
    featureKeyIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowFeatureRequest::~ShowFeatureRequest() = default;

void ShowFeatureRequest::validate()
{
}

web::json::value ShowFeatureRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featureKeyIsSet_) {
        val[utility::conversions::to_string_t("feature_key")] = ModelBase::toJson(featureKey_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowFeatureRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("feature_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowFeatureRequest::getFeatureKey() const
{
    return featureKey_;
}

void ShowFeatureRequest::setFeatureKey(const std::string& value)
{
    featureKey_ = value;
    featureKeyIsSet_ = true;
}

bool ShowFeatureRequest::featureKeyIsSet() const
{
    return featureKeyIsSet_;
}

void ShowFeatureRequest::unsetfeatureKey()
{
    featureKeyIsSet_ = false;
}

int32_t ShowFeatureRequest::getLimit() const
{
    return limit_;
}

void ShowFeatureRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowFeatureRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowFeatureRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowFeatureRequest::getOffset() const
{
    return offset_;
}

void ShowFeatureRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowFeatureRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowFeatureRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


