

#include "huaweicloud/modelarts/v1/model/WorkflowPoolOrder.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowPoolOrder::WorkflowPoolOrder()
{
    id_ = "";
    idIsSet_ = false;
    skuIsSet_ = false;
    skuCount_ = "";
    skuCountIsSet_ = false;
}

WorkflowPoolOrder::~WorkflowPoolOrder() = default;

void WorkflowPoolOrder::validate()
{
}

web::json::value WorkflowPoolOrder::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(skuIsSet_) {
        val[utility::conversions::to_string_t("sku")] = ModelBase::toJson(sku_);
    }
    if(skuCountIsSet_) {
        val[utility::conversions::to_string_t("sku_count")] = ModelBase::toJson(skuCount_);
    }

    return val;
}
bool WorkflowPoolOrder::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sku"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sku"));
        if(!fieldValue.is_null())
        {
            SkuInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSku(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sku_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sku_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkuCount(refVal);
        }
    }
    return ok;
}


std::string WorkflowPoolOrder::getId() const
{
    return id_;
}

void WorkflowPoolOrder::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkflowPoolOrder::idIsSet() const
{
    return idIsSet_;
}

void WorkflowPoolOrder::unsetid()
{
    idIsSet_ = false;
}

SkuInfo WorkflowPoolOrder::getSku() const
{
    return sku_;
}

void WorkflowPoolOrder::setSku(const SkuInfo& value)
{
    sku_ = value;
    skuIsSet_ = true;
}

bool WorkflowPoolOrder::skuIsSet() const
{
    return skuIsSet_;
}

void WorkflowPoolOrder::unsetsku()
{
    skuIsSet_ = false;
}

std::string WorkflowPoolOrder::getSkuCount() const
{
    return skuCount_;
}

void WorkflowPoolOrder::setSkuCount(const std::string& value)
{
    skuCount_ = value;
    skuCountIsSet_ = true;
}

bool WorkflowPoolOrder::skuCountIsSet() const
{
    return skuCountIsSet_;
}

void WorkflowPoolOrder::unsetskuCount()
{
    skuCountIsSet_ = false;
}

}
}
}
}
}


