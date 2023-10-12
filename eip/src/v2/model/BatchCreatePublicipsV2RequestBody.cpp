

#include "huaweicloud/eip/v2/model/BatchCreatePublicipsV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BatchCreatePublicipsV2RequestBody::BatchCreatePublicipsV2RequestBody()
{
    bandwidthIsSet_ = false;
    publicipIsSet_ = false;
    publicipNumber_ = 0;
    publicipNumberIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

BatchCreatePublicipsV2RequestBody::~BatchCreatePublicipsV2RequestBody() = default;

void BatchCreatePublicipsV2RequestBody::validate()
{
}

web::json::value BatchCreatePublicipsV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }
    if(publicipNumberIsSet_) {
        val[utility::conversions::to_string_t("publicip_number")] = ModelBase::toJson(publicipNumber_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool BatchCreatePublicipsV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BatchBandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            BatchPublicIp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipNumber(refVal);
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


BatchBandwidth BatchCreatePublicipsV2RequestBody::getBandwidth() const
{
    return bandwidth_;
}

void BatchCreatePublicipsV2RequestBody::setBandwidth(const BatchBandwidth& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool BatchCreatePublicipsV2RequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void BatchCreatePublicipsV2RequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

BatchPublicIp BatchCreatePublicipsV2RequestBody::getPublicip() const
{
    return publicip_;
}

void BatchCreatePublicipsV2RequestBody::setPublicip(const BatchPublicIp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool BatchCreatePublicipsV2RequestBody::publicipIsSet() const
{
    return publicipIsSet_;
}

void BatchCreatePublicipsV2RequestBody::unsetpublicip()
{
    publicipIsSet_ = false;
}

int32_t BatchCreatePublicipsV2RequestBody::getPublicipNumber() const
{
    return publicipNumber_;
}

void BatchCreatePublicipsV2RequestBody::setPublicipNumber(int32_t value)
{
    publicipNumber_ = value;
    publicipNumberIsSet_ = true;
}

bool BatchCreatePublicipsV2RequestBody::publicipNumberIsSet() const
{
    return publicipNumberIsSet_;
}

void BatchCreatePublicipsV2RequestBody::unsetpublicipNumber()
{
    publicipNumberIsSet_ = false;
}

std::string BatchCreatePublicipsV2RequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchCreatePublicipsV2RequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchCreatePublicipsV2RequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchCreatePublicipsV2RequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


