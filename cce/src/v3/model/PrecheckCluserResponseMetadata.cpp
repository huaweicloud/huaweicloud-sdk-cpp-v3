

#include "huaweicloud/cce/v3/model/PrecheckCluserResponseMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckCluserResponseMetadata::PrecheckCluserResponseMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
}

PrecheckCluserResponseMetadata::~PrecheckCluserResponseMetadata() = default;

void PrecheckCluserResponseMetadata::validate()
{
}

web::json::value PrecheckCluserResponseMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }

    return val;
}
bool PrecheckCluserResponseMetadata::fromJson(const web::json::value& val)
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


std::string PrecheckCluserResponseMetadata::getUid() const
{
    return uid_;
}

void PrecheckCluserResponseMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool PrecheckCluserResponseMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void PrecheckCluserResponseMetadata::unsetuid()
{
    uidIsSet_ = false;
}

}
}
}
}
}


