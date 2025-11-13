

#include "huaweicloud/gaussdb/v3/model/UploadImportExcelTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UploadImportExcelTemplateResponse::UploadImportExcelTemplateResponse()
{
    success_ = false;
    successIsSet_ = false;
    processedRows_ = 0;
    processedRowsIsSet_ = false;
    errorTablesIsSet_ = false;
    successTablesIsSet_ = false;
    errorCount_ = 0;
    errorCountIsSet_ = false;
    successCount_ = 0;
    successCountIsSet_ = false;
}

UploadImportExcelTemplateResponse::~UploadImportExcelTemplateResponse() = default;

void UploadImportExcelTemplateResponse::validate()
{
}

web::json::value UploadImportExcelTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(processedRowsIsSet_) {
        val[utility::conversions::to_string_t("processed_rows")] = ModelBase::toJson(processedRows_);
    }
    if(errorTablesIsSet_) {
        val[utility::conversions::to_string_t("error_tables")] = ModelBase::toJson(errorTables_);
    }
    if(successTablesIsSet_) {
        val[utility::conversions::to_string_t("success_tables")] = ModelBase::toJson(successTables_);
    }
    if(errorCountIsSet_) {
        val[utility::conversions::to_string_t("error_count")] = ModelBase::toJson(errorCount_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }

    return val;
}
bool UploadImportExcelTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processed_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processed_rows"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessedRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<SuccessTable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    return ok;
}


bool UploadImportExcelTemplateResponse::isSuccess() const
{
    return success_;
}

void UploadImportExcelTemplateResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::successIsSet() const
{
    return successIsSet_;
}

void UploadImportExcelTemplateResponse::unsetsuccess()
{
    successIsSet_ = false;
}

int32_t UploadImportExcelTemplateResponse::getProcessedRows() const
{
    return processedRows_;
}

void UploadImportExcelTemplateResponse::setProcessedRows(int32_t value)
{
    processedRows_ = value;
    processedRowsIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::processedRowsIsSet() const
{
    return processedRowsIsSet_;
}

void UploadImportExcelTemplateResponse::unsetprocessedRows()
{
    processedRowsIsSet_ = false;
}

std::vector<ErrorTable>& UploadImportExcelTemplateResponse::getErrorTables()
{
    return errorTables_;
}

void UploadImportExcelTemplateResponse::setErrorTables(const std::vector<ErrorTable>& value)
{
    errorTables_ = value;
    errorTablesIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::errorTablesIsSet() const
{
    return errorTablesIsSet_;
}

void UploadImportExcelTemplateResponse::unseterrorTables()
{
    errorTablesIsSet_ = false;
}

std::vector<SuccessTable>& UploadImportExcelTemplateResponse::getSuccessTables()
{
    return successTables_;
}

void UploadImportExcelTemplateResponse::setSuccessTables(const std::vector<SuccessTable>& value)
{
    successTables_ = value;
    successTablesIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::successTablesIsSet() const
{
    return successTablesIsSet_;
}

void UploadImportExcelTemplateResponse::unsetsuccessTables()
{
    successTablesIsSet_ = false;
}

int32_t UploadImportExcelTemplateResponse::getErrorCount() const
{
    return errorCount_;
}

void UploadImportExcelTemplateResponse::setErrorCount(int32_t value)
{
    errorCount_ = value;
    errorCountIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::errorCountIsSet() const
{
    return errorCountIsSet_;
}

void UploadImportExcelTemplateResponse::unseterrorCount()
{
    errorCountIsSet_ = false;
}

int32_t UploadImportExcelTemplateResponse::getSuccessCount() const
{
    return successCount_;
}

void UploadImportExcelTemplateResponse::setSuccessCount(int32_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool UploadImportExcelTemplateResponse::successCountIsSet() const
{
    return successCountIsSet_;
}

void UploadImportExcelTemplateResponse::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

}
}
}
}
}


