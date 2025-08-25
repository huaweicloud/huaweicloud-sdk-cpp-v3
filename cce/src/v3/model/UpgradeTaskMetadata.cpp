

#include "huaweicloud/cce/v3/model/UpgradeTaskMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeTaskMetadata::UpgradeTaskMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
}

UpgradeTaskMetadata::~UpgradeTaskMetadata() = default;

void UpgradeTaskMetadata::validate()
{
}

web::json::value UpgradeTaskMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }

    return val;
}
bool UpgradeTaskMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    return ok;
}


std::string UpgradeTaskMetadata::getUid() const
{
    return uid_;
}

void UpgradeTaskMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool UpgradeTaskMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void UpgradeTaskMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string UpgradeTaskMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void UpgradeTaskMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool UpgradeTaskMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void UpgradeTaskMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string UpgradeTaskMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void UpgradeTaskMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool UpgradeTaskMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void UpgradeTaskMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


