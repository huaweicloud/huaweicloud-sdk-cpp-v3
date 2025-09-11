

#include "huaweicloud/functiongraph/v2/model/ImportFunctionRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ImportFunctionRequestBody::ImportFunctionRequestBody()
{
    funcName_ = "";
    funcNameIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    fileType_ = "";
    fileTypeIsSet_ = false;
    fileCode_ = "";
    fileCodeIsSet_ = false;
    package_ = "";
    packageIsSet_ = false;
}

ImportFunctionRequestBody::~ImportFunctionRequestBody() = default;

void ImportFunctionRequestBody::validate()
{
}

web::json::value ImportFunctionRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(fileTypeIsSet_) {
        val[utility::conversions::to_string_t("file_type")] = ModelBase::toJson(fileType_);
    }
    if(fileCodeIsSet_) {
        val[utility::conversions::to_string_t("file_code")] = ModelBase::toJson(fileCode_);
    }
    if(packageIsSet_) {
        val[utility::conversions::to_string_t("package")] = ModelBase::toJson(package_);
    }

    return val;
}
bool ImportFunctionRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackage(refVal);
        }
    }
    return ok;
}


std::string ImportFunctionRequestBody::getFuncName() const
{
    return funcName_;
}

void ImportFunctionRequestBody::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ImportFunctionRequestBody::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ImportFunctionRequestBody::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ImportFunctionRequestBody::getFileName() const
{
    return fileName_;
}

void ImportFunctionRequestBody::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool ImportFunctionRequestBody::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void ImportFunctionRequestBody::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string ImportFunctionRequestBody::getFileType() const
{
    return fileType_;
}

void ImportFunctionRequestBody::setFileType(const std::string& value)
{
    fileType_ = value;
    fileTypeIsSet_ = true;
}

bool ImportFunctionRequestBody::fileTypeIsSet() const
{
    return fileTypeIsSet_;
}

void ImportFunctionRequestBody::unsetfileType()
{
    fileTypeIsSet_ = false;
}

std::string ImportFunctionRequestBody::getFileCode() const
{
    return fileCode_;
}

void ImportFunctionRequestBody::setFileCode(const std::string& value)
{
    fileCode_ = value;
    fileCodeIsSet_ = true;
}

bool ImportFunctionRequestBody::fileCodeIsSet() const
{
    return fileCodeIsSet_;
}

void ImportFunctionRequestBody::unsetfileCode()
{
    fileCodeIsSet_ = false;
}

std::string ImportFunctionRequestBody::getPackage() const
{
    return package_;
}

void ImportFunctionRequestBody::setPackage(const std::string& value)
{
    package_ = value;
    packageIsSet_ = true;
}

bool ImportFunctionRequestBody::packageIsSet() const
{
    return packageIsSet_;
}

void ImportFunctionRequestBody::unsetpackage()
{
    packageIsSet_ = false;
}

}
}
}
}
}


