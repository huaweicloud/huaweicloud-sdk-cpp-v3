

#include "huaweicloud/codeartsdeploy/v2/model/QueryAppLogResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




QueryAppLogResult::QueryAppLogResult()
{
    hasMore_ = false;
    hasMoreIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    endOffset_ = "";
    endOffsetIsSet_ = false;
}

QueryAppLogResult::~QueryAppLogResult() = default;

void QueryAppLogResult::validate()
{
}

web::json::value QueryAppLogResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasMoreIsSet_) {
        val[utility::conversions::to_string_t("has_more")] = ModelBase::toJson(hasMore_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }

    return val;
}
bool QueryAppLogResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


bool QueryAppLogResult::isHasMore() const
{
    return hasMore_;
}

void QueryAppLogResult::setHasMore(bool value)
{
    hasMore_ = value;
    hasMoreIsSet_ = true;
}

bool QueryAppLogResult::hasMoreIsSet() const
{
    return hasMoreIsSet_;
}

void QueryAppLogResult::unsethasMore()
{
    hasMoreIsSet_ = false;
}

std::string QueryAppLogResult::getText() const
{
    return text_;
}

void QueryAppLogResult::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool QueryAppLogResult::textIsSet() const
{
    return textIsSet_;
}

void QueryAppLogResult::unsettext()
{
    textIsSet_ = false;
}

std::string QueryAppLogResult::getOffset() const
{
    return offset_;
}

void QueryAppLogResult::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryAppLogResult::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryAppLogResult::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string QueryAppLogResult::getEndOffset() const
{
    return endOffset_;
}

void QueryAppLogResult::setEndOffset(const std::string& value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool QueryAppLogResult::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void QueryAppLogResult::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

}
}
}
}
}


