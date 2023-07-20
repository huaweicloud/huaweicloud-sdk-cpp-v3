

#include "huaweicloud/gaussdb/v3/model/MysqlResizeFlavor.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlResizeFlavor::MysqlResizeFlavor()
{
    specCode_ = "";
    specCodeIsSet_ = false;
}

MysqlResizeFlavor::~MysqlResizeFlavor() = default;

void MysqlResizeFlavor::validate()
{
}

web::json::value MysqlResizeFlavor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }

    return val;
}

bool MysqlResizeFlavor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    return ok;
}

std::string MysqlResizeFlavor::getSpecCode() const
{
    return specCode_;
}

void MysqlResizeFlavor::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool MysqlResizeFlavor::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void MysqlResizeFlavor::unsetspecCode()
{
    specCodeIsSet_ = false;
}

}
}
}
}
}


