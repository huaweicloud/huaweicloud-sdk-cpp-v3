

#include "huaweicloud/vod/v1/model/CreateTemplateGroupCollectionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateTemplateGroupCollectionResponse::CreateTemplateGroupCollectionResponse()
{
    groupCollectionId_ = "";
    groupCollectionIdIsSet_ = false;
}

CreateTemplateGroupCollectionResponse::~CreateTemplateGroupCollectionResponse() = default;

void CreateTemplateGroupCollectionResponse::validate()
{
}

web::json::value CreateTemplateGroupCollectionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupCollectionIdIsSet_) {
        val[utility::conversions::to_string_t("group_collection_id")] = ModelBase::toJson(groupCollectionId_);
    }

    return val;
}
bool CreateTemplateGroupCollectionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_collection_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_collection_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupCollectionId(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateGroupCollectionResponse::getGroupCollectionId() const
{
    return groupCollectionId_;
}

void CreateTemplateGroupCollectionResponse::setGroupCollectionId(const std::string& value)
{
    groupCollectionId_ = value;
    groupCollectionIdIsSet_ = true;
}

bool CreateTemplateGroupCollectionResponse::groupCollectionIdIsSet() const
{
    return groupCollectionIdIsSet_;
}

void CreateTemplateGroupCollectionResponse::unsetgroupCollectionId()
{
    groupCollectionIdIsSet_ = false;
}

}
}
}
}
}


