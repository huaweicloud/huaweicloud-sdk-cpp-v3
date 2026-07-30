

#include "huaweicloud/modelarts/v1/model/WorkflowStepMetric.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowStepMetric::WorkflowStepMetric()
{
    createdAt_ = "";
    createdAtIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    dataIsSet_ = false;
}

WorkflowStepMetric::~WorkflowStepMetric() = default;

void WorkflowStepMetric::validate()
{
}

web::json::value WorkflowStepMetric::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool WorkflowStepMetric::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string WorkflowStepMetric::getCreatedAt() const
{
    return createdAt_;
}

void WorkflowStepMetric::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WorkflowStepMetric::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WorkflowStepMetric::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WorkflowStepMetric::getKey() const
{
    return key_;
}

void WorkflowStepMetric::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool WorkflowStepMetric::keyIsSet() const
{
    return keyIsSet_;
}

void WorkflowStepMetric::unsetkey()
{
    keyIsSet_ = false;
}

std::string WorkflowStepMetric::getTitle() const
{
    return title_;
}

void WorkflowStepMetric::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool WorkflowStepMetric::titleIsSet() const
{
    return titleIsSet_;
}

void WorkflowStepMetric::unsettitle()
{
    titleIsSet_ = false;
}

std::string WorkflowStepMetric::getType() const
{
    return type_;
}

void WorkflowStepMetric::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WorkflowStepMetric::typeIsSet() const
{
    return typeIsSet_;
}

void WorkflowStepMetric::unsettype()
{
    typeIsSet_ = false;
}

std::map<std::string, Object>& WorkflowStepMetric::getData()
{
    return data_;
}

void WorkflowStepMetric::setData(const std::map<std::string, Object>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool WorkflowStepMetric::dataIsSet() const
{
    return dataIsSet_;
}

void WorkflowStepMetric::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


