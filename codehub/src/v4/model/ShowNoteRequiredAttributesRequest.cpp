

#include "huaweicloud/codehub/v4/model/ShowNoteRequiredAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowNoteRequiredAttributesRequest::ShowNoteRequiredAttributesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowNoteRequiredAttributesRequest::~ShowNoteRequiredAttributesRequest() = default;

void ShowNoteRequiredAttributesRequest::validate()
{
}

web::json::value ShowNoteRequiredAttributesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowNoteRequiredAttributesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


int32_t ShowNoteRequiredAttributesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowNoteRequiredAttributesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowNoteRequiredAttributesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowNoteRequiredAttributesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


