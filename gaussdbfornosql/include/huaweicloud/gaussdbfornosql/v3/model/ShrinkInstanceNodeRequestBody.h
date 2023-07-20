
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShrinkInstanceNodeRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShrinkInstanceNodeRequestBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShrinkInstanceNodeRequestBody
    : public ModelBase
{
public:
    ShrinkInstanceNodeRequestBody();
    virtual ~ShrinkInstanceNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShrinkInstanceNodeRequestBody members

    /// <summary>
    /// 随机缩减的节点数量。 - GaussDB(for Cassandra)实例该字段取值为1~10。 - GaussDB(for Redis)该字段取值为1。 说明： 如果客户端采用直连节点方式，不推荐使用随机节点缩容。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// 指定缩容节点的ID，且该节点必须支持节点缩容。如果该字段不传指定缩减的节点ID，将根据系统内部策略缩减指定个数的节点。说明： - num与node_list必须有一个字段传值。   - 如果node_list传值时，GaussDB(for Cassandra)长度必须为1~10，GaussDB(for Redis) 长度必须为1。   - 如果num与node_list同时传值时，则以node_list的值为主。 - 如果node_list取值为空时，缩容以随机节点缩容进行；node_list字段取值不为空，缩容以指定节点ID进行。 - 节点缩容前，请避免直连节点，以防该节点缩容导致业务中断。
    /// </summary>

    std::vector<std::string>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<std::string>& value);


protected:
    int32_t num_;
    bool numIsSet_;
    std::vector<std::string> nodeList_;
    bool nodeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShrinkInstanceNodeRequestBody_H_
