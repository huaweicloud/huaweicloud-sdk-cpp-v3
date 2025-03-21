

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerRequestBody::SmartDocumentRecognizerRequestBody()
{
    data_ = "";
    dataIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    singleOrientationMode_ = false;
    singleOrientationModeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    kv_ = false;
    kvIsSet_ = false;
    table_ = false;
    tableIsSet_ = false;
    layout_ = false;
    layoutIsSet_ = false;
    returnExcel_ = false;
    returnExcelIsSet_ = false;
    form_ = false;
    formIsSet_ = false;
    formula_ = false;
    formulaIsSet_ = false;
    kvMap_ = "";
    kvMapIsSet_ = false;
    eraseSeal_ = false;
    eraseSealIsSet_ = false;
    pdfPageNumber_ = 0;
    pdfPageNumberIsSet_ = false;
}

SmartDocumentRecognizerRequestBody::~SmartDocumentRecognizerRequestBody() = default;

void SmartDocumentRecognizerRequestBody::validate()
{
}

web::json::value SmartDocumentRecognizerRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(singleOrientationModeIsSet_) {
        val[utility::conversions::to_string_t("single_orientation_mode")] = ModelBase::toJson(singleOrientationMode_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(kvIsSet_) {
        val[utility::conversions::to_string_t("kv")] = ModelBase::toJson(kv_);
    }
    if(tableIsSet_) {
        val[utility::conversions::to_string_t("table")] = ModelBase::toJson(table_);
    }
    if(layoutIsSet_) {
        val[utility::conversions::to_string_t("layout")] = ModelBase::toJson(layout_);
    }
    if(returnExcelIsSet_) {
        val[utility::conversions::to_string_t("return_excel")] = ModelBase::toJson(returnExcel_);
    }
    if(formIsSet_) {
        val[utility::conversions::to_string_t("form")] = ModelBase::toJson(form_);
    }
    if(formulaIsSet_) {
        val[utility::conversions::to_string_t("formula")] = ModelBase::toJson(formula_);
    }
    if(kvMapIsSet_) {
        val[utility::conversions::to_string_t("kv_map")] = ModelBase::toJson(kvMap_);
    }
    if(eraseSealIsSet_) {
        val[utility::conversions::to_string_t("erase_seal")] = ModelBase::toJson(eraseSeal_);
    }
    if(pdfPageNumberIsSet_) {
        val[utility::conversions::to_string_t("pdf_page_number")] = ModelBase::toJson(pdfPageNumber_);
    }

    return val;
}
bool SmartDocumentRecognizerRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("single_orientation_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single_orientation_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingleOrientationMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kv"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_excel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_excel"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnExcel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("form"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("form"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("formula"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formula"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormula(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kv_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_map"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("erase_seal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("erase_seal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEraseSeal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pdf_page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pdf_page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPdfPageNumber(refVal);
        }
    }
    return ok;
}


std::string SmartDocumentRecognizerRequestBody::getData() const
{
    return data_;
}

void SmartDocumentRecognizerRequestBody::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::dataIsSet() const
{
    return dataIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetdata()
{
    dataIsSet_ = false;
}

std::string SmartDocumentRecognizerRequestBody::getUrl() const
{
    return url_;
}

void SmartDocumentRecognizerRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void SmartDocumentRecognizerRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isSingleOrientationMode() const
{
    return singleOrientationMode_;
}

void SmartDocumentRecognizerRequestBody::setSingleOrientationMode(bool value)
{
    singleOrientationMode_ = value;
    singleOrientationModeIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::singleOrientationModeIsSet() const
{
    return singleOrientationModeIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetsingleOrientationMode()
{
    singleOrientationModeIsSet_ = false;
}

std::string SmartDocumentRecognizerRequestBody::getLanguage() const
{
    return language_;
}

void SmartDocumentRecognizerRequestBody::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::languageIsSet() const
{
    return languageIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetlanguage()
{
    languageIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isKv() const
{
    return kv_;
}

void SmartDocumentRecognizerRequestBody::setKv(bool value)
{
    kv_ = value;
    kvIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::kvIsSet() const
{
    return kvIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetkv()
{
    kvIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isTable() const
{
    return table_;
}

void SmartDocumentRecognizerRequestBody::setTable(bool value)
{
    table_ = value;
    tableIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::tableIsSet() const
{
    return tableIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsettable()
{
    tableIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isLayout() const
{
    return layout_;
}

void SmartDocumentRecognizerRequestBody::setLayout(bool value)
{
    layout_ = value;
    layoutIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::layoutIsSet() const
{
    return layoutIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetlayout()
{
    layoutIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isReturnExcel() const
{
    return returnExcel_;
}

void SmartDocumentRecognizerRequestBody::setReturnExcel(bool value)
{
    returnExcel_ = value;
    returnExcelIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::returnExcelIsSet() const
{
    return returnExcelIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetreturnExcel()
{
    returnExcelIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isForm() const
{
    return form_;
}

void SmartDocumentRecognizerRequestBody::setForm(bool value)
{
    form_ = value;
    formIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::formIsSet() const
{
    return formIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetform()
{
    formIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isFormula() const
{
    return formula_;
}

void SmartDocumentRecognizerRequestBody::setFormula(bool value)
{
    formula_ = value;
    formulaIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::formulaIsSet() const
{
    return formulaIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetformula()
{
    formulaIsSet_ = false;
}

std::string SmartDocumentRecognizerRequestBody::getKvMap() const
{
    return kvMap_;
}

void SmartDocumentRecognizerRequestBody::setKvMap(const std::string& value)
{
    kvMap_ = value;
    kvMapIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::kvMapIsSet() const
{
    return kvMapIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetkvMap()
{
    kvMapIsSet_ = false;
}

bool SmartDocumentRecognizerRequestBody::isEraseSeal() const
{
    return eraseSeal_;
}

void SmartDocumentRecognizerRequestBody::setEraseSeal(bool value)
{
    eraseSeal_ = value;
    eraseSealIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::eraseSealIsSet() const
{
    return eraseSealIsSet_;
}

void SmartDocumentRecognizerRequestBody::unseteraseSeal()
{
    eraseSealIsSet_ = false;
}

int32_t SmartDocumentRecognizerRequestBody::getPdfPageNumber() const
{
    return pdfPageNumber_;
}

void SmartDocumentRecognizerRequestBody::setPdfPageNumber(int32_t value)
{
    pdfPageNumber_ = value;
    pdfPageNumberIsSet_ = true;
}

bool SmartDocumentRecognizerRequestBody::pdfPageNumberIsSet() const
{
    return pdfPageNumberIsSet_;
}

void SmartDocumentRecognizerRequestBody::unsetpdfPageNumber()
{
    pdfPageNumberIsSet_ = false;
}

}
}
}
}
}


