

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstancesStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstancesStatisticsRequest::ShowInstancesStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowInstancesStatisticsRequest::~ShowInstancesStatisticsRequest() = default;

void ShowInstancesStatisticsRequest::validate()
{
}

web::json::value ShowInstancesStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowInstancesStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ShowInstancesStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstancesStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstancesStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstancesStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


