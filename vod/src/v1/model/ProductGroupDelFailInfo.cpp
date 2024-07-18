

#include "huaweicloud/vod/v1/model/ProductGroupDelFailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ProductGroupDelFailInfo::ProductGroupDelFailInfo()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    productsIsSet_ = false;
}

ProductGroupDelFailInfo::~ProductGroupDelFailInfo() = default;

void ProductGroupDelFailInfo::validate()
{
}

web::json::value ProductGroupDelFailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(productsIsSet_) {
        val[utility::conversions::to_string_t("products")] = ModelBase::toJson(products_);
    }

    return val;
}
bool ProductGroupDelFailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("products"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductDelFailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProducts(refVal);
        }
    }
    return ok;
}


std::string ProductGroupDelFailInfo::getGroupId() const
{
    return groupId_;
}

void ProductGroupDelFailInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ProductGroupDelFailInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ProductGroupDelFailInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ProductGroupDelFailInfo::getFailReason() const
{
    return failReason_;
}

void ProductGroupDelFailInfo::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ProductGroupDelFailInfo::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ProductGroupDelFailInfo::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::vector<ProductDelFailInfo>& ProductGroupDelFailInfo::getProducts()
{
    return products_;
}

void ProductGroupDelFailInfo::setProducts(const std::vector<ProductDelFailInfo>& value)
{
    products_ = value;
    productsIsSet_ = true;
}

bool ProductGroupDelFailInfo::productsIsSet() const
{
    return productsIsSet_;
}

void ProductGroupDelFailInfo::unsetproducts()
{
    productsIsSet_ = false;
}

}
}
}
}
}


