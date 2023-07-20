
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_Flavor_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_Flavor_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 规格信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  Flavor
    : public ModelBase
{
public:
    Flavor();
    virtual ~Flavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Flavor members

    /// <summary>
    /// 引擎名称。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 节点类型。文档数据库包含以下几种节点类型： - mongos - shard - config - replica - single
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// CPU核数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 内存大小，单位为兆字节。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// 资源规格编码。例如：dds.mongodb.c6.xlarge.2.shard。  - “dds”表示文档数据库服务产品。 - “c6.xlarge.2”表示节点性能规格，为高内存类型。 - “shard”表示节点类型。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// &#39;支持该规格的可用区ID。&#39; 示例：[\&quot;cn-east-2a\&quot;,\&quot;cn-east-2b\&quot;,\&quot;cn-east-2c\&quot;]。
    /// </summary>

    Object getAzStatus() const;
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const Object& value);


protected:
    std::string engineName_;
    bool engineNameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    Object azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_Flavor_H_
