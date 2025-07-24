

#include "huaweicloud/cloudtest/v1/model/CommRequestSaveTemplateParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestSaveTemplateParam::CommRequestSaveTemplateParam()
{
    paramsIsSet_ = false;
}

CommRequestSaveTemplateParam::~CommRequestSaveTemplateParam() = default;

void CommRequestSaveTemplateParam::validate()
{
}

web::json::value CommRequestSaveTemplateParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestSaveTemplateParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            SaveTemplateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


SaveTemplateParam CommRequestSaveTemplateParam::getParams() const
{
    return params_;
}

void CommRequestSaveTemplateParam::setParams(const SaveTemplateParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestSaveTemplateParam::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestSaveTemplateParam::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


