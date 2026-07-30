

#include "huaweicloud/modelarts/v1/model/DeletePoolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeletePoolRequest::DeletePoolRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    xModelArtsUserID_ = "";
    xModelArtsUserIDIsSet_ = false;
}

DeletePoolRequest::~DeletePoolRequest() = default;

void DeletePoolRequest::validate()
{
}

web::json::value DeletePoolRequest::toJson() const
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
bool DeletePoolRequest::fromJson(const web::json::value& val)
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


std::string DeletePoolRequest::getPoolName() const
{
    return poolName_;
}

void DeletePoolRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool DeletePoolRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void DeletePoolRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string DeletePoolRequest::getXModelArtsUserID() const
{
    return xModelArtsUserID_;
}

void DeletePoolRequest::setXModelArtsUserID(const std::string& value)
{
    xModelArtsUserID_ = value;
    xModelArtsUserIDIsSet_ = true;
}

bool DeletePoolRequest::xModelArtsUserIDIsSet() const
{
    return xModelArtsUserIDIsSet_;
}

void DeletePoolRequest::unsetxModelArtsUserID()
{
    xModelArtsUserIDIsSet_ = false;
}

}
}
}
}
}


