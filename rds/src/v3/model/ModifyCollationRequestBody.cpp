

#include "huaweicloud/rds/v3/model/ModifyCollationRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyCollationRequestBody::ModifyCollationRequestBody()
{
    collation_ = "";
    collationIsSet_ = false;
}

ModifyCollationRequestBody::~ModifyCollationRequestBody() = default;

void ModifyCollationRequestBody::validate()
{
}

web::json::value ModifyCollationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(collationIsSet_) {
        val[utility::conversions::to_string_t("collation")] = ModelBase::toJson(collation_);
    }

    return val;
}

bool ModifyCollationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("collation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollation(refVal);
        }
    }
    return ok;
}

std::string ModifyCollationRequestBody::getCollation() const
{
    return collation_;
}

void ModifyCollationRequestBody::setCollation(const std::string& value)
{
    collation_ = value;
    collationIsSet_ = true;
}

bool ModifyCollationRequestBody::collationIsSet() const
{
    return collationIsSet_;
}

void ModifyCollationRequestBody::unsetcollation()
{
    collationIsSet_ = false;
}

}
}
}
}
}


