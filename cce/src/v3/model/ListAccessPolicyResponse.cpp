

#include "huaweicloud/cce/v3/model/ListAccessPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAccessPolicyResponse::ListAccessPolicyResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    accessPolicyListIsSet_ = false;
}

ListAccessPolicyResponse::~ListAccessPolicyResponse() = default;

void ListAccessPolicyResponse::validate()
{
}

web::json::value ListAccessPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(accessPolicyListIsSet_) {
        val[utility::conversions::to_string_t("accessPolicyList")] = ModelBase::toJson(accessPolicyList_);
    }

    return val;
}
bool ListAccessPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("accessPolicyList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accessPolicyList"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessPolicyResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPolicyList(refVal);
        }
    }
    return ok;
}


std::string ListAccessPolicyResponse::getKind() const
{
    return kind_;
}

void ListAccessPolicyResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAccessPolicyResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAccessPolicyResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAccessPolicyResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAccessPolicyResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAccessPolicyResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAccessPolicyResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AccessPolicyResp>& ListAccessPolicyResponse::getAccessPolicyList()
{
    return accessPolicyList_;
}

void ListAccessPolicyResponse::setAccessPolicyList(const std::vector<AccessPolicyResp>& value)
{
    accessPolicyList_ = value;
    accessPolicyListIsSet_ = true;
}

bool ListAccessPolicyResponse::accessPolicyListIsSet() const
{
    return accessPolicyListIsSet_;
}

void ListAccessPolicyResponse::unsetaccessPolicyList()
{
    accessPolicyListIsSet_ = false;
}

}
}
}
}
}


