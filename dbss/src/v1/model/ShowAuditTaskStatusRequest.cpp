

#include "huaweicloud/dbss/v1/model/ShowAuditTaskStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditTaskStatusRequest::ShowAuditTaskStatusRequest()
{
    busiType_ = "";
    busiTypeIsSet_ = false;
}

ShowAuditTaskStatusRequest::~ShowAuditTaskStatusRequest() = default;

void ShowAuditTaskStatusRequest::validate()
{
}

web::json::value ShowAuditTaskStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(busiTypeIsSet_) {
        val[utility::conversions::to_string_t("busi_type")] = ModelBase::toJson(busiType_);
    }

    return val;
}
bool ShowAuditTaskStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("busi_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("busi_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiType(refVal);
        }
    }
    return ok;
}


std::string ShowAuditTaskStatusRequest::getBusiType() const
{
    return busiType_;
}

void ShowAuditTaskStatusRequest::setBusiType(const std::string& value)
{
    busiType_ = value;
    busiTypeIsSet_ = true;
}

bool ShowAuditTaskStatusRequest::busiTypeIsSet() const
{
    return busiTypeIsSet_;
}

void ShowAuditTaskStatusRequest::unsetbusiType()
{
    busiTypeIsSet_ = false;
}

}
}
}
}
}


