

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFlavorsResponse::ListFlavorsResponse()
{
    flavorsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListFlavorsResponse::~ListFlavorsResponse() = default;

void ListFlavorsResponse::validate()
{
}

web::json::value ListFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<Flavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<Flavor>& ListFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListFlavorsResponse::setFlavors(const std::vector<Flavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

int32_t ListFlavorsResponse::getTotal() const
{
    return total_;
}

void ListFlavorsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFlavorsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFlavorsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


