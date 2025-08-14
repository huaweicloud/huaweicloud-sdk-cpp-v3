

#include "huaweicloud/identitycenter/v1/model/ResponseSourceDetailsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResponseSourceDetailsDto::ResponseSourceDetailsDto()
{
    sourceIsSet_ = false;
}

ResponseSourceDetailsDto::~ResponseSourceDetailsDto() = default;

void ResponseSourceDetailsDto::validate()
{
}

web::json::value ResponseSourceDetailsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool ResponseSourceDetailsDto::fromJson(const web::json::value& val)
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


std::vector<std::string>& ResponseSourceDetailsDto::getSource()
{
    return source_;
}

void ResponseSourceDetailsDto::setSource(const std::vector<std::string>& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ResponseSourceDetailsDto::sourceIsSet() const
{
    return sourceIsSet_;
}

void ResponseSourceDetailsDto::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


