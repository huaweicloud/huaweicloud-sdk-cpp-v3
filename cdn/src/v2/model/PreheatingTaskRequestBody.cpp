

#include "huaweicloud/cdn/v2/model/PreheatingTaskRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




PreheatingTaskRequestBody::PreheatingTaskRequestBody()
{
    zhUrlEncode_ = false;
    zhUrlEncodeIsSet_ = false;
    urlsIsSet_ = false;
}

PreheatingTaskRequestBody::~PreheatingTaskRequestBody() = default;

void PreheatingTaskRequestBody::validate()
{
}

web::json::value PreheatingTaskRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zhUrlEncodeIsSet_) {
        val[utility::conversions::to_string_t("zh_url_encode")] = ModelBase::toJson(zhUrlEncode_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}
bool PreheatingTaskRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("zh_url_encode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh_url_encode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZhUrlEncode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    return ok;
}


bool PreheatingTaskRequestBody::isZhUrlEncode() const
{
    return zhUrlEncode_;
}

void PreheatingTaskRequestBody::setZhUrlEncode(bool value)
{
    zhUrlEncode_ = value;
    zhUrlEncodeIsSet_ = true;
}

bool PreheatingTaskRequestBody::zhUrlEncodeIsSet() const
{
    return zhUrlEncodeIsSet_;
}

void PreheatingTaskRequestBody::unsetzhUrlEncode()
{
    zhUrlEncodeIsSet_ = false;
}

std::vector<std::string>& PreheatingTaskRequestBody::getUrls()
{
    return urls_;
}

void PreheatingTaskRequestBody::setUrls(const std::vector<std::string>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool PreheatingTaskRequestBody::urlsIsSet() const
{
    return urlsIsSet_;
}

void PreheatingTaskRequestBody::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


