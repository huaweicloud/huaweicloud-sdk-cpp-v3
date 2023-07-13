

#include "huaweicloud/sdrs/v1/model/ExtendReplicationRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ExtendReplicationRequestParams::ExtendReplicationRequestParams()
{
    newSize_ = 0;
    newSizeIsSet_ = false;
}

ExtendReplicationRequestParams::~ExtendReplicationRequestParams() = default;

void ExtendReplicationRequestParams::validate()
{
}

web::json::value ExtendReplicationRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newSizeIsSet_) {
        val[utility::conversions::to_string_t("new_size")] = ModelBase::toJson(newSize_);
    }

    return val;
}

bool ExtendReplicationRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewSize(refVal);
        }
    }
    return ok;
}

int32_t ExtendReplicationRequestParams::getNewSize() const
{
    return newSize_;
}

void ExtendReplicationRequestParams::setNewSize(int32_t value)
{
    newSize_ = value;
    newSizeIsSet_ = true;
}

bool ExtendReplicationRequestParams::newSizeIsSet() const
{
    return newSizeIsSet_;
}

void ExtendReplicationRequestParams::unsetnewSize()
{
    newSizeIsSet_ = false;
}

}
}
}
}
}


