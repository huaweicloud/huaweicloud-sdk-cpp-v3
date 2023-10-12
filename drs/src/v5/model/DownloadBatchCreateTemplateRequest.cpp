

#include "huaweicloud/drs/v5/model/DownloadBatchCreateTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DownloadBatchCreateTemplateRequest::DownloadBatchCreateTemplateRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

DownloadBatchCreateTemplateRequest::~DownloadBatchCreateTemplateRequest() = default;

void DownloadBatchCreateTemplateRequest::validate()
{
}

web::json::value DownloadBatchCreateTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool DownloadBatchCreateTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string DownloadBatchCreateTemplateRequest::getXLanguage() const
{
    return xLanguage_;
}

void DownloadBatchCreateTemplateRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DownloadBatchCreateTemplateRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DownloadBatchCreateTemplateRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


