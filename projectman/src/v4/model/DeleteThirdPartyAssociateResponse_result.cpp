

#include "huaweicloud/projectman/v4/model/DeleteThirdPartyAssociateResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteThirdPartyAssociateResponse_result::DeleteThirdPartyAssociateResponse_result()
{
    failIsSet_ = false;
    successIsSet_ = false;
}

DeleteThirdPartyAssociateResponse_result::~DeleteThirdPartyAssociateResponse_result() = default;

void DeleteThirdPartyAssociateResponse_result::validate()
{
}

web::json::value DeleteThirdPartyAssociateResponse_result::toJson() const
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
bool DeleteThirdPartyAssociateResponse_result::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteThirdPartyAssociateResponse_result::getFail()
{
    return fail_;
}

void DeleteThirdPartyAssociateResponse_result::setFail(const std::vector<std::string>& value)
{
    fail_ = value;
    failIsSet_ = true;
}

bool DeleteThirdPartyAssociateResponse_result::failIsSet() const
{
    return failIsSet_;
}

void DeleteThirdPartyAssociateResponse_result::unsetfail()
{
    failIsSet_ = false;
}

std::vector<std::string>& DeleteThirdPartyAssociateResponse_result::getSuccess()
{
    return success_;
}

void DeleteThirdPartyAssociateResponse_result::setSuccess(const std::vector<std::string>& value)
{
    success_ = value;
    successIsSet_ = true;
}

bool DeleteThirdPartyAssociateResponse_result::successIsSet() const
{
    return successIsSet_;
}

void DeleteThirdPartyAssociateResponse_result::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


