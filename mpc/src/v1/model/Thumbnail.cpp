

#include "huaweicloud/mpc/v1/model/Thumbnail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Thumbnail::Thumbnail()
{
    tar_ = 0;
    tarIsSet_ = false;
    outIsSet_ = false;
    paramsIsSet_ = false;
}

Thumbnail::~Thumbnail() = default;

void Thumbnail::validate()
{
}

web::json::value Thumbnail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tarIsSet_) {
        val[utility::conversions::to_string_t("tar")] = ModelBase::toJson(tar_);
    }
    if(outIsSet_) {
        val[utility::conversions::to_string_t("out")] = ModelBase::toJson(out_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}

bool Thumbnail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tar"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTar(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            ThumbnailPara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}

int32_t Thumbnail::getTar() const
{
    return tar_;
}

void Thumbnail::setTar(int32_t value)
{
    tar_ = value;
    tarIsSet_ = true;
}

bool Thumbnail::tarIsSet() const
{
    return tarIsSet_;
}

void Thumbnail::unsettar()
{
    tarIsSet_ = false;
}

ObsObjInfo Thumbnail::getOut() const
{
    return out_;
}

void Thumbnail::setOut(const ObsObjInfo& value)
{
    out_ = value;
    outIsSet_ = true;
}

bool Thumbnail::outIsSet() const
{
    return outIsSet_;
}

void Thumbnail::unsetout()
{
    outIsSet_ = false;
}

ThumbnailPara Thumbnail::getParams() const
{
    return params_;
}

void Thumbnail::setParams(const ThumbnailPara& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool Thumbnail::paramsIsSet() const
{
    return paramsIsSet_;
}

void Thumbnail::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


