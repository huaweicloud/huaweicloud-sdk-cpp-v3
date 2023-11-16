

#include "huaweicloud/aad/v1/model/BatchIdBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BatchIdBody::BatchIdBody()
{
    idsIsSet_ = false;
}

BatchIdBody::~BatchIdBody() = default;

void BatchIdBody::validate()
{
}

web::json::value BatchIdBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool BatchIdBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchIdBody::getIds()
{
    return ids_;
}

void BatchIdBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchIdBody::idsIsSet() const
{
    return idsIsSet_;
}

void BatchIdBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


