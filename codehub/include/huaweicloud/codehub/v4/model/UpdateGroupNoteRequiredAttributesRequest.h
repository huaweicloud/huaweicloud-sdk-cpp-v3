
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupNoteRequiredAttributesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupNoteRequiredAttributesRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/PostNoteRequiredAttributeDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateGroupNoteRequiredAttributesRequest
    : public ModelBase
{
public:
    UpdateGroupNoteRequiredAttributesRequest();
    virtual ~UpdateGroupNoteRequiredAttributesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateGroupNoteRequiredAttributesRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    PostNoteRequiredAttributeDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostNoteRequiredAttributeDto& value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    PostNoteRequiredAttributeDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateGroupNoteRequiredAttributesRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateGroupNoteRequiredAttributesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateGroupNoteRequiredAttributesRequest_H_
