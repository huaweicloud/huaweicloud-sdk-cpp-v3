

#include "huaweicloud/modelarts/v1/model/PoolMetadataUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolMetadataUpdate::PoolMetadataUpdate()
{
    annotationsIsSet_ = false;
}

PoolMetadataUpdate::~PoolMetadataUpdate() = default;

void PoolMetadataUpdate::validate()
{
}

web::json::value PoolMetadataUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PoolMetadataUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            PoolMetadataUpdate_annotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


PoolMetadataUpdate_annotations PoolMetadataUpdate::getAnnotations() const
{
    return annotations_;
}

void PoolMetadataUpdate::setAnnotations(const PoolMetadataUpdate_annotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PoolMetadataUpdate::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PoolMetadataUpdate::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


