

#include "huaweicloud/modelarts/v1/model/GetAuthorizationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetAuthorizationsResponse::GetAuthorizationsResponse()
{
    totalCount_ = 0.0;
    totalCountIsSet_ = false;
    authIsSet_ = false;
}

GetAuthorizationsResponse::~GetAuthorizationsResponse() = default;

void GetAuthorizationsResponse::validate()
{
}

web::json::value GetAuthorizationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(authIsSet_) {
        val[utility::conversions::to_string_t("auth")] = ModelBase::toJson(auth_);
    }

    return val;
}
bool GetAuthorizationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth"));
        if(!fieldValue.is_null())
        {
            std::vector<AuthorizationResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuth(refVal);
        }
    }
    return ok;
}


double GetAuthorizationsResponse::getTotalCount() const
{
    return totalCount_;
}

void GetAuthorizationsResponse::setTotalCount(double value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool GetAuthorizationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void GetAuthorizationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AuthorizationResponse>& GetAuthorizationsResponse::getAuth()
{
    return auth_;
}

void GetAuthorizationsResponse::setAuth(const std::vector<AuthorizationResponse>& value)
{
    auth_ = value;
    authIsSet_ = true;
}

bool GetAuthorizationsResponse::authIsSet() const
{
    return authIsSet_;
}

void GetAuthorizationsResponse::unsetauth()
{
    authIsSet_ = false;
}

}
}
}
}
}


