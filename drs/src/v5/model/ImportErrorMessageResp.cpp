

#include "huaweicloud/drs/v5/model/ImportErrorMessageResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ImportErrorMessageResp::ImportErrorMessageResp()
{
    sheetName_ = "";
    sheetNameIsSet_ = false;
    rowRum_ = "";
    rowRumIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

ImportErrorMessageResp::~ImportErrorMessageResp() = default;

void ImportErrorMessageResp::validate()
{
}

web::json::value ImportErrorMessageResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sheetNameIsSet_) {
        val[utility::conversions::to_string_t("sheet_name")] = ModelBase::toJson(sheetName_);
    }
    if(rowRumIsSet_) {
        val[utility::conversions::to_string_t("row_rum")] = ModelBase::toJson(rowRum_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}

bool ImportErrorMessageResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sheet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sheet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSheetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("row_rum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_rum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowRum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}

std::string ImportErrorMessageResp::getSheetName() const
{
    return sheetName_;
}

void ImportErrorMessageResp::setSheetName(const std::string& value)
{
    sheetName_ = value;
    sheetNameIsSet_ = true;
}

bool ImportErrorMessageResp::sheetNameIsSet() const
{
    return sheetNameIsSet_;
}

void ImportErrorMessageResp::unsetsheetName()
{
    sheetNameIsSet_ = false;
}

std::string ImportErrorMessageResp::getRowRum() const
{
    return rowRum_;
}

void ImportErrorMessageResp::setRowRum(const std::string& value)
{
    rowRum_ = value;
    rowRumIsSet_ = true;
}

bool ImportErrorMessageResp::rowRumIsSet() const
{
    return rowRumIsSet_;
}

void ImportErrorMessageResp::unsetrowRum()
{
    rowRumIsSet_ = false;
}

std::string ImportErrorMessageResp::getValue() const
{
    return value_;
}

void ImportErrorMessageResp::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ImportErrorMessageResp::valueIsSet() const
{
    return valueIsSet_;
}

void ImportErrorMessageResp::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ImportErrorMessageResp::getErrorMessage() const
{
    return errorMessage_;
}

void ImportErrorMessageResp::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool ImportErrorMessageResp::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void ImportErrorMessageResp::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


