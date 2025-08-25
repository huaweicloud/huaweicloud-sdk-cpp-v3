
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterMasterSnapshotResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterMasterSnapshotResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/SnapshotCluserResponseMetadata.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  CreateAutopilotClusterMasterSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAutopilotClusterMasterSnapshotResponse();
    virtual ~CreateAutopilotClusterMasterSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAutopilotClusterMasterSnapshotResponse members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SnapshotCluserResponseMetadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const SnapshotCluserResponseMetadata& value);


protected:
    std::string uid_;
    bool uidIsSet_;
    SnapshotCluserResponseMetadata metadata_;
    bool metadataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_CreateAutopilotClusterMasterSnapshotResponse_H_
