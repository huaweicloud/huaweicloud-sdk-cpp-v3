

#include "huaweicloud/codeartsrepo/v4/model/ApprovalApproverInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ApprovalApproverInfoDto::ApprovalApproverInfoDto()
{
    approverIds_ = "";
    approverIdsIsSet_ = false;
}

ApprovalApproverInfoDto::~ApprovalApproverInfoDto() = default;

void ApprovalApproverInfoDto::validate()
{
}

web::json::value ApprovalApproverInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approverIdsIsSet_) {
        val[utility::conversions::to_string_t("approver_ids")] = ModelBase::toJson(approverIds_);
    }

    return val;
}
bool ApprovalApproverInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approver_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproverIds(refVal);
        }
    }
    return ok;
}


std::string ApprovalApproverInfoDto::getApproverIds() const
{
    return approverIds_;
}

void ApprovalApproverInfoDto::setApproverIds(const std::string& value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool ApprovalApproverInfoDto::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void ApprovalApproverInfoDto::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

}
}
}
}
}


