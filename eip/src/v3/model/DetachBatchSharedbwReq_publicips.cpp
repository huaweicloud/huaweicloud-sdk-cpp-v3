

#include "huaweicloud/eip/v3/model/DetachBatchSharedbwReq_publicips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachBatchSharedbwReq_publicips::DetachBatchSharedbwReq_publicips()
{
    publicipId_ = "";
    publicipIdIsSet_ = false;
    bandwidthIsSet_ = false;
}

DetachBatchSharedbwReq_publicips::~DetachBatchSharedbwReq_publicips() = default;

void DetachBatchSharedbwReq_publicips::validate()
{
}

web::json::value DetachBatchSharedbwReq_publicips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool DetachBatchSharedbwReq_publicips::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            DetachSharedbwDict refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


std::string DetachBatchSharedbwReq_publicips::getPublicipId() const
{
    return publicipId_;
}

void DetachBatchSharedbwReq_publicips::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool DetachBatchSharedbwReq_publicips::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void DetachBatchSharedbwReq_publicips::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

DetachSharedbwDict DetachBatchSharedbwReq_publicips::getBandwidth() const
{
    return bandwidth_;
}

void DetachBatchSharedbwReq_publicips::setBandwidth(const DetachSharedbwDict& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool DetachBatchSharedbwReq_publicips::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void DetachBatchSharedbwReq_publicips::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


