

#include "huaweicloud/iotda/v5/model/AddFunctionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddFunctionsResponse::AddFunctionsResponse()
{
    appId_ = "";
    appIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    functionId_ = "";
    functionIdIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

AddFunctionsResponse::~AddFunctionsResponse() = default;

void AddFunctionsResponse::validate()
{
}

web::json::value AddFunctionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(functionIdIsSet_) {
        val[utility::conversions::to_string_t("function_id")] = ModelBase::toJson(functionId_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AddFunctionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("function_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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


std::string AddFunctionsResponse::getAppId() const
{
    return appId_;
}

void AddFunctionsResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AddFunctionsResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void AddFunctionsResponse::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AddFunctionsResponse::getProductId() const
{
    return productId_;
}

void AddFunctionsResponse::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool AddFunctionsResponse::productIdIsSet() const
{
    return productIdIsSet_;
}

void AddFunctionsResponse::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string AddFunctionsResponse::getFunctionId() const
{
    return functionId_;
}

void AddFunctionsResponse::setFunctionId(const std::string& value)
{
    functionId_ = value;
    functionIdIsSet_ = true;
}

bool AddFunctionsResponse::functionIdIsSet() const
{
    return functionIdIsSet_;
}

void AddFunctionsResponse::unsetfunctionId()
{
    functionIdIsSet_ = false;
}

std::string AddFunctionsResponse::getUrn() const
{
    return urn_;
}

void AddFunctionsResponse::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool AddFunctionsResponse::urnIsSet() const
{
    return urnIsSet_;
}

void AddFunctionsResponse::unseturn()
{
    urnIsSet_ = false;
}

std::string AddFunctionsResponse::getDescription() const
{
    return description_;
}

void AddFunctionsResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddFunctionsResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddFunctionsResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string AddFunctionsResponse::getCreateTime() const
{
    return createTime_;
}

void AddFunctionsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AddFunctionsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AddFunctionsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


