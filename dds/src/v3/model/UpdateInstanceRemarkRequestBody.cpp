

#include "huaweicloud/dds/v3/model/UpdateInstanceRemarkRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateInstanceRemarkRequestBody::UpdateInstanceRemarkRequestBody()
{
    remark_ = "";
    remarkIsSet_ = false;
}

UpdateInstanceRemarkRequestBody::~UpdateInstanceRemarkRequestBody() = default;

void UpdateInstanceRemarkRequestBody::validate()
{
}

web::json::value UpdateInstanceRemarkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }

    return val;
}

bool UpdateInstanceRemarkRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    return ok;
}

std::string UpdateInstanceRemarkRequestBody::getRemark() const
{
    return remark_;
}

void UpdateInstanceRemarkRequestBody::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool UpdateInstanceRemarkRequestBody::remarkIsSet() const
{
    return remarkIsSet_;
}

void UpdateInstanceRemarkRequestBody::unsetremark()
{
    remarkIsSet_ = false;
}

}
}
}
}
}


