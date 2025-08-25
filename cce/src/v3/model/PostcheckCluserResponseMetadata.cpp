

#include "huaweicloud/cce/v3/model/PostcheckCluserResponseMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PostcheckCluserResponseMetadata::PostcheckCluserResponseMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
}

PostcheckCluserResponseMetadata::~PostcheckCluserResponseMetadata() = default;

void PostcheckCluserResponseMetadata::validate()
{
}

web::json::value PostcheckCluserResponseMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }

    return val;
}
bool PostcheckCluserResponseMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    return ok;
}


std::string PostcheckCluserResponseMetadata::getUid() const
{
    return uid_;
}

void PostcheckCluserResponseMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool PostcheckCluserResponseMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void PostcheckCluserResponseMetadata::unsetuid()
{
    uidIsSet_ = false;
}

}
}
}
}
}


