
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkloadsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkloadsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListWorkloadsRequest
    : public ModelBase
{
public:
    ListWorkloadsRequest();
    virtual ~ListWorkloadsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkloadsRequest members

    /// <summary>
    /// **参数解释**：资源池的ID，取值自资源池详情的metadata.name字段。 **约束限制**：不涉及。 **取值范围**：只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为[36-63]个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getPoolName() const;
    bool poolNameIsSet() const;
    void unsetpoolName();
    void setPoolName(const std::string& value);

    /// <summary>
    /// **参数解释**：节点IP地址，用于过滤在该节点上运行的workload。支持多个IP，传递多个参数或用逗号分隔. **约束限制**：指定此参数时，不支持分页（limit/offset会被忽略）。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<std::string>& getHostip();
    bool hostipIsSet() const;
    void unsethostip();
    void setHostip(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：根据作业类型查询资源池作业列表。 **约束限制**：不涉及。 **取值范围**：可选值如下： - train：训练作业 - infer：推理服务 - notebook：Notebook作业 - x-infer：新版推理作业 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：根据作业状态查询资源池作业列表。 **约束限制**：不涉及。 **取值范围**：可选值如下： - Queue：排队中的作业。 - Pending：等待中的作业。 - Abnormal：异常的作业。 - Terminating：中止中的作业。 - Creating：创建中的作业。 - Running：运行中的作业。 - Completed：已完成的作业。 - Terminated：已终止的作业。 - Failed：运行失败的作业。 **默认取值**：不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：查询资源池作业列表的排序条件。 **约束限制**：不涉及。 **取值范围**：可选值如下： - create_time：根据作业创建时间排序。 **默认取值**：不涉及。
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// **参数解释**：指定查询资源池作业列表是否按照升序排序。 **约束限制**：需要配合sort查询参数使用。 **取值范围**：可选值如下： - true：按照升序排序。 - false：按照降序排序。 **默认取值**：false。
    /// </summary>

    bool isAscend() const;
    bool ascendIsSet() const;
    void unsetascend();
    void setAscend(bool value);

    /// <summary>
    /// **参数解释**：分页查询的偏移量。 **约束限制**：不涉及。 **取值范围**：0-2147483647。 **默认取值**：0。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// **参数解释**：分页单次查询返回的资源数量。 **约束限制**：不涉及。 **取值范围**：0 - 500。 **默认取值**：500。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string poolName_;
    bool poolNameIsSet_;
    std::vector<std::string> hostip_;
    bool hostipIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sort_;
    bool sortIsSet_;
    bool ascend_;
    bool ascendIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListWorkloadsRequest& dereference_from_shared_ptr(std::shared_ptr<ListWorkloadsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListWorkloadsRequest_H_
