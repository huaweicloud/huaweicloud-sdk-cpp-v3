
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListInstanceNodeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListInstanceNodeResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/HtapNodeInfoResponseBody_node_list.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListInstanceNodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceNodeResponse();
    virtual ~ListInstanceNodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceNodeResponse members

    /// <summary>
    /// **参数解释**： HTAP标准版实例节点列表。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<HtapNodeInfoResponseBody_node_list>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<HtapNodeInfoResponseBody_node_list>& value);


protected:
    std::vector<HtapNodeInfoResponseBody_node_list> nodeList_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListInstanceNodeResponse_H_
