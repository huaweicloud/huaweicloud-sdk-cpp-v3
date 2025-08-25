

#include "huaweicloud/cce/v3/model/NodePoolUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolUpdate::NodePoolUpdate()
{
    metadataIsSet_ = false;
    specIsSet_ = false;
}

NodePoolUpdate::~NodePoolUpdate() = default;

void NodePoolUpdate::validate()
{
}

web::json::value NodePoolUpdate::toJson() const
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
bool NodePoolUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NodePoolMetadataUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodePoolSpecUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


NodePoolMetadataUpdate NodePoolUpdate::getMetadata() const
{
    return metadata_;
}

void NodePoolUpdate::setMetadata(const NodePoolMetadataUpdate& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NodePoolUpdate::metadataIsSet() const
{
    return metadataIsSet_;
}

void NodePoolUpdate::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpecUpdate NodePoolUpdate::getSpec() const
{
    return spec_;
}

void NodePoolUpdate::setSpec(const NodePoolSpecUpdate& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NodePoolUpdate::specIsSet() const
{
    return specIsSet_;
}

void NodePoolUpdate::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


