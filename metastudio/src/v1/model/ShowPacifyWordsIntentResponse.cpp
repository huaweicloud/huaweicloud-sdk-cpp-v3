

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsIntentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsIntentResponse::ShowPacifyWordsIntentResponse()
{
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowPacifyWordsIntentResponse::~ShowPacifyWordsIntentResponse() = default;

void ShowPacifyWordsIntentResponse::validate()
{
}

web::json::value ShowPacifyWordsIntentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowPacifyWordsIntentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<PacifyWordsIntentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
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


std::vector<PacifyWordsIntentInfo>& ShowPacifyWordsIntentResponse::getData()
{
    return data_;
}

void ShowPacifyWordsIntentResponse::setData(const std::vector<PacifyWordsIntentInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowPacifyWordsIntentResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowPacifyWordsIntentResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ShowPacifyWordsIntentResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowPacifyWordsIntentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowPacifyWordsIntentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowPacifyWordsIntentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


