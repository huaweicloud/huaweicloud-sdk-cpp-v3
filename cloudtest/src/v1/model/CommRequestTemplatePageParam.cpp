

#include "huaweicloud/cloudtest/v1/model/CommRequestTemplatePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestTemplatePageParam::CommRequestTemplatePageParam()
{
    paramsIsSet_ = false;
}

CommRequestTemplatePageParam::~CommRequestTemplatePageParam() = default;

void CommRequestTemplatePageParam::validate()
{
}

web::json::value CommRequestTemplatePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestTemplatePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            TemplatePageParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


TemplatePageParam CommRequestTemplatePageParam::getParams() const
{
    return params_;
}

void CommRequestTemplatePageParam::setParams(const TemplatePageParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestTemplatePageParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestTemplatePageParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


