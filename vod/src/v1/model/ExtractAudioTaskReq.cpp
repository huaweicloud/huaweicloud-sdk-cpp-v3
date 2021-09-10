

#include "huaweicloud/vod/v1/model/ExtractAudioTaskReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ExtractAudioTaskReq::ExtractAudioTaskReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    parameterIsSet_ = false;
}

ExtractAudioTaskReq::~ExtractAudioTaskReq() = default;

void ExtractAudioTaskReq::validate()
{
}

web::json::value ExtractAudioTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(parameterIsSet_) {
        val[utility::conversions::to_string_t("parameter")] = ModelBase::toJson(parameter_);
    }

    return val;
}

bool ExtractAudioTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parameter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter"));
        if(!fieldValue.is_null())
        {
            Parameter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameter(refVal);
        }
    }
    return ok;
}


std::string ExtractAudioTaskReq::getAssetId() const
{
    return assetId_;
}

void ExtractAudioTaskReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ExtractAudioTaskReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ExtractAudioTaskReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

Parameter ExtractAudioTaskReq::getParameter() const
{
    return parameter_;
}

void ExtractAudioTaskReq::setParameter(const Parameter& value)
{
    parameter_ = value;
    parameterIsSet_ = true;
}

bool ExtractAudioTaskReq::parameterIsSet() const
{
    return parameterIsSet_;
}

void ExtractAudioTaskReq::unsetparameter()
{
    parameterIsSet_ = false;
}

}
}
}
}
}


