

#include "huaweicloud/iotda/v5/model/OtaModuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




OtaModuleInfo::OtaModuleInfo()
{
    moduleId_ = "";
    moduleIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    productName_ = "";
    productNameIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

OtaModuleInfo::~OtaModuleInfo() = default;

void OtaModuleInfo::validate()
{
}

web::json::value OtaModuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(productNameIsSet_) {
        val[utility::conversions::to_string_t("product_name")] = ModelBase::toJson(productName_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(aliasNameIsSet_) {
        val[utility::conversions::to_string_t("alias_name")] = ModelBase::toJson(aliasName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool OtaModuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string OtaModuleInfo::getModuleId() const
{
    return moduleId_;
}

void OtaModuleInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool OtaModuleInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void OtaModuleInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string OtaModuleInfo::getAppId() const
{
    return appId_;
}

void OtaModuleInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool OtaModuleInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void OtaModuleInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string OtaModuleInfo::getProductId() const
{
    return productId_;
}

void OtaModuleInfo::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool OtaModuleInfo::productIdIsSet() const
{
    return productIdIsSet_;
}

void OtaModuleInfo::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string OtaModuleInfo::getProductName() const
{
    return productName_;
}

void OtaModuleInfo::setProductName(const std::string& value)
{
    productName_ = value;
    productNameIsSet_ = true;
}

bool OtaModuleInfo::productNameIsSet() const
{
    return productNameIsSet_;
}

void OtaModuleInfo::unsetproductName()
{
    productNameIsSet_ = false;
}

std::string OtaModuleInfo::getModuleName() const
{
    return moduleName_;
}

void OtaModuleInfo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool OtaModuleInfo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void OtaModuleInfo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string OtaModuleInfo::getAliasName() const
{
    return aliasName_;
}

void OtaModuleInfo::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool OtaModuleInfo::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void OtaModuleInfo::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string OtaModuleInfo::getDescription() const
{
    return description_;
}

void OtaModuleInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OtaModuleInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OtaModuleInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OtaModuleInfo::getCreateTime() const
{
    return createTime_;
}

void OtaModuleInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool OtaModuleInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void OtaModuleInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


