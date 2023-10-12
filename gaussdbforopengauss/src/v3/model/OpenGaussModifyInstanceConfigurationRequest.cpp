

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussModifyInstanceConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussModifyInstanceConfigurationRequest::OpenGaussModifyInstanceConfigurationRequest()
{
    valuesIsSet_ = false;
}

OpenGaussModifyInstanceConfigurationRequest::~OpenGaussModifyInstanceConfigurationRequest() = default;

void OpenGaussModifyInstanceConfigurationRequest::validate()
{
}

web::json::value OpenGaussModifyInstanceConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool OpenGaussModifyInstanceConfigurationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& OpenGaussModifyInstanceConfigurationRequest::getValues()
{
    return values_;
}

void OpenGaussModifyInstanceConfigurationRequest::setValues(const std::map<std::string, std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool OpenGaussModifyInstanceConfigurationRequest::valuesIsSet() const
{
    return valuesIsSet_;
}

void OpenGaussModifyInstanceConfigurationRequest::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


