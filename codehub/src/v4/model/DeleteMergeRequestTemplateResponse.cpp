

#include "huaweicloud/codehub/v4/model/DeleteMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteMergeRequestTemplateResponse::DeleteMergeRequestTemplateResponse()
{
    id_ = 0;
    idIsSet_ = false;
}

DeleteMergeRequestTemplateResponse::~DeleteMergeRequestTemplateResponse() = default;

void DeleteMergeRequestTemplateResponse::validate()
{
}

web::json::value DeleteMergeRequestTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteMergeRequestTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


int32_t DeleteMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void DeleteMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


