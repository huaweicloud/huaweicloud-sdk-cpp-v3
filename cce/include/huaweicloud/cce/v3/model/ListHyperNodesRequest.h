
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesRequest_H_


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
class HUAWEICLOUD_CCE_V3_EXPORT  ListHyperNodesRequest
    : public ModelBase
{
public:
    ListHyperNodesRequest();
    virtual ~ListHyperNodesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperNodesRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 设置每页显示的数据条数 **约束限制**： 不涉及 **取值范围**： 1到1000之间（含1和1000）的整数 **默认取值**： 100
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**： 设置从第几条数据开始显示（用于翻页），比如输入0表示从第一条数据开始，输入10表示跳过前10条，从第11条开始显示，不填时默认从第一条开始显示（即默认为0）。 **约束限制**： 不涉及 **取值范围**： 32 位非负整数 **默认取值**： 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHyperNodesRequest& dereference_from_shared_ptr(std::shared_ptr<ListHyperNodesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ListHyperNodesRequest_H_
