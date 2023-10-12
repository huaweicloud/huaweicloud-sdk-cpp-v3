

#include "huaweicloud/eip/v3/model/BatchAttachSharebwDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BatchAttachSharebwDict::BatchAttachSharebwDict()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

BatchAttachSharebwDict::~BatchAttachSharebwDict() = default;

void BatchAttachSharebwDict::validate()
{
}

web::json::value BatchAttachSharebwDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}
bool BatchAttachSharebwDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}


std::string BatchAttachSharebwDict::getBandwidthId() const
{
    return bandwidthId_;
}

void BatchAttachSharebwDict::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool BatchAttachSharebwDict::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void BatchAttachSharebwDict::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::string BatchAttachSharebwDict::getPublicipId() const
{
    return publicipId_;
}

void BatchAttachSharebwDict::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool BatchAttachSharebwDict::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void BatchAttachSharebwDict::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


