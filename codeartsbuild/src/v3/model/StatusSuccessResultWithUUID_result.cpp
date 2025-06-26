

#include "huaweicloud/codeartsbuild/v3/model/StatusSuccessResultWithUUID_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




StatusSuccessResultWithUUID_result::StatusSuccessResultWithUUID_result()
{
    uuid_ = "";
    uuidIsSet_ = false;
}

StatusSuccessResultWithUUID_result::~StatusSuccessResultWithUUID_result() = default;

void StatusSuccessResultWithUUID_result::validate()
{
}

web::json::value StatusSuccessResultWithUUID_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }

    return val;
}
bool StatusSuccessResultWithUUID_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    return ok;
}


std::string StatusSuccessResultWithUUID_result::getUuid() const
{
    return uuid_;
}

void StatusSuccessResultWithUUID_result::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool StatusSuccessResultWithUUID_result::uuidIsSet() const
{
    return uuidIsSet_;
}

void StatusSuccessResultWithUUID_result::unsetuuid()
{
    uuidIsSet_ = false;
}

}
}
}
}
}


