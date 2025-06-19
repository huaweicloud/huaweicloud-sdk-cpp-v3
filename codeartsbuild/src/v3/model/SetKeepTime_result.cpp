

#include "huaweicloud/codeartsbuild/v3/model/SetKeepTime_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SetKeepTime_result::SetKeepTime_result()
{
    keepTime_ = 0;
    keepTimeIsSet_ = false;
}

SetKeepTime_result::~SetKeepTime_result() = default;

void SetKeepTime_result::validate()
{
}

web::json::value SetKeepTime_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepTimeIsSet_) {
        val[utility::conversions::to_string_t("keep_time")] = ModelBase::toJson(keepTime_);
    }

    return val;
}
bool SetKeepTime_result::fromJson(const web::json::value& val)
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


int32_t SetKeepTime_result::getKeepTime() const
{
    return keepTime_;
}

void SetKeepTime_result::setKeepTime(int32_t value)
{
    keepTime_ = value;
    keepTimeIsSet_ = true;
}

bool SetKeepTime_result::keepTimeIsSet() const
{
    return keepTimeIsSet_;
}

void SetKeepTime_result::unsetkeepTime()
{
    keepTimeIsSet_ = false;
}

}
}
}
}
}


