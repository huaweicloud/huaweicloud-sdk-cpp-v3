

#include "huaweicloud/projectman/v4/model/UpdateThirdPartyAssociateResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateThirdPartyAssociateResponse_result::UpdateThirdPartyAssociateResponse_result()
{
    failIsSet_ = false;
    successIsSet_ = false;
}

UpdateThirdPartyAssociateResponse_result::~UpdateThirdPartyAssociateResponse_result() = default;

void UpdateThirdPartyAssociateResponse_result::validate()
{
}

web::json::value UpdateThirdPartyAssociateResponse_result::toJson() const
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
bool UpdateThirdPartyAssociateResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& UpdateThirdPartyAssociateResponse_result::getFail()
{
    return fail_;
}

void UpdateThirdPartyAssociateResponse_result::setFail(const std::vector<std::string>& value)
{
    fail_ = value;
    failIsSet_ = true;
}

bool UpdateThirdPartyAssociateResponse_result::failIsSet() const
{
    return failIsSet_;
}

void UpdateThirdPartyAssociateResponse_result::unsetfail()
{
    failIsSet_ = false;
}

std::vector<std::vector<std::string>>& UpdateThirdPartyAssociateResponse_result::getSuccess()
{
    return success_;
}

void UpdateThirdPartyAssociateResponse_result::setSuccess(const std::vector<std::vector<std::string>>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool UpdateThirdPartyAssociateResponse_result::successIsSet() const
{
    return successIsSet_;
}

void UpdateThirdPartyAssociateResponse_result::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


