

#include "huaweicloud/eip/v3/model/AttachSharebwDict.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




AttachSharebwDict::AttachSharebwDict()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
}

AttachSharebwDict::~AttachSharebwDict() = default;

void AttachSharebwDict::validate()
{
}

web::json::value AttachSharebwDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }

    return val;
}

bool AttachSharebwDict::fromJson(const web::json::value& val)
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
    return ok;
}

std::string AttachSharebwDict::getBandwidthId() const
{
    return bandwidthId_;
}

void AttachSharebwDict::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool AttachSharebwDict::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void AttachSharebwDict::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

}
}
}
}
}


