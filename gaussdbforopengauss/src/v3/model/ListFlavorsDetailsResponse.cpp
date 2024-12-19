

#include "huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListFlavorsDetailsResponse::ListFlavorsDetailsResponse()
{
    flavorsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListFlavorsDetailsResponse::~ListFlavorsDetailsResponse() = default;

void ListFlavorsDetailsResponse::validate()
{
}

web::json::value ListFlavorsDetailsResponse::toJson() const
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
bool ListFlavorsDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<FlavorResult> refVal;
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


std::vector<FlavorResult>& ListFlavorsDetailsResponse::getFlavors()
{
    return flavors_;
}

void ListFlavorsDetailsResponse::setFlavors(const std::vector<FlavorResult>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListFlavorsDetailsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListFlavorsDetailsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

int32_t ListFlavorsDetailsResponse::getTotal() const
{
    return total_;
}

void ListFlavorsDetailsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListFlavorsDetailsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListFlavorsDetailsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


