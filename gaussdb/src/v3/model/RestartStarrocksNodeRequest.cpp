

#include "huaweicloud/gaussdb/v3/model/RestartStarrocksNodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartStarrocksNodeRequest::RestartStarrocksNodeRequest()
{
    starrocksNodeId_ = "";
    starrocksNodeIdIsSet_ = false;
    starrocksInstanceId_ = "";
    starrocksInstanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

RestartStarrocksNodeRequest::~RestartStarrocksNodeRequest() = default;

void RestartStarrocksNodeRequest::validate()
{
}

web::json::value RestartStarrocksNodeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(starrocksNodeIdIsSet_) {
        val[utility::conversions::to_string_t("starrocks_node_id")] = ModelBase::toJson(starrocksNodeId_);
    }
    if(starrocksInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("starrocks_instance_id")] = ModelBase::toJson(starrocksInstanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool RestartStarrocksNodeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("starrocks_node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starrocks_node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarrocksNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starrocks_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starrocks_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStarrocksInstanceId(refVal);
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
    return ok;
}


std::string RestartStarrocksNodeRequest::getStarrocksNodeId() const
{
    return starrocksNodeId_;
}

void RestartStarrocksNodeRequest::setStarrocksNodeId(const std::string& value)
{
    starrocksNodeId_ = value;
    starrocksNodeIdIsSet_ = true;
}

bool RestartStarrocksNodeRequest::starrocksNodeIdIsSet() const
{
    return starrocksNodeIdIsSet_;
}

void RestartStarrocksNodeRequest::unsetstarrocksNodeId()
{
    starrocksNodeIdIsSet_ = false;
}

std::string RestartStarrocksNodeRequest::getStarrocksInstanceId() const
{
    return starrocksInstanceId_;
}

void RestartStarrocksNodeRequest::setStarrocksInstanceId(const std::string& value)
{
    starrocksInstanceId_ = value;
    starrocksInstanceIdIsSet_ = true;
}

bool RestartStarrocksNodeRequest::starrocksInstanceIdIsSet() const
{
    return starrocksInstanceIdIsSet_;
}

void RestartStarrocksNodeRequest::unsetstarrocksInstanceId()
{
    starrocksInstanceIdIsSet_ = false;
}

std::string RestartStarrocksNodeRequest::getXLanguage() const
{
    return xLanguage_;
}

void RestartStarrocksNodeRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool RestartStarrocksNodeRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void RestartStarrocksNodeRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


