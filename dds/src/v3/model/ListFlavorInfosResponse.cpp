

#include "huaweicloud/dds/v3/model/ListFlavorInfosResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListFlavorInfosResponse::ListFlavorInfosResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    flavorsIsSet_ = false;
}

ListFlavorInfosResponse::~ListFlavorInfosResponse() = default;

void ListFlavorInfosResponse::validate()
{
}

web::json::value ListFlavorInfosResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}

bool ListFlavorInfosResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<FlavorInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}

int32_t ListFlavorInfosResponse::getTotalCount() const
{
    return totalCount_;
}

void ListFlavorInfosResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListFlavorInfosResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListFlavorInfosResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<FlavorInfo>& ListFlavorInfosResponse::getFlavors()
{
    return flavors_;
}

void ListFlavorInfosResponse::setFlavors(const std::vector<FlavorInfo>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ListFlavorInfosResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ListFlavorInfosResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


