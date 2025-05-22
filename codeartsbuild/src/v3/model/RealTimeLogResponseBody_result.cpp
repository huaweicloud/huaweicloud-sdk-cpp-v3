

#include "huaweicloud/codeartsbuild/v3/model/RealTimeLogResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RealTimeLogResponseBody_result::RealTimeLogResponseBody_result()
{
    hasMoreData_ = false;
    hasMoreDataIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    currentOffset_ = 0;
    currentOffsetIsSet_ = false;
}

RealTimeLogResponseBody_result::~RealTimeLogResponseBody_result() = default;

void RealTimeLogResponseBody_result::validate()
{
}

web::json::value RealTimeLogResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasMoreDataIsSet_) {
        val[utility::conversions::to_string_t("has_more_data")] = ModelBase::toJson(hasMoreData_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(currentOffsetIsSet_) {
        val[utility::conversions::to_string_t("current_offset")] = ModelBase::toJson(currentOffset_);
    }

    return val;
}
bool RealTimeLogResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("has_more_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_more_data"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasMoreData(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentOffset(refVal);
        }
    }
    return ok;
}


bool RealTimeLogResponseBody_result::isHasMoreData() const
{
    return hasMoreData_;
}

void RealTimeLogResponseBody_result::setHasMoreData(bool value)
{
    hasMoreData_ = value;
    hasMoreDataIsSet_ = true;
}

bool RealTimeLogResponseBody_result::hasMoreDataIsSet() const
{
    return hasMoreDataIsSet_;
}

void RealTimeLogResponseBody_result::unsethasMoreData()
{
    hasMoreDataIsSet_ = false;
}

int32_t RealTimeLogResponseBody_result::getOffset() const
{
    return offset_;
}

void RealTimeLogResponseBody_result::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool RealTimeLogResponseBody_result::offsetIsSet() const
{
    return offsetIsSet_;
}

void RealTimeLogResponseBody_result::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string RealTimeLogResponseBody_result::getContent() const
{
    return content_;
}

void RealTimeLogResponseBody_result::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool RealTimeLogResponseBody_result::contentIsSet() const
{
    return contentIsSet_;
}

void RealTimeLogResponseBody_result::unsetcontent()
{
    contentIsSet_ = false;
}

int32_t RealTimeLogResponseBody_result::getCurrentOffset() const
{
    return currentOffset_;
}

void RealTimeLogResponseBody_result::setCurrentOffset(int32_t value)
{
    currentOffset_ = value;
    currentOffsetIsSet_ = true;
}

bool RealTimeLogResponseBody_result::currentOffsetIsSet() const
{
    return currentOffsetIsSet_;
}

void RealTimeLogResponseBody_result::unsetcurrentOffset()
{
    currentOffsetIsSet_ = false;
}

}
}
}
}
}


