

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceAddTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceAddTagsRequestBody::ProtectedInstanceAddTagsRequestBody()
{
    tagIsSet_ = false;
}

ProtectedInstanceAddTagsRequestBody::~ProtectedInstanceAddTagsRequestBody() = default;

void ProtectedInstanceAddTagsRequestBody::validate()
{
}

web::json::value ProtectedInstanceAddTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool ProtectedInstanceAddTagsRequestBody::fromJson(const web::json::value& val)
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


ResourceTag ProtectedInstanceAddTagsRequestBody::getTag() const
{
    return tag_;
}

void ProtectedInstanceAddTagsRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ProtectedInstanceAddTagsRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void ProtectedInstanceAddTagsRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


