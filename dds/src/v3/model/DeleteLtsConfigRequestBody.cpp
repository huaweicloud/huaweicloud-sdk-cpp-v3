

#include "huaweicloud/dds/v3/model/DeleteLtsConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteLtsConfigRequestBody::DeleteLtsConfigRequestBody()
{
    ltsConfigsIsSet_ = false;
}

DeleteLtsConfigRequestBody::~DeleteLtsConfigRequestBody() = default;

void DeleteLtsConfigRequestBody::validate()
{
}

web::json::value DeleteLtsConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }

    return val;
}
bool DeleteLtsConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteLtsConfigRequestBody_lts_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    return ok;
}


std::vector<DeleteLtsConfigRequestBody_lts_configs>& DeleteLtsConfigRequestBody::getLtsConfigs()
{
    return ltsConfigs_;
}

void DeleteLtsConfigRequestBody::setLtsConfigs(const std::vector<DeleteLtsConfigRequestBody_lts_configs>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool DeleteLtsConfigRequestBody::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void DeleteLtsConfigRequestBody::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

}
}
}
}
}


