

#include "huaweicloud/modelarts/v1/model/NetworkMetadataAnnotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkMetadataAnnotations::NetworkMetadataAnnotations()
{
    osModelartsDescription_ = "";
    osModelartsDescriptionIsSet_ = false;
}

NetworkMetadataAnnotations::~NetworkMetadataAnnotations() = default;

void NetworkMetadataAnnotations::validate()
{
}

web::json::value NetworkMetadataAnnotations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osModelartsDescriptionIsSet_) {
        val[utility::conversions::to_string_t("os.modelarts/description")] = ModelBase::toJson(osModelartsDescription_);
    }

    return val;
}
bool NetworkMetadataAnnotations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os.modelarts/description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os.modelarts/description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsModelartsDescription(refVal);
        }
    }
    return ok;
}


std::string NetworkMetadataAnnotations::getOsModelartsDescription() const
{
    return osModelartsDescription_;
}

void NetworkMetadataAnnotations::setOsModelartsDescription(const std::string& value)
{
    osModelartsDescription_ = value;
    osModelartsDescriptionIsSet_ = true;
}

bool NetworkMetadataAnnotations::osModelartsDescriptionIsSet() const
{
    return osModelartsDescriptionIsSet_;
}

void NetworkMetadataAnnotations::unsetosModelartsDescription()
{
    osModelartsDescriptionIsSet_ = false;
}

}
}
}
}
}


