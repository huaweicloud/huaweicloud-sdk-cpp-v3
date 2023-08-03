

#include "huaweicloud/rds/v3/model/ListEngineFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListEngineFlavorsResponse::ListEngineFlavorsResponse()
{
    optionalFlavorsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListEngineFlavorsResponse::~ListEngineFlavorsResponse() = default;

void ListEngineFlavorsResponse::validate()
{
}

web::json::value ListEngineFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(optionalFlavorsIsSet_) {
        val[utility::conversions::to_string_t("optional_flavors")] = ModelBase::toJson(optionalFlavors_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool ListEngineFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("optional_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("optional_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<EngineFlavorData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptionalFlavors(refVal);
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

std::vector<EngineFlavorData>& ListEngineFlavorsResponse::getOptionalFlavors()
{
    return optionalFlavors_;
}

void ListEngineFlavorsResponse::setOptionalFlavors(const std::vector<EngineFlavorData>& value)
{
    optionalFlavors_ = value;
    optionalFlavorsIsSet_ = true;
}

bool ListEngineFlavorsResponse::optionalFlavorsIsSet() const
{
    return optionalFlavorsIsSet_;
}

void ListEngineFlavorsResponse::unsetoptionalFlavors()
{
    optionalFlavorsIsSet_ = false;
}

int32_t ListEngineFlavorsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListEngineFlavorsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListEngineFlavorsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListEngineFlavorsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


