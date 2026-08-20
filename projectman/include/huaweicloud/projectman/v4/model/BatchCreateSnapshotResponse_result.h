
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotResponse_result_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotResponse_result_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CreateSnapshotResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建快照的结果。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchCreateSnapshotResponse_result
    : public ModelBase
{
public:
    BatchCreateSnapshotResponse_result();
    virtual ~BatchCreateSnapshotResponse_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSnapshotResponse_result members

    /// <summary>
    /// 创建成功的快照列表。
    /// </summary>

    std::vector<CreateSnapshotResult>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<CreateSnapshotResult>& value);

    /// <summary>
    /// 创建失败的快照列表。
    /// </summary>

    std::vector<CreateSnapshotResult>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<CreateSnapshotResult>& value);


protected:
    std::vector<CreateSnapshotResult> success_;
    bool successIsSet_;
    std::vector<CreateSnapshotResult> failed_;
    bool failedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotResponse_result_H_
