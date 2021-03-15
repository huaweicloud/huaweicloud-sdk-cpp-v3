

#include "huaweicloud/ims/v2/model/AddImageTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




AddImageTagRequestBody::AddImageTagRequestBody()
{
    tagIsSet_ = false;
}

AddImageTagRequestBody::~AddImageTagRequestBody() = default;

void AddImageTagRequestBody::validate()
{
}

web::json::value AddImageTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool AddImageTagRequestBody::fromJson(const web::json::value& val)
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


ResourceTag AddImageTagRequestBody::getTag() const
{
    return tag_;
}

void AddImageTagRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool AddImageTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void AddImageTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


