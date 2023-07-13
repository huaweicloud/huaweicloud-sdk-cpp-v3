

#include "huaweicloud/csms/v1/model/CreateSecretTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretTagRequestBody::CreateSecretTagRequestBody()
{
    tagIsSet_ = false;
}

CreateSecretTagRequestBody::~CreateSecretTagRequestBody() = default;

void CreateSecretTagRequestBody::validate()
{
}

web::json::value CreateSecretTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool CreateSecretTagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            TagItem refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

TagItem CreateSecretTagRequestBody::getTag() const
{
    return tag_;
}

void CreateSecretTagRequestBody::setTag(const TagItem& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateSecretTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateSecretTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


