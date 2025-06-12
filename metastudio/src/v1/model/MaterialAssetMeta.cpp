

#include "huaweicloud/metastudio/v1/model/MaterialAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MaterialAssetMeta::MaterialAssetMeta()
{
    componentsIsSet_ = false;
}

MaterialAssetMeta::~MaterialAssetMeta() = default;

void MaterialAssetMeta::validate()
{
}

web::json::value MaterialAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }

    return val;
}
bool MaterialAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<MaterialComponentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    return ok;
}


std::vector<MaterialComponentInfo>& MaterialAssetMeta::getComponents()
{
    return components_;
}

void MaterialAssetMeta::setComponents(const std::vector<MaterialComponentInfo>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool MaterialAssetMeta::componentsIsSet() const
{
    return componentsIsSet_;
}

void MaterialAssetMeta::unsetcomponents()
{
    componentsIsSet_ = false;
}

}
}
}
}
}


