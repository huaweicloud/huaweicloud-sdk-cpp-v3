

#include "huaweicloud/cloudtable/v2/model/UpdateClusterSettingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




UpdateClusterSettingRequest::UpdateClusterSettingRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClusterSettingRequest::~UpdateClusterSettingRequest() = default;

void UpdateClusterSettingRequest::validate()
{
}

web::json::value UpdateClusterSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateClusterSettingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HbaseModifySettingV2Req refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateClusterSettingRequest::getClusterId() const
{
    return clusterId_;
}

void UpdateClusterSettingRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool UpdateClusterSettingRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void UpdateClusterSettingRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string UpdateClusterSettingRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateClusterSettingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateClusterSettingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateClusterSettingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

HbaseModifySettingV2Req UpdateClusterSettingRequest::getBody() const
{
    return body_;
}

void UpdateClusterSettingRequest::setBody(const HbaseModifySettingV2Req& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClusterSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClusterSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


