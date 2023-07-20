

#include "huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListAvailableFlavorsResponse::ListAvailableFlavorsResponse()
{
    flavorsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListAvailableFlavorsResponse::~ListAvailableFlavorsResponse() = default;

void ListAvailableFlavorsResponse::validate()
{
}

web::json::value ListAvailableFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListAvailableFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<AvailableFlavorInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}

std::vector<AvailableFlavorInfoResult>& ListAvailableFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListAvailableFlavorsResponse::setFlavors(const std::vector<AvailableFlavorInfoResult>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListAvailableFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListAvailableFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

int32_t ListAvailableFlavorsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListAvailableFlavorsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListAvailableFlavorsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListAvailableFlavorsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


