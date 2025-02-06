

#include "huaweicloud/identitycenter/v1/model/AccessControlAttributeValueDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AccessControlAttributeValueDto::AccessControlAttributeValueDto()
{
    sourceIsSet_ = false;
}

AccessControlAttributeValueDto::~AccessControlAttributeValueDto() = default;

void AccessControlAttributeValueDto::validate()
{
}

web::json::value AccessControlAttributeValueDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool AccessControlAttributeValueDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& AccessControlAttributeValueDto::getSource()
{
    return source_;
}

void AccessControlAttributeValueDto::setSource(const std::vector<std::string>& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool AccessControlAttributeValueDto::sourceIsSet() const
{
    return sourceIsSet_;
}

void AccessControlAttributeValueDto::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


