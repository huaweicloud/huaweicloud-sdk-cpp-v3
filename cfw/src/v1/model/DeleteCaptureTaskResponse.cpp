

#include "huaweicloud/cfw/v1/model/DeleteCaptureTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteCaptureTaskResponse::DeleteCaptureTaskResponse()
{
    dataIsSet_ = false;
}

DeleteCaptureTaskResponse::~DeleteCaptureTaskResponse() = default;

void DeleteCaptureTaskResponse::validate()
{
}

web::json::value DeleteCaptureTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool DeleteCaptureTaskResponse::fromJson(const web::json::value& val)
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


IdObject DeleteCaptureTaskResponse::getData() const
{
    return data_;
}

void DeleteCaptureTaskResponse::setData(const IdObject& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteCaptureTaskResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteCaptureTaskResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


