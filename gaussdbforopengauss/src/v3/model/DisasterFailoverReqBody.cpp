

#include "huaweicloud/gaussdbforopengauss/v3/model/DisasterFailoverReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DisasterFailoverReqBody::DisasterFailoverReqBody()
{
    isSupportRestore_ = false;
    isSupportRestoreIsSet_ = false;
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

DisasterFailoverReqBody::~DisasterFailoverReqBody() = default;

void DisasterFailoverReqBody::validate()
{
}

web::json::value DisasterFailoverReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSupportRestoreIsSet_) {
        val[utility::conversions::to_string_t("is_support_restore")] = ModelBase::toJson(isSupportRestore_);
    }
    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool DisasterFailoverReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_support_restore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_restore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportRestore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
        }
    }
    return ok;
}


bool DisasterFailoverReqBody::isIsSupportRestore() const
{
    return isSupportRestore_;
}

void DisasterFailoverReqBody::setIsSupportRestore(bool value)
{
    isSupportRestore_ = value;
    isSupportRestoreIsSet_ = true;
}

bool DisasterFailoverReqBody::isSupportRestoreIsSet() const
{
    return isSupportRestoreIsSet_;
}

void DisasterFailoverReqBody::unsetisSupportRestore()
{
    isSupportRestoreIsSet_ = false;
}

std::string DisasterFailoverReqBody::getDisasterType() const
{
    return disasterType_;
}

void DisasterFailoverReqBody::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool DisasterFailoverReqBody::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void DisasterFailoverReqBody::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


