

#include "huaweicloud/lts/v2/model/GetAccessConfigListRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




GetAccessConfigListRequestBody::GetAccessConfigListRequestBody()
{
    accessConfigNameListIsSet_ = false;
    hostGroupNameListIsSet_ = false;
    logGroupNameListIsSet_ = false;
    logStreamNameListIsSet_ = false;
    accessConfigTagListIsSet_ = false;
}

GetAccessConfigListRequestBody::~GetAccessConfigListRequestBody() = default;

void GetAccessConfigListRequestBody::validate()
{
}

web::json::value GetAccessConfigListRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessConfigNameListIsSet_) {
        val[utility::conversions::to_string_t("access_config_name_list")] = ModelBase::toJson(accessConfigNameList_);
    }
    if(hostGroupNameListIsSet_) {
        val[utility::conversions::to_string_t("host_group_name_list")] = ModelBase::toJson(hostGroupNameList_);
    }
    if(logGroupNameListIsSet_) {
        val[utility::conversions::to_string_t("log_group_name_list")] = ModelBase::toJson(logGroupNameList_);
    }
    if(logStreamNameListIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name_list")] = ModelBase::toJson(logStreamNameList_);
    }
    if(accessConfigTagListIsSet_) {
        val[utility::conversions::to_string_t("access_config_tag_list")] = ModelBase::toJson(accessConfigTagList_);
    }

    return val;
}

bool GetAccessConfigListRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_config_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_group_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_group_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostGroupNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_stream_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_config_tag_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_config_tag_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessConfigTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessConfigTagList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& GetAccessConfigListRequestBody::getAccessConfigNameList()
{
    return accessConfigNameList_;
}

void GetAccessConfigListRequestBody::setAccessConfigNameList(const std::vector<std::string>& value)
{
    accessConfigNameList_ = value;
    accessConfigNameListIsSet_ = true;
}

bool GetAccessConfigListRequestBody::accessConfigNameListIsSet() const
{
    return accessConfigNameListIsSet_;
}

void GetAccessConfigListRequestBody::unsetaccessConfigNameList()
{
    accessConfigNameListIsSet_ = false;
}

std::vector<std::string>& GetAccessConfigListRequestBody::getHostGroupNameList()
{
    return hostGroupNameList_;
}

void GetAccessConfigListRequestBody::setHostGroupNameList(const std::vector<std::string>& value)
{
    hostGroupNameList_ = value;
    hostGroupNameListIsSet_ = true;
}

bool GetAccessConfigListRequestBody::hostGroupNameListIsSet() const
{
    return hostGroupNameListIsSet_;
}

void GetAccessConfigListRequestBody::unsethostGroupNameList()
{
    hostGroupNameListIsSet_ = false;
}

std::vector<std::string>& GetAccessConfigListRequestBody::getLogGroupNameList()
{
    return logGroupNameList_;
}

void GetAccessConfigListRequestBody::setLogGroupNameList(const std::vector<std::string>& value)
{
    logGroupNameList_ = value;
    logGroupNameListIsSet_ = true;
}

bool GetAccessConfigListRequestBody::logGroupNameListIsSet() const
{
    return logGroupNameListIsSet_;
}

void GetAccessConfigListRequestBody::unsetlogGroupNameList()
{
    logGroupNameListIsSet_ = false;
}

std::vector<std::string>& GetAccessConfigListRequestBody::getLogStreamNameList()
{
    return logStreamNameList_;
}

void GetAccessConfigListRequestBody::setLogStreamNameList(const std::vector<std::string>& value)
{
    logStreamNameList_ = value;
    logStreamNameListIsSet_ = true;
}

bool GetAccessConfigListRequestBody::logStreamNameListIsSet() const
{
    return logStreamNameListIsSet_;
}

void GetAccessConfigListRequestBody::unsetlogStreamNameList()
{
    logStreamNameListIsSet_ = false;
}

std::vector<AccessConfigTag>& GetAccessConfigListRequestBody::getAccessConfigTagList()
{
    return accessConfigTagList_;
}

void GetAccessConfigListRequestBody::setAccessConfigTagList(const std::vector<AccessConfigTag>& value)
{
    accessConfigTagList_ = value;
    accessConfigTagListIsSet_ = true;
}

bool GetAccessConfigListRequestBody::accessConfigTagListIsSet() const
{
    return accessConfigTagListIsSet_;
}

void GetAccessConfigListRequestBody::unsetaccessConfigTagList()
{
    accessConfigTagListIsSet_ = false;
}

}
}
}
}
}


