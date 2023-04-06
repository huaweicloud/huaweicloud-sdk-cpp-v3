

#include "huaweicloud/ocr/v1/model/FinancialStatementResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FinancialStatementResult::FinancialStatementResult()
{
    wordsRegionCount_ = 0;
    wordsRegionCountIsSet_ = false;
    wordsRegionListIsSet_ = false;
    excel_ = "";
    excelIsSet_ = false;
    imageSizeIsSet_ = false;
    rectificationMatrixIsSet_ = false;
}

FinancialStatementResult::~FinancialStatementResult() = default;

void FinancialStatementResult::validate()
{
}

web::json::value FinancialStatementResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsRegionCountIsSet_) {
        val[utility::conversions::to_string_t("words_region_count")] = ModelBase::toJson(wordsRegionCount_);
    }
    if(wordsRegionListIsSet_) {
        val[utility::conversions::to_string_t("words_region_list")] = ModelBase::toJson(wordsRegionList_);
    }
    if(excelIsSet_) {
        val[utility::conversions::to_string_t("excel")] = ModelBase::toJson(excel_);
    }
    if(imageSizeIsSet_) {
        val[utility::conversions::to_string_t("image_size")] = ModelBase::toJson(imageSize_);
    }
    if(rectificationMatrixIsSet_) {
        val[utility::conversions::to_string_t("rectification_matrix")] = ModelBase::toJson(rectificationMatrix_);
    }

    return val;
}

bool FinancialStatementResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words_region_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_region_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsRegionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_region_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_region_list"));
        if(!fieldValue.is_null())
        {
            std::vector<FinancialStatementWordsRegionList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsRegionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_size"));
        if(!fieldValue.is_null())
        {
            FinancialStatementResult_image_size refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rectification_matrix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rectification_matrix"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<float>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRectificationMatrix(refVal);
        }
    }
    return ok;
}


int32_t FinancialStatementResult::getWordsRegionCount() const
{
    return wordsRegionCount_;
}

void FinancialStatementResult::setWordsRegionCount(int32_t value)
{
    wordsRegionCount_ = value;
    wordsRegionCountIsSet_ = true;
}

bool FinancialStatementResult::wordsRegionCountIsSet() const
{
    return wordsRegionCountIsSet_;
}

void FinancialStatementResult::unsetwordsRegionCount()
{
    wordsRegionCountIsSet_ = false;
}

std::vector<FinancialStatementWordsRegionList>& FinancialStatementResult::getWordsRegionList()
{
    return wordsRegionList_;
}

void FinancialStatementResult::setWordsRegionList(const std::vector<FinancialStatementWordsRegionList>& value)
{
    wordsRegionList_ = value;
    wordsRegionListIsSet_ = true;
}

bool FinancialStatementResult::wordsRegionListIsSet() const
{
    return wordsRegionListIsSet_;
}

void FinancialStatementResult::unsetwordsRegionList()
{
    wordsRegionListIsSet_ = false;
}

std::string FinancialStatementResult::getExcel() const
{
    return excel_;
}

void FinancialStatementResult::setExcel(const std::string& value)
{
    excel_ = value;
    excelIsSet_ = true;
}

bool FinancialStatementResult::excelIsSet() const
{
    return excelIsSet_;
}

void FinancialStatementResult::unsetexcel()
{
    excelIsSet_ = false;
}

FinancialStatementResult_image_size FinancialStatementResult::getImageSize() const
{
    return imageSize_;
}

void FinancialStatementResult::setImageSize(const FinancialStatementResult_image_size& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool FinancialStatementResult::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void FinancialStatementResult::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::vector<std::vector<float>>& FinancialStatementResult::getRectificationMatrix()
{
    return rectificationMatrix_;
}

void FinancialStatementResult::setRectificationMatrix(const std::vector<std::vector<float>>& value)
{
    rectificationMatrix_ = value;
    rectificationMatrixIsSet_ = true;
}

bool FinancialStatementResult::rectificationMatrixIsSet() const
{
    return rectificationMatrixIsSet_;
}

void FinancialStatementResult::unsetrectificationMatrix()
{
    rectificationMatrixIsSet_ = false;
}

}
}
}
}
}


