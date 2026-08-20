
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BatchCreateSnapshotRequest_issues.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建工作项快照请求对象
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchCreateSnapshotRequest
    : public ModelBase
{
public:
    BatchCreateSnapshotRequest();
    virtual ~BatchCreateSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSnapshotRequest members

    /// <summary>
    /// 需要创建快照的工作项数组。 每次最多支持对50个工作项创建快照。
    /// </summary>

    std::vector<BatchCreateSnapshotRequest_issues>& getIssues();
    bool issuesIsSet() const;
    void unsetissues();
    void setIssues(const std::vector<BatchCreateSnapshotRequest_issues>& value);


protected:
    std::vector<BatchCreateSnapshotRequest_issues> issues_;
    bool issuesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchCreateSnapshotRequest_H_
