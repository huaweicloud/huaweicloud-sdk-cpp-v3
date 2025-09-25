

#include "huaweicloud/gaussdbforopengauss/v3/model/ExpansionParametersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ExpansionParametersRequestBody::ExpansionParametersRequestBody()
{
    paramsIsSet_ = false;
}

ExpansionParametersRequestBody::~ExpansionParametersRequestBody() = default;

void ExpansionParametersRequestBody::validate()
{
}

web::json::value ExpansionParametersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool ExpansionParametersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& ExpansionParametersRequestBody::getParams()
{
    return params_;
}

void ExpansionParametersRequestBody::setParams(const std::map<std::string, std::string>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ExpansionParametersRequestBody::paramsIsSet() const
{
    return paramsIsSet_;
}

void ExpansionParametersRequestBody::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


