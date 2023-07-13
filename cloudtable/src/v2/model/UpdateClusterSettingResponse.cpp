

#include "huaweicloud/cloudtable/v2/model/UpdateClusterSettingResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




UpdateClusterSettingResponse::UpdateClusterSettingResponse()
{
    modifyResult_ = false;
    modifyResultIsSet_ = false;
}

UpdateClusterSettingResponse::~UpdateClusterSettingResponse() = default;

void UpdateClusterSettingResponse::validate()
{
}

web::json::value UpdateClusterSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modifyResultIsSet_) {
        val[utility::conversions::to_string_t("modify_result")] = ModelBase::toJson(modifyResult_);
    }

    return val;
}

bool UpdateClusterSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("modify_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyResult(refVal);
        }
    }
    return ok;
}

bool UpdateClusterSettingResponse::isModifyResult() const
{
    return modifyResult_;
}

void UpdateClusterSettingResponse::setModifyResult(bool value)
{
    modifyResult_ = value;
    modifyResultIsSet_ = true;
}

bool UpdateClusterSettingResponse::modifyResultIsSet() const
{
    return modifyResultIsSet_;
}

void UpdateClusterSettingResponse::unsetmodifyResult()
{
    modifyResultIsSet_ = false;
}

}
}
}
}
}


