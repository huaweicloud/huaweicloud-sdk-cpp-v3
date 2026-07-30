

#include "huaweicloud/modelarts/v1/model/IntranetConnectionModifyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




IntranetConnectionModifyRequest::IntranetConnectionModifyRequest()
{
    customUrlsIsSet_ = false;
}

IntranetConnectionModifyRequest::~IntranetConnectionModifyRequest() = default;

void IntranetConnectionModifyRequest::validate()
{
}

web::json::value IntranetConnectionModifyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(customUrlsIsSet_) {
        val[utility::conversions::to_string_t("custom_urls")] = ModelBase::toJson(customUrls_);
    }

    return val;
}
bool IntranetConnectionModifyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("custom_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomUrls(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IntranetConnectionModifyRequest::getCustomUrls()
{
    return customUrls_;
}

void IntranetConnectionModifyRequest::setCustomUrls(const std::vector<std::string>& value)
{
    customUrls_ = value;
    customUrlsIsSet_ = true;
}

bool IntranetConnectionModifyRequest::customUrlsIsSet() const
{
    return customUrlsIsSet_;
}

void IntranetConnectionModifyRequest::unsetcustomUrls()
{
    customUrlsIsSet_ = false;
}

}
}
}
}
}


