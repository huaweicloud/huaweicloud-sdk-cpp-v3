
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteGroupRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteGroupRequest_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  DeleteGroupRequest
    : public ModelBase
{
public:
    DeleteGroupRequest();
    virtual ~DeleteGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteGroupRequest members

    /// <summary>
    /// **参数解释：** 项目的32位uuid，项目唯一标识，通过[[查询项目列表](https://support.huaweicloud.com/api-projectman/ListProjectsV4.html)](tag:hws)[[查询项目列表](https://support.huaweicloud.com/intl/en-us/api-projectman/ListProjectsV4.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **取值范围：** 字符串长度32。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    int32_t groupId_;
    bool groupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteGroupRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_DeleteGroupRequest_H_
