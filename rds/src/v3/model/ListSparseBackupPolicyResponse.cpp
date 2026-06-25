

#include "huaweicloud/rds/v3/model/ListSparseBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSparseBackupPolicyResponse::ListSparseBackupPolicyResponse()
{
    policiesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSparseBackupPolicyResponse::~ListSparseBackupPolicyResponse() = default;

void ListSparseBackupPolicyResponse::validate()
{
}

web::json::value ListSparseBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSparseBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<SparseBackupPolicy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<SparseBackupPolicy>& ListSparseBackupPolicyResponse::getPolicies()
{
    return policies_;
}

void ListSparseBackupPolicyResponse::setPolicies(const std::vector<SparseBackupPolicy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListSparseBackupPolicyResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListSparseBackupPolicyResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

std::string ListSparseBackupPolicyResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSparseBackupPolicyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSparseBackupPolicyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSparseBackupPolicyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


