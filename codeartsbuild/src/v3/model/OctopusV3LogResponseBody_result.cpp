

#include "huaweicloud/codeartsbuild/v3/model/OctopusV3LogResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




OctopusV3LogResponseBody_result::OctopusV3LogResponseBody_result()
{
    hasMore_ = false;
    hasMoreIsSet_ = false;
    startOffset_ = "";
    startOffsetIsSet_ = false;
    endOffset_ = "";
    endOffsetIsSet_ = false;
    log_ = "";
    logIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
}

OctopusV3LogResponseBody_result::~OctopusV3LogResponseBody_result() = default;

void OctopusV3LogResponseBody_result::validate()
{
}

web::json::value OctopusV3LogResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasMoreIsSet_) {
        val[utility::conversions::to_string_t("has_more")] = ModelBase::toJson(hasMore_);
    }
    if(startOffsetIsSet_) {
        val[utility::conversions::to_string_t("start_offset")] = ModelBase::toJson(startOffset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }
    if(logIsSet_) {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(log_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool OctopusV3LogResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("has_more"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_more"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasMore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


bool OctopusV3LogResponseBody_result::isHasMore() const
{
    return hasMore_;
}

void OctopusV3LogResponseBody_result::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool OctopusV3LogResponseBody_result::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void OctopusV3LogResponseBody_result::unsethasMore()
{
    hasMoreIsSet_ = false;
}

std::string OctopusV3LogResponseBody_result::getStartOffset() const
{
    return startOffset_;
}

void OctopusV3LogResponseBody_result::setStartOffset(const std::string& value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool OctopusV3LogResponseBody_result::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void OctopusV3LogResponseBody_result::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

std::string OctopusV3LogResponseBody_result::getEndOffset() const
{
    return endOffset_;
}

void OctopusV3LogResponseBody_result::setEndOffset(const std::string& value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool OctopusV3LogResponseBody_result::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void OctopusV3LogResponseBody_result::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

std::string OctopusV3LogResponseBody_result::getLog() const
{
    return log_;
}

void OctopusV3LogResponseBody_result::setLog(const std::string& value)
{
    log_ = value;
    logIsSet_ = true;
}

bool OctopusV3LogResponseBody_result::logIsSet() const
{
    return logIsSet_;
}

void OctopusV3LogResponseBody_result::unsetlog()
{
    logIsSet_ = false;
}

std::string OctopusV3LogResponseBody_result::getLocation() const
{
    return location_;
}

void OctopusV3LogResponseBody_result::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool OctopusV3LogResponseBody_result::locationIsSet() const
{
    return locationIsSet_;
}

void OctopusV3LogResponseBody_result::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


