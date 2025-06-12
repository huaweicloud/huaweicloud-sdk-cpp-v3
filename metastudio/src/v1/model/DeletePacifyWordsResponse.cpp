

#include "huaweicloud/metastudio/v1/model/DeletePacifyWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeletePacifyWordsResponse::DeletePacifyWordsResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeletePacifyWordsResponse::~DeletePacifyWordsResponse() = default;

void DeletePacifyWordsResponse::validate()
{
}

web::json::value DeletePacifyWordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeletePacifyWordsResponse::fromJson(const web::json::value& val)
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


std::string DeletePacifyWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeletePacifyWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeletePacifyWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeletePacifyWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


