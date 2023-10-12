

#include "huaweicloud/eip/v2/model/CreatePrePaidPublicipRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePrePaidPublicipRequestBody::CreatePrePaidPublicipRequestBody()
{
    publicipIsSet_ = false;
    bandwidthIsSet_ = false;
    extendParamIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreatePrePaidPublicipRequestBody::~CreatePrePaidPublicipRequestBody() = default;

void CreatePrePaidPublicipRequestBody::validate()
{
}

web::json::value CreatePrePaidPublicipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CreatePrePaidPublicipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            CreatePrePaidPublicipOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            CreatePublicipBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


CreatePrePaidPublicipOption CreatePrePaidPublicipRequestBody::getPublicip() const
{
    return publicip_;
}

void CreatePrePaidPublicipRequestBody::setPublicip(const CreatePrePaidPublicipOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool CreatePrePaidPublicipRequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void CreatePrePaidPublicipRequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

CreatePublicipBandwidthOption CreatePrePaidPublicipRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void CreatePrePaidPublicipRequestBody::setBandwidth(const CreatePublicipBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool CreatePrePaidPublicipRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void CreatePrePaidPublicipRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

CreatePrePaidPublicipExtendParamOption CreatePrePaidPublicipRequestBody::getExtendParam() const
{
    return extendParam_;
}

void CreatePrePaidPublicipRequestBody::setExtendParam(const CreatePrePaidPublicipExtendParamOption& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool CreatePrePaidPublicipRequestBody::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void CreatePrePaidPublicipRequestBody::unsetextendParam()
{
    extendParamIsSet_ = false;
}

std::string CreatePrePaidPublicipRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreatePrePaidPublicipRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreatePrePaidPublicipRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreatePrePaidPublicipRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


