

#include "huaweicloud/organizations/v1/model/UntagResourceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UntagResourceReqBody::UntagResourceReqBody()
{
    tagKeysIsSet_ = false;
}

UntagResourceReqBody::~UntagResourceReqBody() = default;

void UntagResourceReqBody::validate()
{
}

web::json::value UntagResourceReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagKeysIsSet_) {
        val[utility::conversions::to_string_t("tag_keys")] = ModelBase::toJson(tagKeys_);
    }

    return val;
}
bool UntagResourceReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKeys(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UntagResourceReqBody::getTagKeys()
{
    return tagKeys_;
}

void UntagResourceReqBody::setTagKeys(const std::vector<std::string>& value)
{
    tagKeys_ = value;
    tagKeysIsSet_ = true;
}

bool UntagResourceReqBody::tagKeysIsSet() const
{
    return tagKeysIsSet_;
}

void UntagResourceReqBody::unsettagKeys()
{
    tagKeysIsSet_ = false;
}

}
}
}
}
}


