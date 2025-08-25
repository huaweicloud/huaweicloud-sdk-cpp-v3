
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListClusterMasterSnapshotTasksResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListClusterMasterSnapshotTasksResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/SnapshotTaskMetadata.h>
#include <huaweicloud/cce/v3/model/SnapshotTaskStatus.h>
#include <huaweicloud/cce/v3/model/SnapshotTask.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListClusterMasterSnapshotTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClusterMasterSnapshotTasksResponse();
    virtual ~ListClusterMasterSnapshotTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClusterMasterSnapshotTasksResponse members

    /// <summary>
    /// api版本，默认为v3.1
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SnapshotTaskMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const SnapshotTaskMetadata& value);

    /// <summary>
    /// 备份任务列表
    /// </summary>

    std::vector<SnapshotTask>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<SnapshotTask>& value);

    /// <summary>
    /// 
    /// </summary>

    SnapshotTaskStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const SnapshotTaskStatus& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    SnapshotTaskMetadata metadata_;
    bool metadataIsSet_;
    std::vector<SnapshotTask> items_;
    bool itemsIsSet_;
    SnapshotTaskStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListClusterMasterSnapshotTasksResponse_H_
