

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
    engineType_ = "";
    engineTypeIsSet_ = false;
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
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
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
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
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

std::string DownloadBatchCreateTemplateRequest::getEngineType() const
{
    return engineType_;
}

void DownloadBatchCreateTemplateRequest::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool DownloadBatchCreateTemplateRequest::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void DownloadBatchCreateTemplateRequest::unsetengineType()
{
    engineTypeIsSet_ = false;
}

}
}
}
}
}


