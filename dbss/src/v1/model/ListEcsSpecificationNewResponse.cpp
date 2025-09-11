

#include "huaweicloud/dbss/v1/model/ListEcsSpecificationNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListEcsSpecificationNewResponse::ListEcsSpecificationNewResponse()
{
    specificationIsSet_ = false;
}

ListEcsSpecificationNewResponse::~ListEcsSpecificationNewResponse() = default;

void ListEcsSpecificationNewResponse::validate()
{
}

web::json::value ListEcsSpecificationNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }

    return val;
}
bool ListEcsSpecificationNewResponse::fromJson(const web::json::value& val)
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


std::vector<EcsSpecificationBean>& ListEcsSpecificationNewResponse::getSpecification()
{
    return specification_;
}

void ListEcsSpecificationNewResponse::setSpecification(const std::vector<EcsSpecificationBean>& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool ListEcsSpecificationNewResponse::specificationIsSet() const
{
    return specificationIsSet_;
}

void ListEcsSpecificationNewResponse::unsetspecification()
{
    specificationIsSet_ = false;
}

}
}
}
}
}


