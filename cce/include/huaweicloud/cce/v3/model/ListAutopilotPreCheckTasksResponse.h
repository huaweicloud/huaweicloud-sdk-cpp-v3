
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotPreCheckTasksResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotPreCheckTasksResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/Metadata.h>
#include <string>
#include <vector>
#include <huaweicloud/cce/v3/model/PrecheckClusterTask.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotPreCheckTasksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotPreCheckTasksResponse();
    virtual ~ListAutopilotPreCheckTasksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotPreCheckTasksResponse members

    /// <summary>
    /// api版本，默认为v3
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Metadata getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const Metadata& value);

    /// <summary>
    /// 集群检查任务列表
    /// </summary>

    std::vector<PrecheckClusterTask>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<PrecheckClusterTask>& value);


protected:
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string kind_;
    bool kindIsSet_;
    Metadata metadata_;
    bool metadataIsSet_;
    std::vector<PrecheckClusterTask> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotPreCheckTasksResponse_H_
