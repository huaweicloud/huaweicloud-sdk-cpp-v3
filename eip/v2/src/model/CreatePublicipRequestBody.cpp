

#include "huaweicloud/eip/model/CreatePublicipRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreatePublicipRequestBody::CreatePublicipRequestBody()
{
    bandwidthIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    publicipIsSet_ = false;
}

CreatePublicipRequestBody::~CreatePublicipRequestBody() = default;

void CreatePublicipRequestBody::validate()
{
}

web::json::value CreatePublicipRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}

bool CreatePublicipRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            CreatePublicipBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            CreatePublicipOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


CreatePublicipBandwidthOption CreatePublicipRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void CreatePublicipRequestBody::setBandwidth(const CreatePublicipBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool CreatePublicipRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void CreatePublicipRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string CreatePublicipRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreatePublicipRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreatePublicipRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreatePublicipRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

CreatePublicipOption CreatePublicipRequestBody::getPublicip() const
{
    return publicip_;
}

void CreatePublicipRequestBody::setPublicip(const CreatePublicipOption& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool CreatePublicipRequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void CreatePublicipRequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


