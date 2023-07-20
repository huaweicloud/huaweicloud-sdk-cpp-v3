
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EnlargeProxyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EnlargeProxyRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// proxy节点扩容信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  EnlargeProxyRequest
    : public ModelBase
{
public:
    EnlargeProxyRequest();
    virtual ~EnlargeProxyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnlargeProxyRequest members

    /// <summary>
    /// proxy节点扩容操作需要扩容的节点数。  扩容的节点数的取值范围：1~30之间的整数。  限制条件：该实例的proxy节点的总数量小于等于32。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 数据库代理ID。  如果实例只开启了一个代理，可不传该参数；如果实例开启了多个代理，则必须指定一个数据库代理，扩容新的代理节点。
    /// </summary>

    std::string getProxyId() const;
    bool proxyIdIsSet() const;
    void unsetproxyId();
    void setProxyId(const std::string& value);


protected:
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string proxyId_;
    bool proxyIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EnlargeProxyRequest_H_
