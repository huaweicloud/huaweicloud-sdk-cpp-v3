

#include "huaweicloud/modelarts/v1/model/NetworkMetadataUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkMetadataUpdate::NetworkMetadataUpdate()
{
    annotationsIsSet_ = false;
}

NetworkMetadataUpdate::~NetworkMetadataUpdate() = default;

void NetworkMetadataUpdate::validate()
{
}

web::json::value NetworkMetadataUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool NetworkMetadataUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            NetworkMetadataAnnotations refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


NetworkMetadataAnnotations NetworkMetadataUpdate::getAnnotations() const
{
    return annotations_;
}

void NetworkMetadataUpdate::setAnnotations(const NetworkMetadataAnnotations& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool NetworkMetadataUpdate::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void NetworkMetadataUpdate::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


