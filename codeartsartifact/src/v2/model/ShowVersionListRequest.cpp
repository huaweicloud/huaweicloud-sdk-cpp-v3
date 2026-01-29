

#include "huaweicloud/codeartsartifact/v2/model/ShowVersionListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowVersionListRequest::ShowVersionListRequest()
{
    buildVersion_ = "";
    buildVersionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowVersionListRequest::~ShowVersionListRequest() = default;

void ShowVersionListRequest::validate()
{
}

web::json::value ShowVersionListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildVersionIsSet_) {
        val[utility::conversions::to_string_t("build_version")] = ModelBase::toJson(buildVersion_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowVersionListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowVersionListRequest::getBuildVersion() const
{
    return buildVersion_;
}

void ShowVersionListRequest::setBuildVersion(const std::string& value)
{
    buildVersion_ = value;
    buildVersionIsSet_ = true;
}

bool ShowVersionListRequest::buildVersionIsSet() const
{
    return buildVersionIsSet_;
}

void ShowVersionListRequest::unsetbuildVersion()
{
    buildVersionIsSet_ = false;
}

int32_t ShowVersionListRequest::getOffset() const
{
    return offset_;
}

void ShowVersionListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowVersionListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowVersionListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowVersionListRequest::getLimit() const
{
    return limit_;
}

void ShowVersionListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowVersionListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowVersionListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


