

#include "huaweicloud/metastudio/v1/model/BatchDeletePacifyWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BatchDeletePacifyWordsResponse::BatchDeletePacifyWordsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

BatchDeletePacifyWordsResponse::~BatchDeletePacifyWordsResponse() = default;

void BatchDeletePacifyWordsResponse::validate()
{
}

web::json::value BatchDeletePacifyWordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool BatchDeletePacifyWordsResponse::fromJson(const web::json::value& val)
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


std::string BatchDeletePacifyWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void BatchDeletePacifyWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool BatchDeletePacifyWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void BatchDeletePacifyWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


