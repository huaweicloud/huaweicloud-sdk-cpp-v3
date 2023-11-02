
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShrinkGaussMySqlProxyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShrinkGaussMySqlProxyRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库代理节点缩容信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShrinkGaussMySqlProxyRequestBody
    : public ModelBase
{
public:
    ShrinkGaussMySqlProxyRequestBody();
    virtual ~ShrinkGaussMySqlProxyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShrinkGaussMySqlProxyRequestBody members

    /// <summary>
    /// 数据库代理节点缩容操作需要减少的节点数。  缩容的节点数的取值范围：1~30之间的整数。  限制条件：该实例的数据库代理节点的总数量小于等于32，大于等于2。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);


protected:
    int32_t nodeNum_;
    bool nodeNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShrinkGaussMySqlProxyRequestBody_H_
