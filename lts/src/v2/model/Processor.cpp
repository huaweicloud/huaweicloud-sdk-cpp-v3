

#include "huaweicloud/lts/v2/model/Processor.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Processor::Processor()
{
    type_ = "";
    typeIsSet_ = false;
    detailIsSet_ = false;
}

Processor::~Processor() = default;

void Processor::validate()
{
}

web::json::value Processor::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool Processor::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            Detail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string Processor::getType() const
{
    return type_;
}

void Processor::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Processor::typeIsSet() const
{
    return typeIsSet_;
}

void Processor::unsettype()
{
    typeIsSet_ = false;
}

Detail Processor::getDetail() const
{
    return detail_;
}

void Processor::setDetail(const Detail& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool Processor::detailIsSet() const
{
    return detailIsSet_;
}

void Processor::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


