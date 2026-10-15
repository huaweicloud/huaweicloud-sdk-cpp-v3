

#include "huaweicloud/drs/v5/model/ChangeFlavorReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ChangeFlavorReq::ChangeFlavorReq()
{
    specType_ = "";
    specTypeIsSet_ = false;
}

ChangeFlavorReq::~ChangeFlavorReq() = default;

void ChangeFlavorReq::validate()
{
}

web::json::value ChangeFlavorReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specTypeIsSet_) {
        val[utility::conversions::to_string_t("spec_type")] = ModelBase::toJson(specType_);
    }

    return val;
}
bool ChangeFlavorReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecType(refVal);
        }
    }
    return ok;
}


std::string ChangeFlavorReq::getSpecType() const
{
    return specType_;
}

void ChangeFlavorReq::setSpecType(const std::string& value)
{
    specType_ = value;
    specTypeIsSet_ = true;
}

bool ChangeFlavorReq::specTypeIsSet() const
{
    return specTypeIsSet_;
}

void ChangeFlavorReq::unsetspecType()
{
    specTypeIsSet_ = false;
}

}
}
}
}
}


