

#include "huaweicloud/cloudtest/v1/model/CommRequestGetDefaultTemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestGetDefaultTemplateParam::CommRequestGetDefaultTemplateParam()
{
    paramsIsSet_ = false;
}

CommRequestGetDefaultTemplateParam::~CommRequestGetDefaultTemplateParam() = default;

void CommRequestGetDefaultTemplateParam::validate()
{
}

web::json::value CommRequestGetDefaultTemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestGetDefaultTemplateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            GetDefaultTemplateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


GetDefaultTemplateParam CommRequestGetDefaultTemplateParam::getParams() const
{
    return params_;
}

void CommRequestGetDefaultTemplateParam::setParams(const GetDefaultTemplateParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestGetDefaultTemplateParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestGetDefaultTemplateParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


