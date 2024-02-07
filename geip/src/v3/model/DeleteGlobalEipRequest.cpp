

#include "huaweicloud/geip/v3/model/DeleteGlobalEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGlobalEipRequest::DeleteGlobalEipRequest()
{
    globalEipId_ = "";
    globalEipIdIsSet_ = false;
}

DeleteGlobalEipRequest::~DeleteGlobalEipRequest() = default;

void DeleteGlobalEipRequest::validate()
{
}

web::json::value DeleteGlobalEipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(globalEipIdIsSet_) {
        val[utility::conversions::to_string_t("global_eip_id")] = ModelBase::toJson(globalEipId_);
    }

    return val;
}
bool DeleteGlobalEipRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("global_eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("global_eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlobalEipId(refVal);
        }
    }
    return ok;
}


std::string DeleteGlobalEipRequest::getGlobalEipId() const
{
    return globalEipId_;
}

void DeleteGlobalEipRequest::setGlobalEipId(const std::string& value)
{
    globalEipId_ = value;
    globalEipIdIsSet_ = true;
}

bool DeleteGlobalEipRequest::globalEipIdIsSet() const
{
    return globalEipIdIsSet_;
}

void DeleteGlobalEipRequest::unsetglobalEipId()
{
    globalEipIdIsSet_ = false;
}

}
}
}
}
}


