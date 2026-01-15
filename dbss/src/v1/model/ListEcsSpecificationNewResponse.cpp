

#include "huaweicloud/dbss/v1/model/ListEcsSpecificationNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListEcsSpecificationNewResponse::ListEcsSpecificationNewResponse()
{
    specificationsIsSet_ = false;
}

ListEcsSpecificationNewResponse::~ListEcsSpecificationNewResponse() = default;

void ListEcsSpecificationNewResponse::validate()
{
}

web::json::value ListEcsSpecificationNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specificationsIsSet_) {
        val[utility::conversions::to_string_t("specifications")] = ModelBase::toJson(specifications_);
    }

    return val;
}
bool ListEcsSpecificationNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("specifications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specifications"));
        if(!fieldValue.is_null())
        {
            std::vector<EcsSpecificationBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecifications(refVal);
        }
    }
    return ok;
}


std::vector<EcsSpecificationBean>& ListEcsSpecificationNewResponse::getSpecifications()
{
    return specifications_;
}

void ListEcsSpecificationNewResponse::setSpecifications(const std::vector<EcsSpecificationBean>& value)
{
    specifications_ = value;
    specificationsIsSet_ = true;
}

bool ListEcsSpecificationNewResponse::specificationsIsSet() const
{
    return specificationsIsSet_;
}

void ListEcsSpecificationNewResponse::unsetspecifications()
{
    specificationsIsSet_ = false;
}

}
}
}
}
}


