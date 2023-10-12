

#include "huaweicloud/eip/v2/model/ChangeToPeriodReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ChangeToPeriodReq::ChangeToPeriodReq()
{
    publicipIdsIsSet_ = false;
    extendParamIsSet_ = false;
}

ChangeToPeriodReq::~ChangeToPeriodReq() = default;

void ChangeToPeriodReq::validate()
{
}

web::json::value ChangeToPeriodReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdsIsSet_) {
        val[utility::conversions::to_string_t("publicip_ids")] = ModelBase::toJson(publicipIds_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}
bool ChangeToPeriodReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            CreatePrePaidPublicipExtendParamOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ChangeToPeriodReq::getPublicipIds()
{
    return publicipIds_;
}

void ChangeToPeriodReq::setPublicipIds(const std::vector<std::string>& value)
{
    publicipIds_ = value;
    publicipIdsIsSet_ = true;
}

bool ChangeToPeriodReq::publicipIdsIsSet() const
{
    return publicipIdsIsSet_;
}

void ChangeToPeriodReq::unsetpublicipIds()
{
    publicipIdsIsSet_ = false;
}

CreatePrePaidPublicipExtendParamOption ChangeToPeriodReq::getExtendParam() const
{
    return extendParam_;
}

void ChangeToPeriodReq::setExtendParam(const CreatePrePaidPublicipExtendParamOption& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool ChangeToPeriodReq::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void ChangeToPeriodReq::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


