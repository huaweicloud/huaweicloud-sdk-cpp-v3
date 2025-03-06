

#include "huaweicloud/gaussdbfornosql/v3/model/ShowQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowQuotasRequest::ShowQuotasRequest()
{
    datastoreType_ = "";
    datastoreTypeIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    productType_ = "";
    productTypeIsSet_ = false;
}

ShowQuotasRequest::~ShowQuotasRequest() = default;

void ShowQuotasRequest::validate()
{
}

web::json::value ShowQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreTypeIsSet_) {
        val[utility::conversions::to_string_t("datastore_type")] = ModelBase::toJson(datastoreType_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(productTypeIsSet_) {
        val[utility::conversions::to_string_t("product_type")] = ModelBase::toJson(productType_);
    }

    return val;
}
bool ShowQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastore_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductType(refVal);
        }
    }
    return ok;
}


std::string ShowQuotasRequest::getDatastoreType() const
{
    return datastoreType_;
}

void ShowQuotasRequest::setDatastoreType(const std::string& value)
{
    datastoreType_ = value;
    datastoreTypeIsSet_ = true;
}

bool ShowQuotasRequest::datastoreTypeIsSet() const
{
    return datastoreTypeIsSet_;
}

void ShowQuotasRequest::unsetdatastoreType()
{
    datastoreTypeIsSet_ = false;
}

std::string ShowQuotasRequest::getMode() const
{
    return mode_;
}

void ShowQuotasRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ShowQuotasRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ShowQuotasRequest::unsetmode()
{
    modeIsSet_ = false;
}

std::string ShowQuotasRequest::getProductType() const
{
    return productType_;
}

void ShowQuotasRequest::setProductType(const std::string& value)
{
    productType_ = value;
    productTypeIsSet_ = true;
}

bool ShowQuotasRequest::productTypeIsSet() const
{
    return productTypeIsSet_;
}

void ShowQuotasRequest::unsetproductType()
{
    productTypeIsSet_ = false;
}

}
}
}
}
}


