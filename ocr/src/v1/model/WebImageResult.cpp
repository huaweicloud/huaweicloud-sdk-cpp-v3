

#include "huaweicloud/ocr/v1/model/WebImageResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WebImageResult::WebImageResult()
{
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
    extractedDataIsSet_ = false;
}

WebImageResult::~WebImageResult() = default;

void WebImageResult::validate()
{
}

web::json::value WebImageResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }
    if(extractedDataIsSet_) {
        val[utility::conversions::to_string_t("extracted_data")] = ModelBase::toJson(extractedData_);
    }

    return val;
}
bool WebImageResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WebImageWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extracted_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extracted_data"));
        if(!fieldValue.is_null())
        {
            WebImageExtractedData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtractedData(refVal);
        }
    }
    return ok;
}


int32_t WebImageResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void WebImageResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool WebImageResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void WebImageResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<WebImageWordsBlockList>& WebImageResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void WebImageResult::setWordsBlockList(const std::vector<WebImageWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool WebImageResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void WebImageResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

WebImageExtractedData WebImageResult::getExtractedData() const
{
    return extractedData_;
}

void WebImageResult::setExtractedData(const WebImageExtractedData& value)
{
    extractedData_ = value;
    extractedDataIsSet_ = true;
}

bool WebImageResult::extractedDataIsSet() const
{
    return extractedDataIsSet_;
}

void WebImageResult::unsetextractedData()
{
    extractedDataIsSet_ = false;
}

}
}
}
}
}


