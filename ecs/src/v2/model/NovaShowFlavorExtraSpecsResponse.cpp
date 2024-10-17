

#include "huaweicloud/ecs/v2/model/NovaShowFlavorExtraSpecsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowFlavorExtraSpecsResponse::NovaShowFlavorExtraSpecsResponse()
{
    extraSpecsIsSet_ = false;
}

NovaShowFlavorExtraSpecsResponse::~NovaShowFlavorExtraSpecsResponse() = default;

void NovaShowFlavorExtraSpecsResponse::validate()
{
}

web::json::value NovaShowFlavorExtraSpecsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(extraSpecsIsSet_) {
        val[utility::conversions::to_string_t("extra_specs")] = ModelBase::toJson(extraSpecs_);
    }

    return val;
}
bool NovaShowFlavorExtraSpecsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("extra_specs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_specs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraSpecs(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& NovaShowFlavorExtraSpecsResponse::getExtraSpecs()
{
    return extraSpecs_;
}

void NovaShowFlavorExtraSpecsResponse::setExtraSpecs(const std::map<std::string, std::string>& value)
{
    extraSpecs_ = value;
    extraSpecsIsSet_ = true;
}

bool NovaShowFlavorExtraSpecsResponse::extraSpecsIsSet() const
{
    return extraSpecsIsSet_;
}

void NovaShowFlavorExtraSpecsResponse::unsetextraSpecs()
{
    extraSpecsIsSet_ = false;
}

}
}
}
}
}


