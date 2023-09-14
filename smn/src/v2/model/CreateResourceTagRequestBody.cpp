

#include "huaweicloud/smn/v2/model/CreateResourceTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateResourceTagRequestBody::CreateResourceTagRequestBody()
{
    tagIsSet_ = false;
}

CreateResourceTagRequestBody::~CreateResourceTagRequestBody() = default;

void CreateResourceTagRequestBody::validate()
{
}

web::json::value CreateResourceTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool CreateResourceTagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            ResourceTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

ResourceTag CreateResourceTagRequestBody::getTag() const
{
    return tag_;
}

void CreateResourceTagRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateResourceTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateResourceTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


