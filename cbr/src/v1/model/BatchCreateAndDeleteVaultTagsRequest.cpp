

#include "huaweicloud/cbr/v1/model/BatchCreateAndDeleteVaultTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BatchCreateAndDeleteVaultTagsRequest::BatchCreateAndDeleteVaultTagsRequest()
{
    vaultId_ = "";
    vaultIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateAndDeleteVaultTagsRequest::~BatchCreateAndDeleteVaultTagsRequest() = default;

void BatchCreateAndDeleteVaultTagsRequest::validate()
{
}

web::json::value BatchCreateAndDeleteVaultTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchCreateAndDeleteVaultTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BulkCreateAndDeleteVaultTagsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateAndDeleteVaultTagsRequest::getVaultId() const
{
    return vaultId_;
}

void BatchCreateAndDeleteVaultTagsRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool BatchCreateAndDeleteVaultTagsRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void BatchCreateAndDeleteVaultTagsRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

BulkCreateAndDeleteVaultTagsReq BatchCreateAndDeleteVaultTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateAndDeleteVaultTagsRequest::setBody(const BulkCreateAndDeleteVaultTagsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateAndDeleteVaultTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateAndDeleteVaultTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


