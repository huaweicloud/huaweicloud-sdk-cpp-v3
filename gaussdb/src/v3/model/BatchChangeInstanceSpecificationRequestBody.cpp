

#include "huaweicloud/gaussdb/v3/model/BatchChangeInstanceSpecificationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchChangeInstanceSpecificationRequestBody::BatchChangeInstanceSpecificationRequestBody()
{
    instanceIdsIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

BatchChangeInstanceSpecificationRequestBody::~BatchChangeInstanceSpecificationRequestBody() = default;

void BatchChangeInstanceSpecificationRequestBody::validate()
{
}

web::json::value BatchChangeInstanceSpecificationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool BatchChangeInstanceSpecificationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchChangeInstanceSpecificationRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchChangeInstanceSpecificationRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchChangeInstanceSpecificationRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchChangeInstanceSpecificationRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

std::string BatchChangeInstanceSpecificationRequestBody::getSpecCode() const
{
    return specCode_;
}

void BatchChangeInstanceSpecificationRequestBody::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool BatchChangeInstanceSpecificationRequestBody::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void BatchChangeInstanceSpecificationRequestBody::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string BatchChangeInstanceSpecificationRequestBody::getIsAutoPay() const
{
    return isAutoPay_;
}

void BatchChangeInstanceSpecificationRequestBody::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool BatchChangeInstanceSpecificationRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void BatchChangeInstanceSpecificationRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


