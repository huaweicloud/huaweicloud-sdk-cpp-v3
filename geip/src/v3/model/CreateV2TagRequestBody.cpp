

#include "huaweicloud/geip/v3/model/CreateV2TagRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateV2TagRequestBody::CreateV2TagRequestBody()
{
    tagIsSet_ = false;
}

CreateV2TagRequestBody::~CreateV2TagRequestBody() = default;

void CreateV2TagRequestBody::validate()
{
}

web::json::value CreateV2TagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool CreateV2TagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            CreateV2TagRequestBody_tag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


CreateV2TagRequestBody_tag CreateV2TagRequestBody::getTag() const
{
    return tag_;
}

void CreateV2TagRequestBody::setTag(const CreateV2TagRequestBody_tag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateV2TagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateV2TagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


