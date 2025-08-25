

#include "huaweicloud/cce/v3/model/ExtensionScaleGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ExtensionScaleGroup::ExtensionScaleGroup()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

ExtensionScaleGroup::~ExtensionScaleGroup() = default;

void ExtensionScaleGroup::validate()
{
}

web::json::value ExtensionScaleGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool ExtensionScaleGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            ExtensionScaleGroupMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            ExtensionScaleGroupSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


ExtensionScaleGroupMetadata ExtensionScaleGroup::getMetadata() const
{
    return metadata_;
}

void ExtensionScaleGroup::setMetadata(const ExtensionScaleGroupMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ExtensionScaleGroup::metadataIsSet() const
{
    return metadataIsSet_;
}

void ExtensionScaleGroup::unsetmetadata()
{
    metadataIsSet_ = false;
}

ExtensionScaleGroupSpec ExtensionScaleGroup::getSpec() const
{
    return spec_;
}

void ExtensionScaleGroup::setSpec(const ExtensionScaleGroupSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ExtensionScaleGroup::specIsSet() const
{
    return specIsSet_;
}

void ExtensionScaleGroup::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


