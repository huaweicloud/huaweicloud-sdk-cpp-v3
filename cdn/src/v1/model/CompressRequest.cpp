

#include "huaweicloud/cdn/v1/model/CompressRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CompressRequest::CompressRequest()
{
    compressSwitch_ = 0;
    compressSwitchIsSet_ = false;
}

CompressRequest::~CompressRequest() = default;

void CompressRequest::validate()
{
}

web::json::value CompressRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compressSwitchIsSet_) {
        val[utility::conversions::to_string_t("compress_switch")] = ModelBase::toJson(compressSwitch_);
    }

    return val;
}

bool CompressRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compress_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compress_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompressSwitch(refVal);
        }
    }
    return ok;
}

int32_t CompressRequest::getCompressSwitch() const
{
    return compressSwitch_;
}

void CompressRequest::setCompressSwitch(int32_t value)
{
    compressSwitch_ = value;
    compressSwitchIsSet_ = true;
}

bool CompressRequest::compressSwitchIsSet() const
{
    return compressSwitchIsSet_;
}

void CompressRequest::unsetcompressSwitch()
{
    compressSwitchIsSet_ = false;
}

}
}
}
}
}


