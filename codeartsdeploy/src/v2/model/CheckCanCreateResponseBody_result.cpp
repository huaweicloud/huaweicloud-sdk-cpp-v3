

#include "huaweicloud/codeartsdeploy/v2/model/CheckCanCreateResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CheckCanCreateResponseBody_result::CheckCanCreateResponseBody_result()
{
    creatable_ = false;
    creatableIsSet_ = false;
}

CheckCanCreateResponseBody_result::~CheckCanCreateResponseBody_result() = default;

void CheckCanCreateResponseBody_result::validate()
{
}

web::json::value CheckCanCreateResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatableIsSet_) {
        val[utility::conversions::to_string_t("creatable")] = ModelBase::toJson(creatable_);
    }

    return val;
}
bool CheckCanCreateResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creatable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creatable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatable(refVal);
        }
    }
    return ok;
}


bool CheckCanCreateResponseBody_result::isCreatable() const
{
    return creatable_;
}

void CheckCanCreateResponseBody_result::setCreatable(bool value)
{
    creatable_ = value;
    creatableIsSet_ = true;
}

bool CheckCanCreateResponseBody_result::creatableIsSet() const
{
    return creatableIsSet_;
}

void CheckCanCreateResponseBody_result::unsetcreatable()
{
    creatableIsSet_ = false;
}

}
}
}
}
}


