

#include "huaweicloud/eip/v2/model/CreateSharedBandwidhRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreateSharedBandwidhRequestBody::CreateSharedBandwidhRequestBody()
{
    bandwidthIsSet_ = false;
}

CreateSharedBandwidhRequestBody::~CreateSharedBandwidhRequestBody() = default;

void CreateSharedBandwidhRequestBody::validate()
{
}

web::json::value CreateSharedBandwidhRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool CreateSharedBandwidhRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            CreateSharedBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


CreateSharedBandwidthOption CreateSharedBandwidhRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void CreateSharedBandwidhRequestBody::setBandwidth(const CreateSharedBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool CreateSharedBandwidhRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void CreateSharedBandwidhRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


