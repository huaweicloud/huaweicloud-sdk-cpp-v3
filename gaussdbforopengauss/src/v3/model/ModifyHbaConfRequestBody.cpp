

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyHbaConfRequestBody::ModifyHbaConfRequestBody()
{
    beforeConfIsSet_ = false;
    afterConfIsSet_ = false;
}

ModifyHbaConfRequestBody::~ModifyHbaConfRequestBody() = default;

void ModifyHbaConfRequestBody::validate()
{
}

web::json::value ModifyHbaConfRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beforeConfIsSet_) {
        val[utility::conversions::to_string_t("before_conf")] = ModelBase::toJson(beforeConf_);
    }
    if(afterConfIsSet_) {
        val[utility::conversions::to_string_t("after_conf")] = ModelBase::toJson(afterConf_);
    }

    return val;
}
bool ModifyHbaConfRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("before_conf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_conf"));
        if(!fieldValue.is_null())
        {
            BeforeHbaConfOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeConf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_conf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_conf"));
        if(!fieldValue.is_null())
        {
            AfterHbaConfOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterConf(refVal);
        }
    }
    return ok;
}


BeforeHbaConfOption ModifyHbaConfRequestBody::getBeforeConf() const
{
    return beforeConf_;
}

void ModifyHbaConfRequestBody::setBeforeConf(const BeforeHbaConfOption& value)
{
    beforeConf_ = value;
    beforeConfIsSet_ = true;
}

bool ModifyHbaConfRequestBody::beforeConfIsSet() const
{
    return beforeConfIsSet_;
}

void ModifyHbaConfRequestBody::unsetbeforeConf()
{
    beforeConfIsSet_ = false;
}

AfterHbaConfOption ModifyHbaConfRequestBody::getAfterConf() const
{
    return afterConf_;
}

void ModifyHbaConfRequestBody::setAfterConf(const AfterHbaConfOption& value)
{
    afterConf_ = value;
    afterConfIsSet_ = true;
}

bool ModifyHbaConfRequestBody::afterConfIsSet() const
{
    return afterConfIsSet_;
}

void ModifyHbaConfRequestBody::unsetafterConf()
{
    afterConfIsSet_ = false;
}

}
}
}
}
}


