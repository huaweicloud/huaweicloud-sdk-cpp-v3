
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateGroupMergeRequestTemplateRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateGroupMergeRequestTemplateRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CreateMergeRequestTemplateDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateGroupMergeRequestTemplateRequest
    : public ModelBase
{
public:
    CreateGroupMergeRequestTemplateRequest();
    virtual ~CreateGroupMergeRequestTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGroupMergeRequestTemplateRequest members

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

    CreateMergeRequestTemplateDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMergeRequestTemplateDto& value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;
    CreateMergeRequestTemplateDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateGroupMergeRequestTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateGroupMergeRequestTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateGroupMergeRequestTemplateRequest_H_
