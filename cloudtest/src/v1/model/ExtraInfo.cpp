

#include "huaweicloud/cloudtest/v1/model/ExtraInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExtraInfo::ExtraInfo()
{
    childImportPackageIsSet_ = false;
    documentLink_ = "";
    documentLinkIsSet_ = false;
    httpMethod_ = "";
    httpMethodIsSet_ = false;
    httpUrl_ = "";
    httpUrlIsSet_ = false;
    importPackageIsSet_ = false;
    mockIsSet_ = false;
    outputParamIsSet_ = false;
    paramDependent_ = "";
    paramDependentIsSet_ = false;
    summary_ = "";
    summaryIsSet_ = false;
}

ExtraInfo::~ExtraInfo() = default;

void ExtraInfo::validate()
{
}

web::json::value ExtraInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(childImportPackageIsSet_) {
        val[utility::conversions::to_string_t("childImportPackage")] = ModelBase::toJson(childImportPackage_);
    }
    if(documentLinkIsSet_) {
        val[utility::conversions::to_string_t("document_link")] = ModelBase::toJson(documentLink_);
    }
    if(httpMethodIsSet_) {
        val[utility::conversions::to_string_t("http_method")] = ModelBase::toJson(httpMethod_);
    }
    if(httpUrlIsSet_) {
        val[utility::conversions::to_string_t("http_url")] = ModelBase::toJson(httpUrl_);
    }
    if(importPackageIsSet_) {
        val[utility::conversions::to_string_t("importPackage")] = ModelBase::toJson(importPackage_);
    }
    if(mockIsSet_) {
        val[utility::conversions::to_string_t("mock")] = ModelBase::toJson(mock_);
    }
    if(outputParamIsSet_) {
        val[utility::conversions::to_string_t("outputParam")] = ModelBase::toJson(outputParam_);
    }
    if(paramDependentIsSet_) {
        val[utility::conversions::to_string_t("param_dependent")] = ModelBase::toJson(paramDependent_);
    }
    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }

    return val;
}
bool ExtraInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("childImportPackage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("childImportPackage"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildImportPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("importPackage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("importPackage"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportPackage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mock"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mock"));
        if(!fieldValue.is_null())
        {
            MockInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputParam"));
        if(!fieldValue.is_null())
        {
            std::vector<AwVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param_dependent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_dependent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamDependent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ExtraInfo::getChildImportPackage()
{
    return childImportPackage_;
}

void ExtraInfo::setChildImportPackage(const std::vector<std::string>& value)
{
    childImportPackage_ = value;
    childImportPackageIsSet_ = true;
}

bool ExtraInfo::childImportPackageIsSet() const
{
    return childImportPackageIsSet_;
}

void ExtraInfo::unsetchildImportPackage()
{
    childImportPackageIsSet_ = false;
}

std::string ExtraInfo::getDocumentLink() const
{
    return documentLink_;
}

void ExtraInfo::setDocumentLink(const std::string& value)
{
    documentLink_ = value;
    documentLinkIsSet_ = true;
}

bool ExtraInfo::documentLinkIsSet() const
{
    return documentLinkIsSet_;
}

void ExtraInfo::unsetdocumentLink()
{
    documentLinkIsSet_ = false;
}

std::string ExtraInfo::getHttpMethod() const
{
    return httpMethod_;
}

void ExtraInfo::setHttpMethod(const std::string& value)
{
    httpMethod_ = value;
    httpMethodIsSet_ = true;
}

bool ExtraInfo::httpMethodIsSet() const
{
    return httpMethodIsSet_;
}

void ExtraInfo::unsethttpMethod()
{
    httpMethodIsSet_ = false;
}

std::string ExtraInfo::getHttpUrl() const
{
    return httpUrl_;
}

void ExtraInfo::setHttpUrl(const std::string& value)
{
    httpUrl_ = value;
    httpUrlIsSet_ = true;
}

bool ExtraInfo::httpUrlIsSet() const
{
    return httpUrlIsSet_;
}

void ExtraInfo::unsethttpUrl()
{
    httpUrlIsSet_ = false;
}

std::vector<std::string>& ExtraInfo::getImportPackage()
{
    return importPackage_;
}

void ExtraInfo::setImportPackage(const std::vector<std::string>& value)
{
    importPackage_ = value;
    importPackageIsSet_ = true;
}

bool ExtraInfo::importPackageIsSet() const
{
    return importPackageIsSet_;
}

void ExtraInfo::unsetimportPackage()
{
    importPackageIsSet_ = false;
}

MockInfo ExtraInfo::getMock() const
{
    return mock_;
}

void ExtraInfo::setMock(const MockInfo& value)
{
    mock_ = value;
    mockIsSet_ = true;
}

bool ExtraInfo::mockIsSet() const
{
    return mockIsSet_;
}

void ExtraInfo::unsetmock()
{
    mockIsSet_ = false;
}

std::vector<AwVariable>& ExtraInfo::getOutputParam()
{
    return outputParam_;
}

void ExtraInfo::setOutputParam(const std::vector<AwVariable>& value)
{
    outputParam_ = value;
    outputParamIsSet_ = true;
}

bool ExtraInfo::outputParamIsSet() const
{
    return outputParamIsSet_;
}

void ExtraInfo::unsetoutputParam()
{
    outputParamIsSet_ = false;
}

std::string ExtraInfo::getParamDependent() const
{
    return paramDependent_;
}

void ExtraInfo::setParamDependent(const std::string& value)
{
    paramDependent_ = value;
    paramDependentIsSet_ = true;
}

bool ExtraInfo::paramDependentIsSet() const
{
    return paramDependentIsSet_;
}

void ExtraInfo::unsetparamDependent()
{
    paramDependentIsSet_ = false;
}

std::string ExtraInfo::getSummary() const
{
    return summary_;
}

void ExtraInfo::setSummary(const std::string& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool ExtraInfo::summaryIsSet() const
{
    return summaryIsSet_;
}

void ExtraInfo::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


