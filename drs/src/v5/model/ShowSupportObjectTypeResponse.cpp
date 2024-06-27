

#include "huaweicloud/drs/v5/model/ShowSupportObjectTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSupportObjectTypeResponse::ShowSupportObjectTypeResponse()
{
    isFullTransSupportObject_ = false;
    isFullTransSupportObjectIsSet_ = false;
    isIncreTransSupportObject_ = false;
    isIncreTransSupportObjectIsSet_ = false;
    isFullIncreTransSupportObject_ = false;
    isFullIncreTransSupportObjectIsSet_ = false;
    supportObjectImportEngineIsSet_ = false;
    isSupportColumnMapping_ = false;
    isSupportColumnMappingIsSet_ = false;
    isDatabaseSupportSearch_ = false;
    isDatabaseSupportSearchIsSet_ = false;
    isSchemaSupportSearch_ = false;
    isSchemaSupportSearchIsSet_ = false;
    isTableSupportSearch_ = false;
    isTableSupportSearchIsSet_ = false;
    fileSize_ = "";
    fileSizeIsSet_ = false;
    previousSelect_ = "";
    previousSelectIsSet_ = false;
    importLevel_ = "";
    importLevelIsSet_ = false;
    isImportCloumn_ = false;
    isImportCloumnIsSet_ = false;
}

ShowSupportObjectTypeResponse::~ShowSupportObjectTypeResponse() = default;

void ShowSupportObjectTypeResponse::validate()
{
}

web::json::value ShowSupportObjectTypeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isFullTransSupportObjectIsSet_) {
        val[utility::conversions::to_string_t("is_full_trans_support_object")] = ModelBase::toJson(isFullTransSupportObject_);
    }
    if(isIncreTransSupportObjectIsSet_) {
        val[utility::conversions::to_string_t("is_incre_trans_support_object")] = ModelBase::toJson(isIncreTransSupportObject_);
    }
    if(isFullIncreTransSupportObjectIsSet_) {
        val[utility::conversions::to_string_t("is_full_incre_trans_support_object")] = ModelBase::toJson(isFullIncreTransSupportObject_);
    }
    if(supportObjectImportEngineIsSet_) {
        val[utility::conversions::to_string_t("support_object_import_engine")] = ModelBase::toJson(supportObjectImportEngine_);
    }
    if(isSupportColumnMappingIsSet_) {
        val[utility::conversions::to_string_t("is_support_column_mapping")] = ModelBase::toJson(isSupportColumnMapping_);
    }
    if(isDatabaseSupportSearchIsSet_) {
        val[utility::conversions::to_string_t("is_database_support_search")] = ModelBase::toJson(isDatabaseSupportSearch_);
    }
    if(isSchemaSupportSearchIsSet_) {
        val[utility::conversions::to_string_t("is_schema_support_search")] = ModelBase::toJson(isSchemaSupportSearch_);
    }
    if(isTableSupportSearchIsSet_) {
        val[utility::conversions::to_string_t("is_table_support_search")] = ModelBase::toJson(isTableSupportSearch_);
    }
    if(fileSizeIsSet_) {
        val[utility::conversions::to_string_t("file_size")] = ModelBase::toJson(fileSize_);
    }
    if(previousSelectIsSet_) {
        val[utility::conversions::to_string_t("previous_select")] = ModelBase::toJson(previousSelect_);
    }
    if(importLevelIsSet_) {
        val[utility::conversions::to_string_t("import_level")] = ModelBase::toJson(importLevel_);
    }
    if(isImportCloumnIsSet_) {
        val[utility::conversions::to_string_t("is_import_cloumn")] = ModelBase::toJson(isImportCloumn_);
    }

    return val;
}
bool ShowSupportObjectTypeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_full_trans_support_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_full_trans_support_object"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFullTransSupportObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_incre_trans_support_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_incre_trans_support_object"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIncreTransSupportObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_full_incre_trans_support_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_full_incre_trans_support_object"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFullIncreTransSupportObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_object_import_engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_object_import_engine"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportObjectImportEngine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_column_mapping"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_column_mapping"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportColumnMapping(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_database_support_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_database_support_search"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDatabaseSupportSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_schema_support_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_schema_support_search"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSchemaSupportSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_table_support_search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_table_support_search"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTableSupportSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previous_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previous_select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousSelect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_import_cloumn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_import_cloumn"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsImportCloumn(refVal);
        }
    }
    return ok;
}


bool ShowSupportObjectTypeResponse::isIsFullTransSupportObject() const
{
    return isFullTransSupportObject_;
}

void ShowSupportObjectTypeResponse::setIsFullTransSupportObject(bool value)
{
    isFullTransSupportObject_ = value;
    isFullTransSupportObjectIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isFullTransSupportObjectIsSet() const
{
    return isFullTransSupportObjectIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisFullTransSupportObject()
{
    isFullTransSupportObjectIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsIncreTransSupportObject() const
{
    return isIncreTransSupportObject_;
}

void ShowSupportObjectTypeResponse::setIsIncreTransSupportObject(bool value)
{
    isIncreTransSupportObject_ = value;
    isIncreTransSupportObjectIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isIncreTransSupportObjectIsSet() const
{
    return isIncreTransSupportObjectIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisIncreTransSupportObject()
{
    isIncreTransSupportObjectIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsFullIncreTransSupportObject() const
{
    return isFullIncreTransSupportObject_;
}

void ShowSupportObjectTypeResponse::setIsFullIncreTransSupportObject(bool value)
{
    isFullIncreTransSupportObject_ = value;
    isFullIncreTransSupportObjectIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isFullIncreTransSupportObjectIsSet() const
{
    return isFullIncreTransSupportObjectIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisFullIncreTransSupportObject()
{
    isFullIncreTransSupportObjectIsSet_ = false;
}

std::vector<std::string>& ShowSupportObjectTypeResponse::getSupportObjectImportEngine()
{
    return supportObjectImportEngine_;
}

void ShowSupportObjectTypeResponse::setSupportObjectImportEngine(const std::vector<std::string>& value)
{
    supportObjectImportEngine_ = value;
    supportObjectImportEngineIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::supportObjectImportEngineIsSet() const
{
    return supportObjectImportEngineIsSet_;
}

void ShowSupportObjectTypeResponse::unsetsupportObjectImportEngine()
{
    supportObjectImportEngineIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsSupportColumnMapping() const
{
    return isSupportColumnMapping_;
}

void ShowSupportObjectTypeResponse::setIsSupportColumnMapping(bool value)
{
    isSupportColumnMapping_ = value;
    isSupportColumnMappingIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isSupportColumnMappingIsSet() const
{
    return isSupportColumnMappingIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisSupportColumnMapping()
{
    isSupportColumnMappingIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsDatabaseSupportSearch() const
{
    return isDatabaseSupportSearch_;
}

void ShowSupportObjectTypeResponse::setIsDatabaseSupportSearch(bool value)
{
    isDatabaseSupportSearch_ = value;
    isDatabaseSupportSearchIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isDatabaseSupportSearchIsSet() const
{
    return isDatabaseSupportSearchIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisDatabaseSupportSearch()
{
    isDatabaseSupportSearchIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsSchemaSupportSearch() const
{
    return isSchemaSupportSearch_;
}

void ShowSupportObjectTypeResponse::setIsSchemaSupportSearch(bool value)
{
    isSchemaSupportSearch_ = value;
    isSchemaSupportSearchIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isSchemaSupportSearchIsSet() const
{
    return isSchemaSupportSearchIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisSchemaSupportSearch()
{
    isSchemaSupportSearchIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsTableSupportSearch() const
{
    return isTableSupportSearch_;
}

void ShowSupportObjectTypeResponse::setIsTableSupportSearch(bool value)
{
    isTableSupportSearch_ = value;
    isTableSupportSearchIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isTableSupportSearchIsSet() const
{
    return isTableSupportSearchIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisTableSupportSearch()
{
    isTableSupportSearchIsSet_ = false;
}

std::string ShowSupportObjectTypeResponse::getFileSize() const
{
    return fileSize_;
}

void ShowSupportObjectTypeResponse::setFileSize(const std::string& value)
{
    fileSize_ = value;
    fileSizeIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::fileSizeIsSet() const
{
    return fileSizeIsSet_;
}

void ShowSupportObjectTypeResponse::unsetfileSize()
{
    fileSizeIsSet_ = false;
}

std::string ShowSupportObjectTypeResponse::getPreviousSelect() const
{
    return previousSelect_;
}

void ShowSupportObjectTypeResponse::setPreviousSelect(const std::string& value)
{
    previousSelect_ = value;
    previousSelectIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::previousSelectIsSet() const
{
    return previousSelectIsSet_;
}

void ShowSupportObjectTypeResponse::unsetpreviousSelect()
{
    previousSelectIsSet_ = false;
}

std::string ShowSupportObjectTypeResponse::getImportLevel() const
{
    return importLevel_;
}

void ShowSupportObjectTypeResponse::setImportLevel(const std::string& value)
{
    importLevel_ = value;
    importLevelIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::importLevelIsSet() const
{
    return importLevelIsSet_;
}

void ShowSupportObjectTypeResponse::unsetimportLevel()
{
    importLevelIsSet_ = false;
}

bool ShowSupportObjectTypeResponse::isIsImportCloumn() const
{
    return isImportCloumn_;
}

void ShowSupportObjectTypeResponse::setIsImportCloumn(bool value)
{
    isImportCloumn_ = value;
    isImportCloumnIsSet_ = true;
}

bool ShowSupportObjectTypeResponse::isImportCloumnIsSet() const
{
    return isImportCloumnIsSet_;
}

void ShowSupportObjectTypeResponse::unsetisImportCloumn()
{
    isImportCloumnIsSet_ = false;
}

}
}
}
}
}


