

#include "huaweicloud/meeting/v1/model/UpdateMaterialRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateMaterialRequestDTO::UpdateMaterialRequestDTO()
{
    materialName_ = "";
    materialNameIsSet_ = false;
}

UpdateMaterialRequestDTO::~UpdateMaterialRequestDTO() = default;

void UpdateMaterialRequestDTO::validate()
{
}

web::json::value UpdateMaterialRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(materialNameIsSet_) {
        val[utility::conversions::to_string_t("materialName")] = ModelBase::toJson(materialName_);
    }

    return val;
}
bool UpdateMaterialRequestDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("materialName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("materialName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaterialName(refVal);
        }
    }
    return ok;
}


std::string UpdateMaterialRequestDTO::getMaterialName() const
{
    return materialName_;
}

void UpdateMaterialRequestDTO::setMaterialName(const std::string& value)
{
    materialName_ = value;
    materialNameIsSet_ = true;
}

bool UpdateMaterialRequestDTO::materialNameIsSet() const
{
    return materialNameIsSet_;
}

void UpdateMaterialRequestDTO::unsetmaterialName()
{
    materialNameIsSet_ = false;
}

}
}
}
}
}


