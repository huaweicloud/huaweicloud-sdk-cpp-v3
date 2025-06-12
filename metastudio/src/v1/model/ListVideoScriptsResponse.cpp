

#include "huaweicloud/metastudio/v1/model/ListVideoScriptsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVideoScriptsResponse::ListVideoScriptsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    videoScriptsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListVideoScriptsResponse::~ListVideoScriptsResponse() = default;

void ListVideoScriptsResponse::validate()
{
}

web::json::value ListVideoScriptsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(videoScriptsIsSet_) {
        val[utility::conversions::to_string_t("video_scripts")] = ModelBase::toJson(videoScripts_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListVideoScriptsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_scripts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_scripts"));
        if(!fieldValue.is_null())
        {
            std::vector<VideoScriptBaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoScripts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListVideoScriptsResponse::getCount() const
{
    return count_;
}

void ListVideoScriptsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListVideoScriptsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListVideoScriptsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<VideoScriptBaseInfo>& ListVideoScriptsResponse::getVideoScripts()
{
    return videoScripts_;
}

void ListVideoScriptsResponse::setVideoScripts(const std::vector<VideoScriptBaseInfo>& value)
{
    videoScripts_ = value;
    videoScriptsIsSet_ = true;
}

bool ListVideoScriptsResponse::videoScriptsIsSet() const
{
    return videoScriptsIsSet_;
}

void ListVideoScriptsResponse::unsetvideoScripts()
{
    videoScriptsIsSet_ = false;
}

std::string ListVideoScriptsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListVideoScriptsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListVideoScriptsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListVideoScriptsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


