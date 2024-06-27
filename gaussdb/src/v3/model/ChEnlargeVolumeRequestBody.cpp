

#include "huaweicloud/gaussdb/v3/model/ChEnlargeVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChEnlargeVolumeRequestBody::ChEnlargeVolumeRequestBody()
{
    sizeInGb_ = 0;
    sizeInGbIsSet_ = false;
}

ChEnlargeVolumeRequestBody::~ChEnlargeVolumeRequestBody() = default;

void ChEnlargeVolumeRequestBody::validate()
{
}

web::json::value ChEnlargeVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeInGbIsSet_) {
        val[utility::conversions::to_string_t("size_in_gb")] = ModelBase::toJson(sizeInGb_);
    }

    return val;
}
bool ChEnlargeVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size_in_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size_in_gb"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSizeInGb(refVal);
        }
    }
    return ok;
}


int32_t ChEnlargeVolumeRequestBody::getSizeInGb() const
{
    return sizeInGb_;
}

void ChEnlargeVolumeRequestBody::setSizeInGb(int32_t value)
{
    sizeInGb_ = value;
    sizeInGbIsSet_ = true;
}

bool ChEnlargeVolumeRequestBody::sizeInGbIsSet() const
{
    return sizeInGbIsSet_;
}

void ChEnlargeVolumeRequestBody::unsetsizeInGb()
{
    sizeInGbIsSet_ = false;
}

}
}
}
}
}


