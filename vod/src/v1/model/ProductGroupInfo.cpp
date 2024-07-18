

#include "huaweicloud/vod/v1/model/ProductGroupInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ProductGroupInfo::ProductGroupInfo()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    productsIsSet_ = false;
}

ProductGroupInfo::~ProductGroupInfo() = default;

void ProductGroupInfo::validate()
{
}

web::json::value ProductGroupInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(productsIsSet_) {
        val[utility::conversions::to_string_t("products")] = ModelBase::toJson(products_);
    }

    return val;
}
bool ProductGroupInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("products"));
        if(!fieldValue.is_null())
        {
            std::vector<ProductUrlInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProducts(refVal);
        }
    }
    return ok;
}


std::string ProductGroupInfo::getGroupId() const
{
    return groupId_;
}

void ProductGroupInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ProductGroupInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ProductGroupInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<ProductUrlInfo>& ProductGroupInfo::getProducts()
{
    return products_;
}

void ProductGroupInfo::setProducts(const std::vector<ProductUrlInfo>& value)
{
    products_ = value;
    productsIsSet_ = true;
}

bool ProductGroupInfo::productsIsSet() const
{
    return productsIsSet_;
}

void ProductGroupInfo::unsetproducts()
{
    productsIsSet_ = false;
}

}
}
}
}
}


