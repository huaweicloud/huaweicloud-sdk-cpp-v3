

#include "huaweicloud/metastudio/v1/model/DeleteAudioRecordConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAudioRecordConfigResponse::DeleteAudioRecordConfigResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteAudioRecordConfigResponse::~DeleteAudioRecordConfigResponse() = default;

void DeleteAudioRecordConfigResponse::validate()
{
}

web::json::value DeleteAudioRecordConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteAudioRecordConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string DeleteAudioRecordConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteAudioRecordConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteAudioRecordConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteAudioRecordConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


