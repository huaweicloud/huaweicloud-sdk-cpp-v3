
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClustersResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClustersResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cce/v3/model/AutopilotCluster.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  ListAutopilotClustersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAutopilotClustersResponse();
    virtual ~ListAutopilotClustersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutopilotClustersResponse members

    /// <summary>
    /// Api type
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// API version
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 集群对象列表，包含了当前项目下所有集群的详细信息。您可通过items.metadata.name下的值来找到对应的集群。
    /// </summary>

    std::vector<AutopilotCluster>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<AutopilotCluster>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::vector<AutopilotCluster> items_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListAutopilotClustersResponse_H_
