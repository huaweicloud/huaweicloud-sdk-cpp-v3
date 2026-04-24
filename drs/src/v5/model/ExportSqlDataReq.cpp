

#include "huaweicloud/drs/v5/model/ExportSqlDataReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportSqlDataReq::ExportSqlDataReq()
{
    fileType_ = "";
    fileTypeIsSet_ = false;
    fieldNamesIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ExportSqlDataReq::~ExportSqlDataReq() = default;

void ExportSqlDataReq::validate()
{
}

web::json::value ExportSqlDataReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(fieldNamesIsSet_) {
        val[utility::conversions::to_string_t("field_names")] = ModelBase::toJson(fieldNames_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ExportSqlDataReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ExportSqlDataReq::getFileType() const
{
    return fileType_;
}

void ExportSqlDataReq::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ExportSqlDataReq::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ExportSqlDataReq::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::vector<std::string>& ExportSqlDataReq::getFieldNames()
{
    return fieldNames_;
}

void ExportSqlDataReq::setFieldNames(const std::vector<std::string>& value)
{
    fieldNames_ = value;
    fieldNamesIsSet_ = true;
}

bool ExportSqlDataReq::fieldNamesIsSet() const
{
    return fieldNamesIsSet_;
}

void ExportSqlDataReq::unsetfieldNames()
{
    fieldNamesIsSet_ = false;
}

std::string ExportSqlDataReq::getStartTime() const
{
    return startTime_;
}

void ExportSqlDataReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExportSqlDataReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExportSqlDataReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ExportSqlDataReq::getEndTime() const
{
    return endTime_;
}

void ExportSqlDataReq::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExportSqlDataReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExportSqlDataReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


