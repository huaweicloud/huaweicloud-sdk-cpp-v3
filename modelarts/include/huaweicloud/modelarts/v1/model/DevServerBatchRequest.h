
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerBatchRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerBatchRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchActionDevServerIds.h>
#include <huaweicloud/modelarts/v1/model/ServerOsRequest.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Lite Server实例批量操作请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DevServerBatchRequest
    : public ModelBase
{
public:
    DevServerBatchRequest();
    virtual ~DevServerBatchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DevServerBatchRequest members

    /// <summary>
    /// **参数解释**：批量操作类型。 **约束限制**：不涉及。 **取值范围**： - START：批量启动Lite Server实例 - STOP：批量停止Lite Server实例 - REBOOT：批量重启Lite Server实例 - CHANGEOS：批量切换Lite Server服务器操作系统镜像 - REINSTALLOS：批量重装Lite Server服务器操作系统镜像 - DELETE：批量删除Lite Server实例 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：批量操作Lite Server ID列表。
    /// </summary>

    std::vector<BatchActionDevServerIds>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<BatchActionDevServerIds>& value);

    /// <summary>
    /// 
    /// </summary>

    ServerOsRequest getExtendParam() const;
    bool extendParamIsSet() const;
    void unsetextendParam();
    void setExtendParam(const ServerOsRequest& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<BatchActionDevServerIds> servers_;
    bool serversIsSet_;
    ServerOsRequest extendParam_;
    bool extendParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DevServerBatchRequest_H_
