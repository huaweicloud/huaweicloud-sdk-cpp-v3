

#include "huaweicloud/cfw/v1/model/ListCaptureResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListCaptureResultResponse::ListCaptureResultResponse()
{
    dataIsSet_ = false;
}

ListCaptureResultResponse::~ListCaptureResultResponse() = default;

void ListCaptureResultResponse::validate()
{
}

web::json::value ListCaptureResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListCaptureResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            CaptureResultUrlVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


CaptureResultUrlVO ListCaptureResultResponse::getData() const
{
    return data_;
}

void ListCaptureResultResponse::setData(const CaptureResultUrlVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListCaptureResultResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListCaptureResultResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


