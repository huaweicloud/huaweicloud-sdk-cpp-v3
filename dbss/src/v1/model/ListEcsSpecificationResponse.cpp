

#include "huaweicloud/dbss/v1/model/ListEcsSpecificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListEcsSpecificationResponse::ListEcsSpecificationResponse()
{
    specificationIsSet_ = false;
}

ListEcsSpecificationResponse::~ListEcsSpecificationResponse() = default;

void ListEcsSpecificationResponse::validate()
{
}

web::json::value ListEcsSpecificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }

    return val;
}
bool ListEcsSpecificationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::vector<EcsSpecificationBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
        }
    }
    return ok;
}


std::vector<EcsSpecificationBean>& ListEcsSpecificationResponse::getSpecification()
{
    return specification_;
}

void ListEcsSpecificationResponse::setSpecification(const std::vector<EcsSpecificationBean>& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ListEcsSpecificationResponse::specificationIsSet() const
{
    return specificationIsSet_;
}

void ListEcsSpecificationResponse::unsetspecification()
{
    specificationIsSet_ = false;
}

}
}
}
}
}


