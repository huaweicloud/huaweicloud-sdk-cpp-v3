

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteDisasterRecordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteDisasterRecordRequestBody::DeleteDisasterRecordRequestBody()
{
    id_ = "";
    idIsSet_ = false;
}

DeleteDisasterRecordRequestBody::~DeleteDisasterRecordRequestBody() = default;

void DeleteDisasterRecordRequestBody::validate()
{
}

web::json::value DeleteDisasterRecordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteDisasterRecordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string DeleteDisasterRecordRequestBody::getId() const
{
    return id_;
}

void DeleteDisasterRecordRequestBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteDisasterRecordRequestBody::idIsSet() const
{
    return idIsSet_;
}

void DeleteDisasterRecordRequestBody::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


