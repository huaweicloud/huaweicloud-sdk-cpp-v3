

#include "huaweicloud/metastudio/v1/model/DocumentSegmentParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DocumentSegmentParam::DocumentSegmentParam()
{
    splitType_ = 0;
    splitTypeIsSet_ = false;
    chunkSize_ = 0;
    chunkSizeIsSet_ = false;
    chunkType_ = "";
    chunkTypeIsSet_ = false;
    separatorsIsSet_ = false;
}

DocumentSegmentParam::~DocumentSegmentParam() = default;

void DocumentSegmentParam::validate()
{
}

web::json::value DocumentSegmentParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(splitTypeIsSet_) {
        val[utility::conversions::to_string_t("split_type")] = ModelBase::toJson(splitType_);
    }
    if(chunkSizeIsSet_) {
        val[utility::conversions::to_string_t("chunk_size")] = ModelBase::toJson(chunkSize_);
    }
    if(chunkTypeIsSet_) {
        val[utility::conversions::to_string_t("chunk_type")] = ModelBase::toJson(chunkType_);
    }
    if(separatorsIsSet_) {
        val[utility::conversions::to_string_t("separators")] = ModelBase::toJson(separators_);
    }

    return val;
}
bool DocumentSegmentParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("split_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("split_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSplitType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chunk_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chunk_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChunkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("separators"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("separators"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeparators(refVal);
        }
    }
    return ok;
}


int32_t DocumentSegmentParam::getSplitType() const
{
    return splitType_;
}

void DocumentSegmentParam::setSplitType(int32_t value)
{
    splitType_ = value;
    splitTypeIsSet_ = true;
}

bool DocumentSegmentParam::splitTypeIsSet() const
{
    return splitTypeIsSet_;
}

void DocumentSegmentParam::unsetsplitType()
{
    splitTypeIsSet_ = false;
}

int32_t DocumentSegmentParam::getChunkSize() const
{
    return chunkSize_;
}

void DocumentSegmentParam::setChunkSize(int32_t value)
{
    chunkSize_ = value;
    chunkSizeIsSet_ = true;
}

bool DocumentSegmentParam::chunkSizeIsSet() const
{
    return chunkSizeIsSet_;
}

void DocumentSegmentParam::unsetchunkSize()
{
    chunkSizeIsSet_ = false;
}

std::string DocumentSegmentParam::getChunkType() const
{
    return chunkType_;
}

void DocumentSegmentParam::setChunkType(const std::string& value)
{
    chunkType_ = value;
    chunkTypeIsSet_ = true;
}

bool DocumentSegmentParam::chunkTypeIsSet() const
{
    return chunkTypeIsSet_;
}

void DocumentSegmentParam::unsetchunkType()
{
    chunkTypeIsSet_ = false;
}

std::vector<std::string>& DocumentSegmentParam::getSeparators()
{
    return separators_;
}

void DocumentSegmentParam::setSeparators(const std::vector<std::string>& value)
{
    separators_ = value;
    separatorsIsSet_ = true;
}

bool DocumentSegmentParam::separatorsIsSet() const
{
    return separatorsIsSet_;
}

void DocumentSegmentParam::unsetseparators()
{
    separatorsIsSet_ = false;
}

}
}
}
}
}


