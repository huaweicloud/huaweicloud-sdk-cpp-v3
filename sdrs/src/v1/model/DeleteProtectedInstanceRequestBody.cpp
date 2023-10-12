

#include "huaweicloud/sdrs/v1/model/DeleteProtectedInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectedInstanceRequestBody::DeleteProtectedInstanceRequestBody()
{
    deleteTargetServer_ = false;
    deleteTargetServerIsSet_ = false;
    deleteTargetEip_ = false;
    deleteTargetEipIsSet_ = false;
}

DeleteProtectedInstanceRequestBody::~DeleteProtectedInstanceRequestBody() = default;

void DeleteProtectedInstanceRequestBody::validate()
{
}

web::json::value DeleteProtectedInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteTargetServerIsSet_) {
        val[utility::conversions::to_string_t("delete_target_server")] = ModelBase::toJson(deleteTargetServer_);
    }
    if(deleteTargetEipIsSet_) {
        val[utility::conversions::to_string_t("delete_target_eip")] = ModelBase::toJson(deleteTargetEip_);
    }

    return val;
}
bool DeleteProtectedInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_target_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_target_server"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTargetServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_target_eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_target_eip"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteTargetEip(refVal);
        }
    }
    return ok;
}


bool DeleteProtectedInstanceRequestBody::isDeleteTargetServer() const
{
    return deleteTargetServer_;
}

void DeleteProtectedInstanceRequestBody::setDeleteTargetServer(bool value)
{
    deleteTargetServer_ = value;
    deleteTargetServerIsSet_ = true;
}

bool DeleteProtectedInstanceRequestBody::deleteTargetServerIsSet() const
{
    return deleteTargetServerIsSet_;
}

void DeleteProtectedInstanceRequestBody::unsetdeleteTargetServer()
{
    deleteTargetServerIsSet_ = false;
}

bool DeleteProtectedInstanceRequestBody::isDeleteTargetEip() const
{
    return deleteTargetEip_;
}

void DeleteProtectedInstanceRequestBody::setDeleteTargetEip(bool value)
{
    deleteTargetEip_ = value;
    deleteTargetEipIsSet_ = true;
}

bool DeleteProtectedInstanceRequestBody::deleteTargetEipIsSet() const
{
    return deleteTargetEipIsSet_;
}

void DeleteProtectedInstanceRequestBody::unsetdeleteTargetEip()
{
    deleteTargetEipIsSet_ = false;
}

}
}
}
}
}


