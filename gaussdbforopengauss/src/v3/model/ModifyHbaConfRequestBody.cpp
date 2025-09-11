

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyHbaConfRequestBody::ModifyHbaConfRequestBody()
{
    beforeConfsIsSet_ = false;
    afterConfsIsSet_ = false;
}

ModifyHbaConfRequestBody::~ModifyHbaConfRequestBody() = default;

void ModifyHbaConfRequestBody::validate()
{
}

web::json::value ModifyHbaConfRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beforeConfsIsSet_) {
        val[utility::conversions::to_string_t("before_confs")] = ModelBase::toJson(beforeConfs_);
    }
    if(afterConfsIsSet_) {
        val[utility::conversions::to_string_t("after_confs")] = ModelBase::toJson(afterConfs_);
    }

    return val;
}
bool ModifyHbaConfRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("before_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before_confs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeforeConfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after_confs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after_confs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfterConfs(refVal);
        }
    }
    return ok;
}


Object ModifyHbaConfRequestBody::getBeforeConfs() const
{
    return beforeConfs_;
}

void ModifyHbaConfRequestBody::setBeforeConfs(const Object& value)
{
    beforeConfs_ = value;
    beforeConfsIsSet_ = true;
}

bool ModifyHbaConfRequestBody::beforeConfsIsSet() const
{
    return beforeConfsIsSet_;
}

void ModifyHbaConfRequestBody::unsetbeforeConfs()
{
    beforeConfsIsSet_ = false;
}

Object ModifyHbaConfRequestBody::getAfterConfs() const
{
    return afterConfs_;
}

void ModifyHbaConfRequestBody::setAfterConfs(const Object& value)
{
    afterConfs_ = value;
    afterConfsIsSet_ = true;
}

bool ModifyHbaConfRequestBody::afterConfsIsSet() const
{
    return afterConfsIsSet_;
}

void ModifyHbaConfRequestBody::unsetafterConfs()
{
    afterConfsIsSet_ = false;
}

}
}
}
}
}


