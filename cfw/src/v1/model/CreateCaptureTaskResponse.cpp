

#include "huaweicloud/cfw/v1/model/CreateCaptureTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateCaptureTaskResponse::CreateCaptureTaskResponse()
{
    dataIsSet_ = false;
}

CreateCaptureTaskResponse::~CreateCaptureTaskResponse() = default;

void CreateCaptureTaskResponse::validate()
{
}

web::json::value CreateCaptureTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool CreateCaptureTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IdObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IdObject CreateCaptureTaskResponse::getData() const
{
    return data_;
}

void CreateCaptureTaskResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool CreateCaptureTaskResponse::dataIsSet() const
{
    return dataIsSet_;
}

void CreateCaptureTaskResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


