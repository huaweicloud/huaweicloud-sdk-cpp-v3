
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleDownRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleDownRequest_H_


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
/// 超节点缩容请求
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServerScaleDownRequest
    : public ModelBase
{
public:
    ServerScaleDownRequest();
    virtual ~ServerScaleDownRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerScaleDownRequest members

    /// <summary>
    /// 超节点ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 规格信息
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 缩容节点id
    /// </summary>

    std::vector<std::string>& getServerIds();
    bool serverIdsIsSet() const;
    void unsetserverIds();
    void setServerIds(const std::vector<std::string>& value);

    /// <summary>
    /// 资源规格信息
    /// </summary>

    std::string getResourceFlavor() const;
    bool resourceFlavorIsSet() const;
    void unsetresourceFlavor();
    void setResourceFlavor(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::vector<std::string> serverIds_;
    bool serverIdsIsSet_;
    std::string resourceFlavor_;
    bool resourceFlavorIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServerScaleDownRequest_H_
