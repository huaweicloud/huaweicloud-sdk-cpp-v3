

#include "huaweicloud/eip/v2/model/CreatePublicipTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipTagRequestBody::CreatePublicipTagRequestBody()
{
    tagIsSet_ = false;
}

CreatePublicipTagRequestBody::~CreatePublicipTagRequestBody() = default;

void CreatePublicipTagRequestBody::validate()
{
}

web::json::value CreatePublicipTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool CreatePublicipTagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            ResourceTagOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

ResourceTagOption CreatePublicipTagRequestBody::getTag() const
{
    return tag_;
}

void CreatePublicipTagRequestBody::setTag(const ResourceTagOption& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreatePublicipTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreatePublicipTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


