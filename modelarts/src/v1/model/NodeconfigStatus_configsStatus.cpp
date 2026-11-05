

#include "huaweicloud/modelarts/v1/model/NodeconfigStatus_configsStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigStatus_configsStatus::NodeconfigStatus_configsStatus()
{
    imageWarmUpIsSet_ = false;
}

NodeconfigStatus_configsStatus::~NodeconfigStatus_configsStatus() = default;

void NodeconfigStatus_configsStatus::validate()
{
}

web::json::value NodeconfigStatus_configsStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageWarmUpIsSet_) {
        val[utility::conversions::to_string_t("image_warm_up")] = ModelBase::toJson(imageWarmUp_);
    }

    return val;
}
bool NodeconfigStatus_configsStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_warm_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_warm_up"));
        if(!fieldValue.is_null())
        {
            NodeconfigStatus_configsStatus_image_warm_up refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWarmUp(refVal);
        }
    }
    return ok;
}


NodeconfigStatus_configsStatus_image_warm_up NodeconfigStatus_configsStatus::getImageWarmUp() const
{
    return imageWarmUp_;
}

void NodeconfigStatus_configsStatus::setImageWarmUp(const NodeconfigStatus_configsStatus_image_warm_up& value)
{
    imageWarmUp_ = value;
    imageWarmUpIsSet_ = true;
}

bool NodeconfigStatus_configsStatus::imageWarmUpIsSet() const
{
    return imageWarmUpIsSet_;
}

void NodeconfigStatus_configsStatus::unsetimageWarmUp()
{
    imageWarmUpIsSet_ = false;
}

}
}
}
}
}


