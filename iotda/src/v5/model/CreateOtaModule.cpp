

#include "huaweicloud/iotda/v5/model/CreateOtaModule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateOtaModule::CreateOtaModule()
{
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    aliasName_ = "";
    aliasNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CreateOtaModule::~CreateOtaModule() = default;

void CreateOtaModule::validate()
{
}

web::json::value CreateOtaModule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
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

    return val;
}
bool CreateOtaModule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string CreateOtaModule::getAppId() const
{
    return appId_;
}

void CreateOtaModule::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool CreateOtaModule::appIdIsSet() const
{
    return appIdIsSet_;
}

void CreateOtaModule::unsetappId()
{
    appIdIsSet_ = false;
}

std::string CreateOtaModule::getProductId() const
{
    return productId_;
}

void CreateOtaModule::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool CreateOtaModule::productIdIsSet() const
{
    return productIdIsSet_;
}

void CreateOtaModule::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string CreateOtaModule::getModuleName() const
{
    return moduleName_;
}

void CreateOtaModule::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool CreateOtaModule::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void CreateOtaModule::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string CreateOtaModule::getAliasName() const
{
    return aliasName_;
}

void CreateOtaModule::setAliasName(const std::string& value)
{
    aliasName_ = value;
    aliasNameIsSet_ = true;
}

bool CreateOtaModule::aliasNameIsSet() const
{
    return aliasNameIsSet_;
}

void CreateOtaModule::unsetaliasName()
{
    aliasNameIsSet_ = false;
}

std::string CreateOtaModule::getDescription() const
{
    return description_;
}

void CreateOtaModule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateOtaModule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateOtaModule::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


