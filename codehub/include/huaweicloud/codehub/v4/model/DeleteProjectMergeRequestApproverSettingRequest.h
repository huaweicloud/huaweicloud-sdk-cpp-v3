
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteProjectMergeRequestApproverSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteProjectMergeRequestApproverSettingRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeleteProjectMergeRequestApproverSettingRequest
    : public ModelBase
{
public:
    DeleteProjectMergeRequestApproverSettingRequest();
    virtual ~DeleteProjectMergeRequestApproverSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteProjectMergeRequestApproverSettingRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求审核设置id。
    /// </summary>

    int32_t getSettingId() const;
    bool settingIdIsSet() const;
    void unsetsettingId();
    void setSettingId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t settingId_;
    bool settingIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteProjectMergeRequestApproverSettingRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteProjectMergeRequestApproverSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteProjectMergeRequestApproverSettingRequest_H_
