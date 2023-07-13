

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceDeleteNicRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceDeleteNicRequestBody::ProtectedInstanceDeleteNicRequestBody()
{
    nicId_ = "";
    nicIdIsSet_ = false;
}

ProtectedInstanceDeleteNicRequestBody::~ProtectedInstanceDeleteNicRequestBody() = default;

void ProtectedInstanceDeleteNicRequestBody::validate()
{
}

web::json::value ProtectedInstanceDeleteNicRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }

    return val;
}

bool ProtectedInstanceDeleteNicRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    return ok;
}

std::string ProtectedInstanceDeleteNicRequestBody::getNicId() const
{
    return nicId_;
}

void ProtectedInstanceDeleteNicRequestBody::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool ProtectedInstanceDeleteNicRequestBody::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void ProtectedInstanceDeleteNicRequestBody::unsetnicId()
{
    nicIdIsSet_ = false;
}

}
}
}
}
}


