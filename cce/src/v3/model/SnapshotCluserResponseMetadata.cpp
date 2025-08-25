

#include "huaweicloud/cce/v3/model/SnapshotCluserResponseMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




SnapshotCluserResponseMetadata::SnapshotCluserResponseMetadata()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
}

SnapshotCluserResponseMetadata::~SnapshotCluserResponseMetadata() = default;

void SnapshotCluserResponseMetadata::validate()
{
}

web::json::value SnapshotCluserResponseMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }

    return val;
}
bool SnapshotCluserResponseMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    return ok;
}


std::string SnapshotCluserResponseMetadata::getApiVersion() const
{
    return apiVersion_;
}

void SnapshotCluserResponseMetadata::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool SnapshotCluserResponseMetadata::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void SnapshotCluserResponseMetadata::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string SnapshotCluserResponseMetadata::getKind() const
{
    return kind_;
}

void SnapshotCluserResponseMetadata::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool SnapshotCluserResponseMetadata::kindIsSet() const
{
    return kindIsSet_;
}

void SnapshotCluserResponseMetadata::unsetkind()
{
    kindIsSet_ = false;
}

}
}
}
}
}


