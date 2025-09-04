

#include "huaweicloud/ecs/v2/model/VolumeBatchDetachRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




VolumeBatchDetachRequest::VolumeBatchDetachRequest()
{
    serverinfoIsSet_ = false;
}

VolumeBatchDetachRequest::~VolumeBatchDetachRequest() = default;

void VolumeBatchDetachRequest::validate()
{
}

web::json::value VolumeBatchDetachRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverinfoIsSet_) {
        val[utility::conversions::to_string_t("serverinfo")] = ModelBase::toJson(serverinfo_);
    }

    return val;
}
bool VolumeBatchDetachRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serverinfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverinfo"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerinfo(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& VolumeBatchDetachRequest::getServerinfo()
{
    return serverinfo_;
}

void VolumeBatchDetachRequest::setServerinfo(const std::vector<std::string>& value)
{
    serverinfo_ = value;
    serverinfoIsSet_ = true;
}

bool VolumeBatchDetachRequest::serverinfoIsSet() const
{
    return serverinfoIsSet_;
}

void VolumeBatchDetachRequest::unsetserverinfo()
{
    serverinfoIsSet_ = false;
}

}
}
}
}
}


