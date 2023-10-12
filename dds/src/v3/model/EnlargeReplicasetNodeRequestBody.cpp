

#include "huaweicloud/dds/v3/model/EnlargeReplicasetNodeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




EnlargeReplicasetNodeRequestBody::EnlargeReplicasetNodeRequestBody()
{
    num_ = 0;
    numIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

EnlargeReplicasetNodeRequestBody::~EnlargeReplicasetNodeRequestBody() = default;

void EnlargeReplicasetNodeRequestBody::validate()
{
}

web::json::value EnlargeReplicasetNodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool EnlargeReplicasetNodeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


int32_t EnlargeReplicasetNodeRequestBody::getNum() const
{
    return num_;
}

void EnlargeReplicasetNodeRequestBody::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool EnlargeReplicasetNodeRequestBody::numIsSet() const
{
    return numIsSet_;
}

void EnlargeReplicasetNodeRequestBody::unsetnum()
{
    numIsSet_ = false;
}

bool EnlargeReplicasetNodeRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void EnlargeReplicasetNodeRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool EnlargeReplicasetNodeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void EnlargeReplicasetNodeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


