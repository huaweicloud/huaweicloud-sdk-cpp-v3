

#include "huaweicloud/metastudio/v1/model/CreateSubtitleFileReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSubtitleFileReq::CreateSubtitleFileReq()
{
    scriptId_ = "";
    scriptIdIsSet_ = false;
    sequenceNo_ = 0;
    sequenceNoIsSet_ = false;
    callbackConfigIsSet_ = false;
}

CreateSubtitleFileReq::~CreateSubtitleFileReq() = default;

void CreateSubtitleFileReq::validate()
{
}

web::json::value CreateSubtitleFileReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(sequenceNoIsSet_) {
        val[utility::conversions::to_string_t("sequence_no")] = ModelBase::toJson(sequenceNo_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }

    return val;
}
bool CreateSubtitleFileReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            CallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    return ok;
}


std::string CreateSubtitleFileReq::getScriptId() const
{
    return scriptId_;
}

void CreateSubtitleFileReq::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool CreateSubtitleFileReq::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void CreateSubtitleFileReq::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

int32_t CreateSubtitleFileReq::getSequenceNo() const
{
    return sequenceNo_;
}

void CreateSubtitleFileReq::setSequenceNo(int32_t value)
{
    sequenceNo_ = value;
    sequenceNoIsSet_ = true;
}

bool CreateSubtitleFileReq::sequenceNoIsSet() const
{
    return sequenceNoIsSet_;
}

void CreateSubtitleFileReq::unsetsequenceNo()
{
    sequenceNoIsSet_ = false;
}

CallBackConfig CreateSubtitleFileReq::getCallbackConfig() const
{
    return callbackConfig_;
}

void CreateSubtitleFileReq::setCallbackConfig(const CallBackConfig& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool CreateSubtitleFileReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void CreateSubtitleFileReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}


