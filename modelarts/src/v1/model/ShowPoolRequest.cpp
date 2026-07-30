

#include "huaweicloud/modelarts/v1/model/ShowPoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowPoolRequest::ShowPoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    xModelArtsUserID_ = "";
    xModelArtsUserIDIsSet_ = false;
}

ShowPoolRequest::~ShowPoolRequest() = default;

void ShowPoolRequest::validate()
{
}

web::json::value ShowPoolRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(xModelArtsUserIDIsSet_) {
        val[utility::conversions::to_string_t("X-ModelArts-User-ID")] = ModelBase::toJson(xModelArtsUserID_);
    }

    return val;
}
bool ShowPoolRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-ModelArts-User-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-ModelArts-User-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXModelArtsUserID(refVal);
        }
    }
    return ok;
}


std::string ShowPoolRequest::getPoolName() const
{
    return poolName_;
}

void ShowPoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ShowPoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ShowPoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ShowPoolRequest::getXModelArtsUserID() const
{
    return xModelArtsUserID_;
}

void ShowPoolRequest::setXModelArtsUserID(const std::string& value)
{
    xModelArtsUserID_ = value;
    xModelArtsUserIDIsSet_ = true;
}

bool ShowPoolRequest::xModelArtsUserIDIsSet() const
{
    return xModelArtsUserIDIsSet_;
}

void ShowPoolRequest::unsetxModelArtsUserID()
{
    xModelArtsUserIDIsSet_ = false;
}

}
}
}
}
}


