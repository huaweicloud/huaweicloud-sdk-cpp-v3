

#include "huaweicloud/dbss/v1/model/ListEcsSpecificationNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListEcsSpecificationNewRequest::ListEcsSpecificationNewRequest()
{
    imageBusinessType_ = 0;
    imageBusinessTypeIsSet_ = false;
}

ListEcsSpecificationNewRequest::~ListEcsSpecificationNewRequest() = default;

void ListEcsSpecificationNewRequest::validate()
{
}

web::json::value ListEcsSpecificationNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageBusinessTypeIsSet_) {
        val[utility::conversions::to_string_t("image_business_type")] = ModelBase::toJson(imageBusinessType_);
    }

    return val;
}
bool ListEcsSpecificationNewRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_business_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageBusinessType(refVal);
        }
    }
    return ok;
}


int32_t ListEcsSpecificationNewRequest::getImageBusinessType() const
{
    return imageBusinessType_;
}

void ListEcsSpecificationNewRequest::setImageBusinessType(int32_t value)
{
    imageBusinessType_ = value;
    imageBusinessTypeIsSet_ = true;
}

bool ListEcsSpecificationNewRequest::imageBusinessTypeIsSet() const
{
    return imageBusinessTypeIsSet_;
}

void ListEcsSpecificationNewRequest::unsetimageBusinessType()
{
    imageBusinessTypeIsSet_ = false;
}

}
}
}
}
}


