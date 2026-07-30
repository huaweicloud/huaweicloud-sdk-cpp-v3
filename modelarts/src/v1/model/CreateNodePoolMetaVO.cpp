

#include "huaweicloud/modelarts/v1/model/CreateNodePoolMetaVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNodePoolMetaVO::CreateNodePoolMetaVO()
{
    name_ = "";
    nameIsSet_ = false;
    annotationsIsSet_ = false;
}

CreateNodePoolMetaVO::~CreateNodePoolMetaVO() = default;

void CreateNodePoolMetaVO::validate()
{
}

web::json::value CreateNodePoolMetaVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool CreateNodePoolMetaVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            CreateNodePoolAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string CreateNodePoolMetaVO::getName() const
{
    return name_;
}

void CreateNodePoolMetaVO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateNodePoolMetaVO::nameIsSet() const
{
    return nameIsSet_;
}

void CreateNodePoolMetaVO::unsetname()
{
    nameIsSet_ = false;
}

CreateNodePoolAnnotations CreateNodePoolMetaVO::getAnnotations() const
{
    return annotations_;
}

void CreateNodePoolMetaVO::setAnnotations(const CreateNodePoolAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool CreateNodePoolMetaVO::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void CreateNodePoolMetaVO::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


