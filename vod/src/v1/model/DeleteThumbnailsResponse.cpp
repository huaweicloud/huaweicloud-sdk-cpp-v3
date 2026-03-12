

#include "huaweicloud/vod/v1/model/DeleteThumbnailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




DeleteThumbnailsResponse::DeleteThumbnailsResponse()
{
    deleteResultArrayIsSet_ = false;
}

DeleteThumbnailsResponse::~DeleteThumbnailsResponse() = default;

void DeleteThumbnailsResponse::validate()
{
}

web::json::value DeleteThumbnailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deleteResultArrayIsSet_) {
        val[utility::conversions::to_string_t("delete_result_array")] = ModelBase::toJson(deleteResultArray_);
    }

    return val;
}
bool DeleteThumbnailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delete_result_array"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_result_array"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteThumbnailResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteResultArray(refVal);
        }
    }
    return ok;
}


std::vector<DeleteThumbnailResult>& DeleteThumbnailsResponse::getDeleteResultArray()
{
    return deleteResultArray_;
}

void DeleteThumbnailsResponse::setDeleteResultArray(const std::vector<DeleteThumbnailResult>& value)
{
    deleteResultArray_ = value;
    deleteResultArrayIsSet_ = true;
}

bool DeleteThumbnailsResponse::deleteResultArrayIsSet() const
{
    return deleteResultArrayIsSet_;
}

void DeleteThumbnailsResponse::unsetdeleteResultArray()
{
    deleteResultArrayIsSet_ = false;
}

}
}
}
}
}


