

#include "huaweicloud/codehub/v4/model/DeleteProjectMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProjectMergeRequestTemplateResponse::DeleteProjectMergeRequestTemplateResponse()
{
    id_ = 0;
    idIsSet_ = false;
}

DeleteProjectMergeRequestTemplateResponse::~DeleteProjectMergeRequestTemplateResponse() = default;

void DeleteProjectMergeRequestTemplateResponse::validate()
{
}

web::json::value DeleteProjectMergeRequestTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteProjectMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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


int32_t DeleteProjectMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void DeleteProjectMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteProjectMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteProjectMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


