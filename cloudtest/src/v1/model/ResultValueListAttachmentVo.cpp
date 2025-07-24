

#include "huaweicloud/cloudtest/v1/model/ResultValueListAttachmentVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueListAttachmentVo::ResultValueListAttachmentVo()
{
    valueIsSet_ = false;
}

ResultValueListAttachmentVo::~ResultValueListAttachmentVo() = default;

void ResultValueListAttachmentVo::validate()
{
}

web::json::value ResultValueListAttachmentVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueListAttachmentVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachmentVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::vector<AttachmentVo>& ResultValueListAttachmentVo::getValue()
{
    return value_;
}

void ResultValueListAttachmentVo::setValue(const std::vector<AttachmentVo>& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueListAttachmentVo::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueListAttachmentVo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


