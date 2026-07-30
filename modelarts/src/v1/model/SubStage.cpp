

#include "huaweicloud/modelarts/v1/model/SubStage.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SubStage::SubStage()
{
    name_ = "";
    nameIsSet_ = false;
    enMessage_ = "";
    enMessageIsSet_ = false;
    zhMessage_ = "";
    zhMessageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

SubStage::~SubStage() = default;

void SubStage::validate()
{
}

web::json::value SubStage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enMessageIsSet_) {
        val[utility::conversions::to_string_t("en_message")] = ModelBase::toJson(enMessage_);
    }
    if(zhMessageIsSet_) {
        val[utility::conversions::to_string_t("zh_message")] = ModelBase::toJson(zhMessage_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool SubStage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zh_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zh_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZhMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string SubStage::getName() const
{
    return name_;
}

void SubStage::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubStage::nameIsSet() const
{
    return nameIsSet_;
}

void SubStage::unsetname()
{
    nameIsSet_ = false;
}

std::string SubStage::getEnMessage() const
{
    return enMessage_;
}

void SubStage::setEnMessage(const std::string& value)
{
    enMessage_ = value;
    enMessageIsSet_ = true;
}

bool SubStage::enMessageIsSet() const
{
    return enMessageIsSet_;
}

void SubStage::unsetenMessage()
{
    enMessageIsSet_ = false;
}

std::string SubStage::getZhMessage() const
{
    return zhMessage_;
}

void SubStage::setZhMessage(const std::string& value)
{
    zhMessage_ = value;
    zhMessageIsSet_ = true;
}

bool SubStage::zhMessageIsSet() const
{
    return zhMessageIsSet_;
}

void SubStage::unsetzhMessage()
{
    zhMessageIsSet_ = false;
}

std::string SubStage::getCreateTime() const
{
    return createTime_;
}

void SubStage::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SubStage::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SubStage::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


