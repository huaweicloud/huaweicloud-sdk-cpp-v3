
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlShowProxyResponseV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlShowProxyResponseV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlProxyV3.h>
#include <huaweicloud/gaussdb/v3/model/MysqlProxyNodeV3.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlShowProxyResponseV3
    : public ModelBase
{
public:
    MysqlShowProxyResponseV3();
    virtual ~MysqlShowProxyResponseV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlShowProxyResponseV3 members

    /// <summary>
    /// 
    /// </summary>

    MysqlProxyV3 getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(const MysqlProxyV3& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlProxyNodeV3 getMasterNode() const;
    bool masterNodeIsSet() const;
    void unsetmasterNode();
    void setMasterNode(const MysqlProxyNodeV3& value);

    /// <summary>
    /// 只读节点信息。
    /// </summary>

    std::vector<MysqlProxyNodeV3>& getReadonlyNodes();
    bool readonlyNodesIsSet() const;
    void unsetreadonlyNodes();
    void setReadonlyNodes(const std::vector<MysqlProxyNodeV3>& value);

    /// <summary>
    /// **参数解释**：  HTAP节点信息。 
    /// </summary>

    std::vector<MysqlProxyNodeV3>& getHtapNodes();
    bool htapNodesIsSet() const;
    void unsethtapNodes();
    void setHtapNodes(const std::vector<MysqlProxyNodeV3>& value);


protected:
    MysqlProxyV3 proxy_;
    bool proxyIsSet_;
    MysqlProxyNodeV3 masterNode_;
    bool masterNodeIsSet_;
    std::vector<MysqlProxyNodeV3> readonlyNodes_;
    bool readonlyNodesIsSet_;
    std::vector<MysqlProxyNodeV3> htapNodes_;
    bool htapNodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlShowProxyResponseV3_H_
