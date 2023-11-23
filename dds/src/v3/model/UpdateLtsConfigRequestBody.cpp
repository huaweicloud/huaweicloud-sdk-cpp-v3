

#include "huaweicloud/dds/v3/model/UpdateLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateLtsConfigRequestBody::UpdateLtsConfigRequestBody()
{
    ltsConfigsIsSet_ = false;
}

UpdateLtsConfigRequestBody::~UpdateLtsConfigRequestBody() = default;

void UpdateLtsConfigRequestBody::validate()
{
}

web::json::value UpdateLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }

    return val;
}
bool UpdateLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateLtsConfigRequestBody_lts_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    return ok;
}


std::vector<UpdateLtsConfigRequestBody_lts_configs>& UpdateLtsConfigRequestBody::getLtsConfigs()
{
    return ltsConfigs_;
}

void UpdateLtsConfigRequestBody::setLtsConfigs(const std::vector<UpdateLtsConfigRequestBody_lts_configs>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool UpdateLtsConfigRequestBody::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void UpdateLtsConfigRequestBody::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

}
}
}
}
}


