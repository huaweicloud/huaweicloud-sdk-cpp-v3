

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupTagRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupTagRequestBody::CreateSecurityGroupTagRequestBody()
{
    tagIsSet_ = false;
}

CreateSecurityGroupTagRequestBody::~CreateSecurityGroupTagRequestBody() = default;

void CreateSecurityGroupTagRequestBody::validate()
{
}

web::json::value CreateSecurityGroupTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool CreateSecurityGroupTagRequestBody::fromJson(const web::json::value& val)
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


ResourceTag CreateSecurityGroupTagRequestBody::getTag() const
{
    return tag_;
}

void CreateSecurityGroupTagRequestBody::setTag(const ResourceTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateSecurityGroupTagRequestBody::tagIsSet() const
{
    return tagIsSet_;
}

void CreateSecurityGroupTagRequestBody::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


