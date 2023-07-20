

#include "huaweicloud/gaussdbfornosql/v3/model/ListFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListFlavorsResponse::ListFlavorsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    flavorsIsSet_ = false;
}

ListFlavorsResponse::~ListFlavorsResponse() = default;

void ListFlavorsResponse::validate()
{
}

web::json::value ListFlavorsResponse::toJson() const
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

bool ListFlavorsResponse::fromJson(const web::json::value& val)
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
            std::vector<ListFlavorsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}

int32_t ListFlavorsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListFlavorsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListFlavorsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListFlavorsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ListFlavorsResult>& ListFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ListFlavorsResponse::setFlavors(const std::vector<ListFlavorsResult>& value)
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

}
}
}
}
}


