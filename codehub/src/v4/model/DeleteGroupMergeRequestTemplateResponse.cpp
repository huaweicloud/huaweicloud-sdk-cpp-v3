

#include "huaweicloud/codehub/v4/model/DeleteGroupMergeRequestTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteGroupMergeRequestTemplateResponse::DeleteGroupMergeRequestTemplateResponse()
{
    id_ = 0;
    idIsSet_ = false;
}

DeleteGroupMergeRequestTemplateResponse::~DeleteGroupMergeRequestTemplateResponse() = default;

void DeleteGroupMergeRequestTemplateResponse::validate()
{
}

web::json::value DeleteGroupMergeRequestTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteGroupMergeRequestTemplateResponse::fromJson(const web::json::value& val)
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


int32_t DeleteGroupMergeRequestTemplateResponse::getId() const
{
    return id_;
}

void DeleteGroupMergeRequestTemplateResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteGroupMergeRequestTemplateResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteGroupMergeRequestTemplateResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


