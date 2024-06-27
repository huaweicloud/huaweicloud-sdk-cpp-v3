
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceNodeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceNodeResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ClickHouseNodeInfoResponseBody_node_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListClickHouseInstanceNodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClickHouseInstanceNodeResponse();
    virtual ~ListClickHouseInstanceNodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClickHouseInstanceNodeResponse members

    /// <summary>
    /// ClickHouse实例节点列表。
    /// </summary>

    std::vector<ClickHouseNodeInfoResponseBody_node_list>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<ClickHouseNodeInfoResponseBody_node_list>& value);


protected:
    std::vector<ClickHouseNodeInfoResponseBody_node_list> nodeList_;
    bool nodeListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseInstanceNodeResponse_H_
