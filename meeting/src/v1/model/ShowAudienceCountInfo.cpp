

#include "huaweicloud/meeting/v1/model/ShowAudienceCountInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowAudienceCountInfo::ShowAudienceCountInfo()
{
    showAudienceMode_ = 0;
    showAudienceModeIsSet_ = false;
    baseAudienceCount_ = 0;
    baseAudienceCountIsSet_ = false;
    multiple_ = 0.0;
    multipleIsSet_ = false;
}

ShowAudienceCountInfo::~ShowAudienceCountInfo() = default;

void ShowAudienceCountInfo::validate()
{
}

web::json::value ShowAudienceCountInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(showAudienceModeIsSet_) {
        val[utility::conversions::to_string_t("showAudienceMode")] = ModelBase::toJson(showAudienceMode_);
    }
    if(baseAudienceCountIsSet_) {
        val[utility::conversions::to_string_t("baseAudienceCount")] = ModelBase::toJson(baseAudienceCount_);
    }
    if(multipleIsSet_) {
        val[utility::conversions::to_string_t("multiple")] = ModelBase::toJson(multiple_);
    }

    return val;
}
bool ShowAudienceCountInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("showAudienceMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("showAudienceMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowAudienceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baseAudienceCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseAudienceCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseAudienceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multiple"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multiple"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiple(refVal);
        }
    }
    return ok;
}


int32_t ShowAudienceCountInfo::getShowAudienceMode() const
{
    return showAudienceMode_;
}

void ShowAudienceCountInfo::setShowAudienceMode(int32_t value)
{
    showAudienceMode_ = value;
    showAudienceModeIsSet_ = true;
}

bool ShowAudienceCountInfo::showAudienceModeIsSet() const
{
    return showAudienceModeIsSet_;
}

void ShowAudienceCountInfo::unsetshowAudienceMode()
{
    showAudienceModeIsSet_ = false;
}

int32_t ShowAudienceCountInfo::getBaseAudienceCount() const
{
    return baseAudienceCount_;
}

void ShowAudienceCountInfo::setBaseAudienceCount(int32_t value)
{
    baseAudienceCount_ = value;
    baseAudienceCountIsSet_ = true;
}

bool ShowAudienceCountInfo::baseAudienceCountIsSet() const
{
    return baseAudienceCountIsSet_;
}

void ShowAudienceCountInfo::unsetbaseAudienceCount()
{
    baseAudienceCountIsSet_ = false;
}

double ShowAudienceCountInfo::getMultiple() const
{
    return multiple_;
}

void ShowAudienceCountInfo::setMultiple(double value)
{
    multiple_ = value;
    multipleIsSet_ = true;
}

bool ShowAudienceCountInfo::multipleIsSet() const
{
    return multipleIsSet_;
}

void ShowAudienceCountInfo::unsetmultiple()
{
    multipleIsSet_ = false;
}

}
}
}
}
}


