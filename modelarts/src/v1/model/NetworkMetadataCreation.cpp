

#include "huaweicloud/modelarts/v1/model/NetworkMetadataCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkMetadataCreation::NetworkMetadataCreation()
{
    labelsIsSet_ = false;
}

NetworkMetadataCreation::~NetworkMetadataCreation() = default;

void NetworkMetadataCreation::validate()
{
}

web::json::value NetworkMetadataCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool NetworkMetadataCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            NetworkMetadataLabels refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


NetworkMetadataLabels NetworkMetadataCreation::getLabels() const
{
    return labels_;
}

void NetworkMetadataCreation::setLabels(const NetworkMetadataLabels& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool NetworkMetadataCreation::labelsIsSet() const
{
    return labelsIsSet_;
}

void NetworkMetadataCreation::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


