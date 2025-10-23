
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectMergeRequestTemplateRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectMergeRequestTemplateRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codehub/v4/model/CreateMergeRequestTemplateDto.h>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  UpdateProjectMergeRequestTemplateRequest
    : public ModelBase
{
public:
    UpdateProjectMergeRequestTemplateRequest();
    virtual ~UpdateProjectMergeRequestTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateProjectMergeRequestTemplateRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求模板id。
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CreateMergeRequestTemplateDto getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateMergeRequestTemplateDto& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t templateId_;
    bool templateIdIsSet_;
    CreateMergeRequestTemplateDto body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateProjectMergeRequestTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateProjectMergeRequestTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_UpdateProjectMergeRequestTemplateRequest_H_
