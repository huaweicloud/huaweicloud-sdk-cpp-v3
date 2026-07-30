

#include "huaweicloud/modelarts/v1/model/SSHResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SSHResp::SSHResp()
{
    keyPairNamesIsSet_ = false;
    taskUrlsIsSet_ = false;
}

SSHResp::~SSHResp() = default;

void SSHResp::validate()
{
}

web::json::value SSHResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyPairNamesIsSet_) {
        val[utility::conversions::to_string_t("key_pair_names")] = ModelBase::toJson(keyPairNames_);
    }
    if(taskUrlsIsSet_) {
        val[utility::conversions::to_string_t("task_urls")] = ModelBase::toJson(taskUrls_);
    }

    return val;
}
bool SSHResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_pair_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_pair_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyPairNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskUrls> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUrls(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& SSHResp::getKeyPairNames()
{
    return keyPairNames_;
}

void SSHResp::setKeyPairNames(const std::vector<std::string>& value)
{
    keyPairNames_ = value;
    keyPairNamesIsSet_ = true;
}

bool SSHResp::keyPairNamesIsSet() const
{
    return keyPairNamesIsSet_;
}

void SSHResp::unsetkeyPairNames()
{
    keyPairNamesIsSet_ = false;
}

std::vector<TaskUrls>& SSHResp::getTaskUrls()
{
    return taskUrls_;
}

void SSHResp::setTaskUrls(const std::vector<TaskUrls>& value)
{
    taskUrls_ = value;
    taskUrlsIsSet_ = true;
}

bool SSHResp::taskUrlsIsSet() const
{
    return taskUrlsIsSet_;
}

void SSHResp::unsettaskUrls()
{
    taskUrlsIsSet_ = false;
}

}
}
}
}
}


