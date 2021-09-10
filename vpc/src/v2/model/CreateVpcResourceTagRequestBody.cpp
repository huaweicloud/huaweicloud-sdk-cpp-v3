

#include "huaweicloud/vpc/v2/model/CreateVpcResourceTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcResourceTagRequestBody::CreateVpcResourceTagRequestBody()
{
    tagIsSet_ = false;
}

CreateVpcResourceTagRequestBody::~CreateVpcResourceTagRequestBody() = default;

void CreateVpcResourceTagRequestBody::validate()
{
}

web::json::value CreateVpcResourceTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool CreateVpcResourceTagRequestBody::fromJson(const web::json::value& val)
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


ResourceTag CreateVpcResourceTagRequestBody::getTag() const
{
    return tag_;
}

void CreateVpcResourceTagRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateVpcResourceTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateVpcResourceTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


