

#include "huaweicloud/codeartsbuild/v3/model/SetKeepTimeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SetKeepTimeRequestBody::SetKeepTimeRequestBody()
{
    keepTime_ = 0;
    keepTimeIsSet_ = false;
}

SetKeepTimeRequestBody::~SetKeepTimeRequestBody() = default;

void SetKeepTimeRequestBody::validate()
{
}

web::json::value SetKeepTimeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepTimeIsSet_) {
        val[utility::conversions::to_string_t("keep_time")] = ModelBase::toJson(keepTime_);
    }

    return val;
}
bool SetKeepTimeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepTime(refVal);
        }
    }
    return ok;
}


int32_t SetKeepTimeRequestBody::getKeepTime() const
{
    return keepTime_;
}

void SetKeepTimeRequestBody::setKeepTime(int32_t value)
{
    keepTime_ = value;
    keepTimeIsSet_ = true;
}

bool SetKeepTimeRequestBody::keepTimeIsSet() const
{
    return keepTimeIsSet_;
}

void SetKeepTimeRequestBody::unsetkeepTime()
{
    keepTimeIsSet_ = false;
}

}
}
}
}
}


