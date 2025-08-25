

#include "huaweicloud/cce/v3/model/SnapshotTaskMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotTaskMetadata::SnapshotTaskMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
}

SnapshotTaskMetadata::~SnapshotTaskMetadata() = default;

void SnapshotTaskMetadata::validate()
{
}

web::json::value SnapshotTaskMetadata::toJson() const
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
bool SnapshotTaskMetadata::fromJson(const web::json::value& val)
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


std::string SnapshotTaskMetadata::getUid() const
{
    return uid_;
}

void SnapshotTaskMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool SnapshotTaskMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void SnapshotTaskMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string SnapshotTaskMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void SnapshotTaskMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool SnapshotTaskMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void SnapshotTaskMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string SnapshotTaskMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void SnapshotTaskMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool SnapshotTaskMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void SnapshotTaskMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


