

#include "huaweicloud/modelarts/v1/model/PatchNodePoolMetaVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PatchNodePoolMetaVO::PatchNodePoolMetaVO()
{
    annotationsIsSet_ = false;
}

PatchNodePoolMetaVO::~PatchNodePoolMetaVO() = default;

void PatchNodePoolMetaVO::validate()
{
}

web::json::value PatchNodePoolMetaVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PatchNodePoolMetaVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            PatchNodePoolAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


PatchNodePoolAnnotations PatchNodePoolMetaVO::getAnnotations() const
{
    return annotations_;
}

void PatchNodePoolMetaVO::setAnnotations(const PatchNodePoolAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PatchNodePoolMetaVO::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PatchNodePoolMetaVO::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


