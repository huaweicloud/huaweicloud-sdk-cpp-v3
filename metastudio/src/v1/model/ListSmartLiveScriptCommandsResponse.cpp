

#include "huaweicloud/metastudio/v1/model/ListSmartLiveScriptCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveScriptCommandsResponse::ListSmartLiveScriptCommandsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    scriptsCommandsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListSmartLiveScriptCommandsResponse::~ListSmartLiveScriptCommandsResponse() = default;

void ListSmartLiveScriptCommandsResponse::validate()
{
}

web::json::value ListSmartLiveScriptCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(scriptsCommandsIsSet_) {
        val[utility::conversions::to_string_t("scripts_commands")] = ModelBase::toJson(scriptsCommands_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListSmartLiveScriptCommandsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scripts_commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scripts_commands"));
        if(!fieldValue.is_null())
        {
            std::vector<ScriptCommand> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptsCommands(refVal);
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


int32_t ListSmartLiveScriptCommandsResponse::getCount() const
{
    return count_;
}

void ListSmartLiveScriptCommandsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSmartLiveScriptCommandsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSmartLiveScriptCommandsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ScriptCommand>& ListSmartLiveScriptCommandsResponse::getScriptsCommands()
{
    return scriptsCommands_;
}

void ListSmartLiveScriptCommandsResponse::setScriptsCommands(const std::vector<ScriptCommand>& value)
{
    scriptsCommands_ = value;
    scriptsCommandsIsSet_ = true;
}

bool ListSmartLiveScriptCommandsResponse::scriptsCommandsIsSet() const
{
    return scriptsCommandsIsSet_;
}

void ListSmartLiveScriptCommandsResponse::unsetscriptsCommands()
{
    scriptsCommandsIsSet_ = false;
}

std::string ListSmartLiveScriptCommandsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListSmartLiveScriptCommandsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListSmartLiveScriptCommandsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListSmartLiveScriptCommandsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


