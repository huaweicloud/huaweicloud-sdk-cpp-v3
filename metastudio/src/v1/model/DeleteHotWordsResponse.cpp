

#include "huaweicloud/metastudio/v1/model/DeleteHotWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteHotWordsResponse::DeleteHotWordsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteHotWordsResponse::~DeleteHotWordsResponse() = default;

void DeleteHotWordsResponse::validate()
{
}

web::json::value DeleteHotWordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteHotWordsResponse::fromJson(const web::json::value& val)
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


std::string DeleteHotWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteHotWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteHotWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteHotWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


