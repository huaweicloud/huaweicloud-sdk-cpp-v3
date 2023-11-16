

#include "huaweicloud/aad/v1/model/ListPackageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListPackageResponse::ListPackageResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

ListPackageResponse::~ListPackageResponse() = default;

void ListPackageResponse::validate()
{
}

web::json::value ListPackageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListPackageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<PackageResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t ListPackageResponse::getTotal() const
{
    return total_;
}

void ListPackageResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPackageResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPackageResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PackageResponse>& ListPackageResponse::getItems()
{
    return items_;
}

void ListPackageResponse::setItems(const std::vector<PackageResponse>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPackageResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPackageResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


