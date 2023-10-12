

#include "huaweicloud/lts/v2/model/CreateAomMappingRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAomMappingRulesRequest::CreateAomMappingRulesRequest()
{
    isBatch_ = false;
    isBatchIsSet_ = false;
    bodyIsSet_ = false;
}

CreateAomMappingRulesRequest::~CreateAomMappingRulesRequest() = default;

void CreateAomMappingRulesRequest::validate()
{
}

web::json::value CreateAomMappingRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isBatchIsSet_) {
        val[utility::conversions::to_string_t("isBatch")] = ModelBase::toJson(isBatch_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAomMappingRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isBatch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isBatch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AomMappingRequestInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


bool CreateAomMappingRulesRequest::isIsBatch() const
{
    return isBatch_;
}

void CreateAomMappingRulesRequest::setIsBatch(bool value)
{
    isBatch_ = value;
    isBatchIsSet_ = true;
}

bool CreateAomMappingRulesRequest::isBatchIsSet() const
{
    return isBatchIsSet_;
}

void CreateAomMappingRulesRequest::unsetisBatch()
{
    isBatchIsSet_ = false;
}

AomMappingRequestInfo CreateAomMappingRulesRequest::getBody() const
{
    return body_;
}

void CreateAomMappingRulesRequest::setBody(const AomMappingRequestInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAomMappingRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAomMappingRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


