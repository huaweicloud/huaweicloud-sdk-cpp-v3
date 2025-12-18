

#include "huaweicloud/meeting/v1/model/RestSetLiveReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetLiveReqBody::RestSetLiveReqBody()
{
    isLive_ = 0;
    isLiveIsSet_ = false;
}

RestSetLiveReqBody::~RestSetLiveReqBody() = default;

void RestSetLiveReqBody::validate()
{
}

web::json::value RestSetLiveReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isLiveIsSet_) {
        val[utility::conversions::to_string_t("isLive")] = ModelBase::toJson(isLive_);
    }

    return val;
}
bool RestSetLiveReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isLive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLive"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLive(refVal);
        }
    }
    return ok;
}


int32_t RestSetLiveReqBody::getIsLive() const
{
    return isLive_;
}

void RestSetLiveReqBody::setIsLive(int32_t value)
{
    isLive_ = value;
    isLiveIsSet_ = true;
}

bool RestSetLiveReqBody::isLiveIsSet() const
{
    return isLiveIsSet_;
}

void RestSetLiveReqBody::unsetisLive()
{
    isLiveIsSet_ = false;
}

}
}
}
}
}


