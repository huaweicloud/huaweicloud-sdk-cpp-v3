

#include "huaweicloud/ecs/v2/model/ListServerVolumeAttachmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerVolumeAttachmentsResponse::ListServerVolumeAttachmentsResponse()
{
    volumeAttachmentsIsSet_ = false;
}

ListServerVolumeAttachmentsResponse::~ListServerVolumeAttachmentsResponse() = default;

void ListServerVolumeAttachmentsResponse::validate()
{
}

web::json::value ListServerVolumeAttachmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeAttachmentsIsSet_) {
        val[utility::conversions::to_string_t("volumeAttachments")] = ModelBase::toJson(volumeAttachments_);
    }

    return val;
}
bool ListServerVolumeAttachmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeAttachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeAttachments"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerVolumeAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeAttachments(refVal);
        }
    }
    return ok;
}


std::vector<ServerVolumeAttachment>& ListServerVolumeAttachmentsResponse::getVolumeAttachments()
{
    return volumeAttachments_;
}

void ListServerVolumeAttachmentsResponse::setVolumeAttachments(const std::vector<ServerVolumeAttachment>& value)
{
    volumeAttachments_ = value;
    volumeAttachmentsIsSet_ = true;
}

bool ListServerVolumeAttachmentsResponse::volumeAttachmentsIsSet() const
{
    return volumeAttachmentsIsSet_;
}

void ListServerVolumeAttachmentsResponse::unsetvolumeAttachments()
{
    volumeAttachmentsIsSet_ = false;
}

}
}
}
}
}


