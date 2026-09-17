
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBaselineSnapshotsRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBaselineSnapshotsRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ShowBaselineSnapshotsRequest
    : public ModelBase
{
public:
    ShowBaselineSnapshotsRequest();
    virtual ~ShowBaselineSnapshotsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBaselineSnapshotsRequest members

    /// <summary>
    /// 项目32位ID，项目唯一标识。通过查询IPD项目列表获取，响应消息体中的id字段的值就是项目ID。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 特性集快照版本ID，不传则查询当前版本特性集，传值则查询对应版本的特性集
    /// </summary>

    std::string getSnapshotVersionId() const;
    bool snapshotVersionIdIsSet() const;
    void unsetsnapshotVersionId();
    void setSnapshotVersionId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string snapshotVersionId_;
    bool snapshotVersionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowBaselineSnapshotsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowBaselineSnapshotsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ShowBaselineSnapshotsRequest_H_
