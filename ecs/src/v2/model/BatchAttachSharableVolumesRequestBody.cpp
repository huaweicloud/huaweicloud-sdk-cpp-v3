

#include "huaweicloud/ecs/v2/model/BatchAttachSharableVolumesRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAttachSharableVolumesRequestBody::BatchAttachSharableVolumesRequestBody()
{
    serverinfoIsSet_ = false;
}

BatchAttachSharableVolumesRequestBody::~BatchAttachSharableVolumesRequestBody() = default;

void BatchAttachSharableVolumesRequestBody::validate()
{
}

web::json::value BatchAttachSharableVolumesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverinfoIsSet_) {
        val[utility::conversions::to_string_t("serverinfo")] = ModelBase::toJson(serverinfo_);
    }

    return val;
}

bool BatchAttachSharableVolumesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serverinfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverinfo"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchAttachSharableVolumesOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerinfo(refVal);
        }
    }
    return ok;
}


std::vector<BatchAttachSharableVolumesOption>& BatchAttachSharableVolumesRequestBody::getServerinfo()
{
    return serverinfo_;
}

void BatchAttachSharableVolumesRequestBody::setServerinfo(const std::vector<BatchAttachSharableVolumesOption>& value)
{
    serverinfo_ = value;
    serverinfoIsSet_ = true;
}

bool BatchAttachSharableVolumesRequestBody::serverinfoIsSet() const
{
    return serverinfoIsSet_;
}

void BatchAttachSharableVolumesRequestBody::unsetserverinfo()
{
    serverinfoIsSet_ = false;
}

}
}
}
}
}


