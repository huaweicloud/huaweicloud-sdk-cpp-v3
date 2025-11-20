

#include "huaweicloud/metastudio/v1/model/BillResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BillResources::BillResources()
{
    resourceTypeIsSet_ = false;
    resourceNums_ = 0;
    resourceNumsIsSet_ = false;
}

BillResources::~BillResources() = default;

void BillResources::validate()
{
}

web::json::value BillResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceNumsIsSet_) {
        val[utility::conversions::to_string_t("resource_nums")] = ModelBase::toJson(resourceNums_);
    }

    return val;
}
bool BillResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            BillResourceType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceNums(refVal);
        }
    }
    return ok;
}


BillResourceType BillResources::getResourceType() const
{
    return resourceType_;
}

void BillResources::setResourceType(const BillResourceType& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BillResources::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BillResources::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

int32_t BillResources::getResourceNums() const
{
    return resourceNums_;
}

void BillResources::setResourceNums(int32_t value)
{
    resourceNums_ = value;
    resourceNumsIsSet_ = true;
}

bool BillResources::resourceNumsIsSet() const
{
    return resourceNumsIsSet_;
}

void BillResources::unsetresourceNums()
{
    resourceNumsIsSet_ = false;
}

}
}
}
}
}


