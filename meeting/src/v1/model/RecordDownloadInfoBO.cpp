

#include "huaweicloud/meeting/v1/model/RecordDownloadInfoBO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RecordDownloadInfoBO::RecordDownloadInfoBO()
{
    confUuid_ = "";
    confUuidIsSet_ = false;
    urlsIsSet_ = false;
}

RecordDownloadInfoBO::~RecordDownloadInfoBO() = default;

void RecordDownloadInfoBO::validate()
{
}

web::json::value RecordDownloadInfoBO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUuidIsSet_) {
        val[utility::conversions::to_string_t("confUuid")] = ModelBase::toJson(confUuid_);
    }
    if(urlsIsSet_) {
        val[utility::conversions::to_string_t("urls")] = ModelBase::toJson(urls_);
    }

    return val;
}
bool RecordDownloadInfoBO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urls"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordDownloadUrlDO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrls(refVal);
        }
    }
    return ok;
}


std::string RecordDownloadInfoBO::getConfUuid() const
{
    return confUuid_;
}

void RecordDownloadInfoBO::setConfUuid(const std::string& value)
{
    confUuid_ = value;
    confUuidIsSet_ = true;
}

bool RecordDownloadInfoBO::confUuidIsSet() const
{
    return confUuidIsSet_;
}

void RecordDownloadInfoBO::unsetconfUuid()
{
    confUuidIsSet_ = false;
}

std::vector<RecordDownloadUrlDO>& RecordDownloadInfoBO::getUrls()
{
    return urls_;
}

void RecordDownloadInfoBO::setUrls(const std::vector<RecordDownloadUrlDO>& value)
{
    urls_ = value;
    urlsIsSet_ = true;
}

bool RecordDownloadInfoBO::urlsIsSet() const
{
    return urlsIsSet_;
}

void RecordDownloadInfoBO::unseturls()
{
    urlsIsSet_ = false;
}

}
}
}
}
}


