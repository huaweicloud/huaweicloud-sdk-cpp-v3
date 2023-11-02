

#include "huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::~ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest() = default;

void ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::validate()
{
}

web::json::value ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::fromJson(const web::json::value& val)
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


std::string ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


