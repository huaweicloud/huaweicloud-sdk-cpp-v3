

#include "huaweicloud/cfw/v1/model/ListCaptureTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListCaptureTaskResponse::ListCaptureTaskResponse()
{
    dataIsSet_ = false;
}

ListCaptureTaskResponse::~ListCaptureTaskResponse() = default;

void ListCaptureTaskResponse::validate()
{
}

web::json::value ListCaptureTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListCaptureTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpQueryCaptureTaskResponseData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::vector<HttpQueryCaptureTaskResponseData>& ListCaptureTaskResponse::getData()
{
    return data_;
}

void ListCaptureTaskResponse::setData(const std::vector<HttpQueryCaptureTaskResponseData>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListCaptureTaskResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListCaptureTaskResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


