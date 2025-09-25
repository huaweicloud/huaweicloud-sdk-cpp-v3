

#include "huaweicloud/codehub/v4/model/ShowBlobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowBlobsRequest::ShowBlobsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    blobId_ = "";
    blobIdIsSet_ = false;
}

ShowBlobsRequest::~ShowBlobsRequest() = default;

void ShowBlobsRequest::validate()
{
}

web::json::value ShowBlobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(blobIdIsSet_) {
        val[utility::conversions::to_string_t("blob_id")] = ModelBase::toJson(blobId_);
    }

    return val;
}
bool ShowBlobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("blob_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobId(refVal);
        }
    }
    return ok;
}


int32_t ShowBlobsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowBlobsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowBlobsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowBlobsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowBlobsRequest::getBlobId() const
{
    return blobId_;
}

void ShowBlobsRequest::setBlobId(const std::string& value)
{
    blobId_ = value;
    blobIdIsSet_ = true;
}

bool ShowBlobsRequest::blobIdIsSet() const
{
    return blobIdIsSet_;
}

void ShowBlobsRequest::unsetblobId()
{
    blobIdIsSet_ = false;
}

}
}
}
}
}


