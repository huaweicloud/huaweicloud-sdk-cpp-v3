

#include "huaweicloud/smn/v2/model/HttpDetectRequestBody_extension.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




HttpDetectRequestBody_extension::HttpDetectRequestBody_extension()
{
    headerIsSet_ = false;
}

HttpDetectRequestBody_extension::~HttpDetectRequestBody_extension() = default;

void HttpDetectRequestBody_extension::validate()
{
}

web::json::value HttpDetectRequestBody_extension::toJson() const
{
    web::json::value val = web::json::value::object();

    if(headerIsSet_) {
        val[utility::conversions::to_string_t("header")] = ModelBase::toJson(header_);
    }

    return val;
}
bool HttpDetectRequestBody_extension::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("header"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("header"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeader(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& HttpDetectRequestBody_extension::getHeader()
{
    return header_;
}

void HttpDetectRequestBody_extension::setHeader(const std::map<std::string, std::string>& value)
{
    header_ = value;
    headerIsSet_ = true;
}

bool HttpDetectRequestBody_extension::headerIsSet() const
{
    return headerIsSet_;
}

void HttpDetectRequestBody_extension::unsetheader()
{
    headerIsSet_ = false;
}

}
}
}
}
}


