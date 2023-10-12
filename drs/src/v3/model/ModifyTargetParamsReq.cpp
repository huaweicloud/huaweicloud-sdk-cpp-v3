

#include "huaweicloud/drs/v3/model/ModifyTargetParamsReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ModifyTargetParamsReq::ModifyTargetParamsReq()
{
    group_ = "";
    groupIsSet_ = false;
    paramsIsSet_ = false;
}

ModifyTargetParamsReq::~ModifyTargetParamsReq() = default;

void ModifyTargetParamsReq::validate()
{
}

web::json::value ModifyTargetParamsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool ModifyTargetParamsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            std::vector<ParamsReqBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string ModifyTargetParamsReq::getGroup() const
{
    return group_;
}

void ModifyTargetParamsReq::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool ModifyTargetParamsReq::groupIsSet() const
{
    return groupIsSet_;
}

void ModifyTargetParamsReq::unsetgroup()
{
    groupIsSet_ = false;
}

std::vector<ParamsReqBean>& ModifyTargetParamsReq::getParams()
{
    return params_;
}

void ModifyTargetParamsReq::setParams(const std::vector<ParamsReqBean>& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ModifyTargetParamsReq::paramsIsSet() const
{
    return paramsIsSet_;
}

void ModifyTargetParamsReq::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


