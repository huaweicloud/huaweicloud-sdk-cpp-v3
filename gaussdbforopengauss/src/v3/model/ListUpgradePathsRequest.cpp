

#include "huaweicloud/gaussdbforopengauss/v3/model/ListUpgradePathsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListUpgradePathsRequest::ListUpgradePathsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    sourceVersion_ = "";
    sourceVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

ListUpgradePathsRequest::~ListUpgradePathsRequest() = default;

void ListUpgradePathsRequest::validate()
{
}

web::json::value ListUpgradePathsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(sourceVersionIsSet_) {
        val[utility::conversions::to_string_t("source_version")] = ModelBase::toJson(sourceVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool ListUpgradePathsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::string ListUpgradePathsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListUpgradePathsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListUpgradePathsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListUpgradePathsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListUpgradePathsRequest::getSourceVersion() const
{
    return sourceVersion_;
}

void ListUpgradePathsRequest::setSourceVersion(const std::string& value)
{
    sourceVersion_ = value;
    sourceVersionIsSet_ = true;
}

bool ListUpgradePathsRequest::sourceVersionIsSet() const
{
    return sourceVersionIsSet_;
}

void ListUpgradePathsRequest::unsetsourceVersion()
{
    sourceVersionIsSet_ = false;
}

std::string ListUpgradePathsRequest::getTargetVersion() const
{
    return targetVersion_;
}

void ListUpgradePathsRequest::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ListUpgradePathsRequest::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ListUpgradePathsRequest::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


