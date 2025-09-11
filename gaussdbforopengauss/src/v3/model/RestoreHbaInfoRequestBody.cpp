

#include "huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RestoreHbaInfoRequestBody::RestoreHbaInfoRequestBody()
{
    hbaHistoryId_ = "";
    hbaHistoryIdIsSet_ = false;
}

RestoreHbaInfoRequestBody::~RestoreHbaInfoRequestBody() = default;

void RestoreHbaInfoRequestBody::validate()
{
}

web::json::value RestoreHbaInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hbaHistoryIdIsSet_) {
        val[utility::conversions::to_string_t("hba_history_id")] = ModelBase::toJson(hbaHistoryId_);
    }

    return val;
}
bool RestoreHbaInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hba_history_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hba_history_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHbaHistoryId(refVal);
        }
    }
    return ok;
}


std::string RestoreHbaInfoRequestBody::getHbaHistoryId() const
{
    return hbaHistoryId_;
}

void RestoreHbaInfoRequestBody::setHbaHistoryId(const std::string& value)
{
    hbaHistoryId_ = value;
    hbaHistoryIdIsSet_ = true;
}

bool RestoreHbaInfoRequestBody::hbaHistoryIdIsSet() const
{
    return hbaHistoryIdIsSet_;
}

void RestoreHbaInfoRequestBody::unsethbaHistoryId()
{
    hbaHistoryIdIsSet_ = false;
}

}
}
}
}
}


