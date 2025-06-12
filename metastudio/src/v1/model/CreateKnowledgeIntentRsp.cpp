

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeIntentRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeIntentRsp::CreateKnowledgeIntentRsp()
{
    intentId_ = "";
    intentIdIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
}

CreateKnowledgeIntentRsp::~CreateKnowledgeIntentRsp() = default;

void CreateKnowledgeIntentRsp::validate()
{
}

web::json::value CreateKnowledgeIntentRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }

    return val;
}
bool CreateKnowledgeIntentRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentify(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeIntentRsp::getIntentId() const
{
    return intentId_;
}

void CreateKnowledgeIntentRsp::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool CreateKnowledgeIntentRsp::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void CreateKnowledgeIntentRsp::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string CreateKnowledgeIntentRsp::getIdentify() const
{
    return identify_;
}

void CreateKnowledgeIntentRsp::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool CreateKnowledgeIntentRsp::identifyIsSet() const
{
    return identifyIsSet_;
}

void CreateKnowledgeIntentRsp::unsetidentify()
{
    identifyIsSet_ = false;
}

}
}
}
}
}


