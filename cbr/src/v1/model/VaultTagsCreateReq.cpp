

#include "huaweicloud/cbr/v1/model/VaultTagsCreateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




VaultTagsCreateReq::VaultTagsCreateReq()
{
    tagIsSet_ = false;
}

VaultTagsCreateReq::~VaultTagsCreateReq() = default;

void VaultTagsCreateReq::validate()
{
}

web::json::value VaultTagsCreateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}

bool VaultTagsCreateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            Tag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}

Tag VaultTagsCreateReq::getTag() const
{
    return tag_;
}

void VaultTagsCreateReq::setTag(const Tag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool VaultTagsCreateReq::tagIsSet() const
{
    return tagIsSet_;
}

void VaultTagsCreateReq::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


