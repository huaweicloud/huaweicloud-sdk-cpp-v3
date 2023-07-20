

#include "huaweicloud/gaussdbfornosql/v3/model/OptionalFlavorsInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




OptionalFlavorsInfo::OptionalFlavorsInfo()
{
    listIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

OptionalFlavorsInfo::~OptionalFlavorsInfo() = default;

void OptionalFlavorsInfo::validate()
{
}

web::json::value OptionalFlavorsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}

bool OptionalFlavorsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<ComputeFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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

std::vector<ComputeFlavor>& OptionalFlavorsInfo::getList()
{
    return list_;
}

void OptionalFlavorsInfo::setList(const std::vector<ComputeFlavor>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool OptionalFlavorsInfo::listIsSet() const
{
    return listIsSet_;
}

void OptionalFlavorsInfo::unsetlist()
{
    listIsSet_ = false;
}

int32_t OptionalFlavorsInfo::getTotalCount() const
{
    return totalCount_;
}

void OptionalFlavorsInfo::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool OptionalFlavorsInfo::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void OptionalFlavorsInfo::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


