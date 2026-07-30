
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPhyInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPhyInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerPhyInfo
    : public ModelBase
{
public:
    ServerPhyInfo();
    virtual ~ServerPhyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerPhyInfo members

    /// <summary>
    /// **参数解释**：Lite Server实例资源ID。 **取值范围**：长度为[8,36]个字符。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：Tor信息。 **取值范围**：多个ip信息，IPv4格式。
    /// </summary>

    std::vector<std::string>& getNetworkNodes();
    bool networkNodesIsSet() const;
    void unsetnetworkNodes();
    void setNetworkNodes(const std::vector<std::string>& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<std::string> networkNodes_;
    bool networkNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerPhyInfo_H_
