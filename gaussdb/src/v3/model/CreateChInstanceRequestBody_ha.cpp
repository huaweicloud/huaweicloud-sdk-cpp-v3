

#include "huaweicloud/gaussdb/v3/model/CreateChInstanceRequestBody_ha.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateChInstanceRequestBody_ha::CreateChInstanceRequestBody_ha()
{
    mode_ = "";
    modeIsSet_ = false;
}

CreateChInstanceRequestBody_ha::~CreateChInstanceRequestBody_ha() = default;

void CreateChInstanceRequestBody_ha::validate()
{
}

web::json::value CreateChInstanceRequestBody_ha::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool CreateChInstanceRequestBody_ha::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string CreateChInstanceRequestBody_ha::getMode() const
{
    return mode_;
}

void CreateChInstanceRequestBody_ha::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool CreateChInstanceRequestBody_ha::modeIsSet() const
{
    return modeIsSet_;
}

void CreateChInstanceRequestBody_ha::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


