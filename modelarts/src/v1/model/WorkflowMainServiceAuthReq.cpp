

#include "huaweicloud/modelarts/v1/model/WorkflowMainServiceAuthReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowMainServiceAuthReq::WorkflowMainServiceAuthReq()
{
    mainServiceId_ = "";
    mainServiceIdIsSet_ = false;
    contentId_ = "";
    contentIdIsSet_ = false;
    consumeIsSet_ = false;
}

WorkflowMainServiceAuthReq::~WorkflowMainServiceAuthReq() = default;

void WorkflowMainServiceAuthReq::validate()
{
}

web::json::value WorkflowMainServiceAuthReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mainServiceIdIsSet_) {
        val[utility::conversions::to_string_t("main_service_id")] = ModelBase::toJson(mainServiceId_);
    }
    if(contentIdIsSet_) {
        val[utility::conversions::to_string_t("content_id")] = ModelBase::toJson(contentId_);
    }
    if(consumeIsSet_) {
        val[utility::conversions::to_string_t("consume")] = ModelBase::toJson(consume_);
    }

    return val;
}
bool WorkflowMainServiceAuthReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("main_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consume"));
        if(!fieldValue.is_null())
        {
            WorkflowConsume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsume(refVal);
        }
    }
    return ok;
}


std::string WorkflowMainServiceAuthReq::getMainServiceId() const
{
    return mainServiceId_;
}

void WorkflowMainServiceAuthReq::setMainServiceId(const std::string& value)
{
    mainServiceId_ = value;
    mainServiceIdIsSet_ = true;
}

bool WorkflowMainServiceAuthReq::mainServiceIdIsSet() const
{
    return mainServiceIdIsSet_;
}

void WorkflowMainServiceAuthReq::unsetmainServiceId()
{
    mainServiceIdIsSet_ = false;
}

std::string WorkflowMainServiceAuthReq::getContentId() const
{
    return contentId_;
}

void WorkflowMainServiceAuthReq::setContentId(const std::string& value)
{
    contentId_ = value;
    contentIdIsSet_ = true;
}

bool WorkflowMainServiceAuthReq::contentIdIsSet() const
{
    return contentIdIsSet_;
}

void WorkflowMainServiceAuthReq::unsetcontentId()
{
    contentIdIsSet_ = false;
}

WorkflowConsume WorkflowMainServiceAuthReq::getConsume() const
{
    return consume_;
}

void WorkflowMainServiceAuthReq::setConsume(const WorkflowConsume& value)
{
    consume_ = value;
    consumeIsSet_ = true;
}

bool WorkflowMainServiceAuthReq::consumeIsSet() const
{
    return consumeIsSet_;
}

void WorkflowMainServiceAuthReq::unsetconsume()
{
    consumeIsSet_ = false;
}

}
}
}
}
}


