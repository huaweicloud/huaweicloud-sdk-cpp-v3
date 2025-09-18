

#include "huaweicloud/codeartsartifact/v2/model/AttentionDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




AttentionDO::AttentionDO()
{
    attention_ = "";
    attentionIsSet_ = false;
    idsIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
}

AttentionDO::~AttentionDO() = default;

void AttentionDO::validate()
{
}

web::json::value AttentionDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attentionIsSet_) {
        val[utility::conversions::to_string_t("attention")] = ModelBase::toJson(attention_);
    }
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}
bool AttentionDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attention"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attention"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttention(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


std::string AttentionDO::getAttention() const
{
    return attention_;
}

void AttentionDO::setAttention(const std::string& value)
{
    attention_ = value;
    attentionIsSet_ = true;
}

bool AttentionDO::attentionIsSet() const
{
    return attentionIsSet_;
}

void AttentionDO::unsetattention()
{
    attentionIsSet_ = false;
}

std::vector<std::string>& AttentionDO::getIds()
{
    return ids_;
}

void AttentionDO::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool AttentionDO::idsIsSet() const
{
    return idsIsSet_;
}

void AttentionDO::unsetids()
{
    idsIsSet_ = false;
}

std::string AttentionDO::getFormat() const
{
    return format_;
}

void AttentionDO::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool AttentionDO::formatIsSet() const
{
    return formatIsSet_;
}

void AttentionDO::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}


