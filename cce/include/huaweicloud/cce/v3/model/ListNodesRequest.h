
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListNodesRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListNodesRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ListNodesRequest
    : public ModelBase
{
public:
    ListNodesRequest();
    virtual ~ListNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListNodesRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群状态兼容Error参数，用于API平滑切换。 兼容场景下，errorStatus为空则屏蔽Error状态为Deleting状态。
    /// </summary>

    std::string getErrorStatus() const;
    bool errorStatusIsSet() const;
    void unseterrorStatus();
    void setErrorStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 设置每页显示的数据条数。 **约束限制**： 不涉及 **取值范围**： 1到2000之间（含1和2000）的整数。 **默认取值**： 2000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 通过资源uid进行分页查询,默认为查询第一页数据。marker&#x3D;{{uid}}表示查询该uid后的资源列表的信息(查询结果不包含该uid的资源)。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 无
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string errorStatus_;
    bool errorStatusIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListNodesRequest& dereference_from_shared_ptr(std::shared_ptr<ListNodesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListNodesRequest_H_
