

#include "huaweicloud/vpc/v2/model/CreateSubnetTagRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetTagRequestBody::CreateSubnetTagRequestBody()
{
    tagIsSet_ = false;
}

CreateSubnetTagRequestBody::~CreateSubnetTagRequestBody() = default;

void CreateSubnetTagRequestBody::validate()
{
}

web::json::value CreateSubnetTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool CreateSubnetTagRequestBody::fromJson(const web::json::value& val)
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


ResourceTag CreateSubnetTagRequestBody::getTag() const
{
    return tag_;
}

void CreateSubnetTagRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateSubnetTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateSubnetTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


