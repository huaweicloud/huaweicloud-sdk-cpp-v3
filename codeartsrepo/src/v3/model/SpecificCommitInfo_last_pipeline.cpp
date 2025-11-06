

#include "huaweicloud/codeartsrepo/v3/model/SpecificCommitInfo_last_pipeline.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




SpecificCommitInfo_last_pipeline::SpecificCommitInfo_last_pipeline()
{
    id_ = 0;
    idIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
}

SpecificCommitInfo_last_pipeline::~SpecificCommitInfo_last_pipeline() = default;

void SpecificCommitInfo_last_pipeline::validate()
{
}

web::json::value SpecificCommitInfo_last_pipeline::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }

    return val;
}
bool SpecificCommitInfo_last_pipeline::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    return ok;
}


int32_t SpecificCommitInfo_last_pipeline::getId() const
{
    return id_;
}

void SpecificCommitInfo_last_pipeline::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SpecificCommitInfo_last_pipeline::idIsSet() const
{
    return idIsSet_;
}

void SpecificCommitInfo_last_pipeline::unsetid()
{
    idIsSet_ = false;
}

std::string SpecificCommitInfo_last_pipeline::getSha() const
{
    return sha_;
}

void SpecificCommitInfo_last_pipeline::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool SpecificCommitInfo_last_pipeline::shaIsSet() const
{
    return shaIsSet_;
}

void SpecificCommitInfo_last_pipeline::unsetsha()
{
    shaIsSet_ = false;
}

std::string SpecificCommitInfo_last_pipeline::getRef() const
{
    return ref_;
}

void SpecificCommitInfo_last_pipeline::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool SpecificCommitInfo_last_pipeline::refIsSet() const
{
    return refIsSet_;
}

void SpecificCommitInfo_last_pipeline::unsetref()
{
    refIsSet_ = false;
}

std::string SpecificCommitInfo_last_pipeline::getStatus() const
{
    return status_;
}

void SpecificCommitInfo_last_pipeline::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SpecificCommitInfo_last_pipeline::statusIsSet() const
{
    return statusIsSet_;
}

void SpecificCommitInfo_last_pipeline::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SpecificCommitInfo_last_pipeline::getWebUrl() const
{
    return webUrl_;
}

void SpecificCommitInfo_last_pipeline::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool SpecificCommitInfo_last_pipeline::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void SpecificCommitInfo_last_pipeline::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

}
}
}
}
}


