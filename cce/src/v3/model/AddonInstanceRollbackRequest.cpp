

#include "huaweicloud/cce/v3/model/AddonInstanceRollbackRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonInstanceRollbackRequest::AddonInstanceRollbackRequest()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
}

AddonInstanceRollbackRequest::~AddonInstanceRollbackRequest() = default;

void AddonInstanceRollbackRequest::validate()
{
}

web::json::value AddonInstanceRollbackRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }

    return val;
}
bool AddonInstanceRollbackRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
        }
    }
    return ok;
}


std::string AddonInstanceRollbackRequest::getClusterID() const
{
    return clusterID_;
}

void AddonInstanceRollbackRequest::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool AddonInstanceRollbackRequest::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void AddonInstanceRollbackRequest::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

}
}
}
}
}


