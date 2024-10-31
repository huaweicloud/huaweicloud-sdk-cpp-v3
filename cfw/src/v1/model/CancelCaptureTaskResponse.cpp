

#include "huaweicloud/cfw/v1/model/CancelCaptureTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CancelCaptureTaskResponse::CancelCaptureTaskResponse()
{
    dataIsSet_ = false;
}

CancelCaptureTaskResponse::~CancelCaptureTaskResponse() = default;

void CancelCaptureTaskResponse::validate()
{
}

web::json::value CancelCaptureTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CancelCaptureTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CaptureTaskId refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CaptureTaskId CancelCaptureTaskResponse::getData() const
{
    return data_;
}

void CancelCaptureTaskResponse::setData(const CaptureTaskId& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CancelCaptureTaskResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CancelCaptureTaskResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


