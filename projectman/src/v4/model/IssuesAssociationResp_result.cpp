

#include "huaweicloud/projectman/v4/model/IssuesAssociationResp_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssuesAssociationResp_result::IssuesAssociationResp_result()
{
    failIsSet_ = false;
    successIsSet_ = false;
}

IssuesAssociationResp_result::~IssuesAssociationResp_result() = default;

void IssuesAssociationResp_result::validate()
{
}

web::json::value IssuesAssociationResp_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failIsSet_) {
        val[utility::conversions::to_string_t("fail")] = ModelBase::toJson(fail_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool IssuesAssociationResp_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateThirdPartyAssociateDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateThirdPartyAssociateDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::vector<CreateThirdPartyAssociateDTO>& IssuesAssociationResp_result::getFail()
{
    return fail_;
}

void IssuesAssociationResp_result::setFail(const std::vector<CreateThirdPartyAssociateDTO>& value)
{
    fail_ = value;
    failIsSet_ = true;
}

bool IssuesAssociationResp_result::failIsSet() const
{
    return failIsSet_;
}

void IssuesAssociationResp_result::unsetfail()
{
    failIsSet_ = false;
}

std::vector<CreateThirdPartyAssociateDTO>& IssuesAssociationResp_result::getSuccess()
{
    return success_;
}

void IssuesAssociationResp_result::setSuccess(const std::vector<CreateThirdPartyAssociateDTO>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool IssuesAssociationResp_result::successIsSet() const
{
    return successIsSet_;
}

void IssuesAssociationResp_result::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


