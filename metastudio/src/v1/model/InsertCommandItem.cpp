

#include "huaweicloud/metastudio/v1/model/InsertCommandItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InsertCommandItem::InsertCommandItem()
{
    commandId_ = "";
    commandIdIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    paramsIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
}

InsertCommandItem::~InsertCommandItem() = default;

void InsertCommandItem::validate()
{
}

web::json::value InsertCommandItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commandIdIsSet_) {
        val[utility::conversions::to_string_t("command_id")] = ModelBase::toJson(commandId_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool InsertCommandItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("command_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommandId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string InsertCommandItem::getCommandId() const
{
    return commandId_;
}

void InsertCommandItem::setCommandId(const std::string& value)
{
    commandId_ = value;
    commandIdIsSet_ = true;
}

bool InsertCommandItem::commandIdIsSet() const
{
    return commandIdIsSet_;
}

void InsertCommandItem::unsetcommandId()
{
    commandIdIsSet_ = false;
}

std::string InsertCommandItem::getCommand() const
{
    return command_;
}

void InsertCommandItem::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool InsertCommandItem::commandIsSet() const
{
    return commandIsSet_;
}

void InsertCommandItem::unsetcommand()
{
    commandIsSet_ = false;
}

Object InsertCommandItem::getParams() const
{
    return params_;
}

void InsertCommandItem::setParams(const Object& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool InsertCommandItem::paramsIsSet() const
{
    return paramsIsSet_;
}

void InsertCommandItem::unsetparams()
{
    paramsIsSet_ = false;
}

std::string InsertCommandItem::getSource() const
{
    return source_;
}

void InsertCommandItem::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool InsertCommandItem::sourceIsSet() const
{
    return sourceIsSet_;
}

void InsertCommandItem::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


