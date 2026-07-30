
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListJobsRequest
    : public ModelBase
{
public:
    ListJobsRequest();
    virtual ~ListJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobsRequest members

    /// <summary>
    /// **参数解释**：任务类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - replace-node：故障节点替换任务。 - reboot-node：节点重启任务。 - reset-nodes：节点重置任务。 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：单页查询最大数量，该值为空时默认返回100条记录，单页最大允许查询500条记录。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：分页查询的偏移量，查询第一页时为空。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：查询起始时间，单位毫秒。默认从30天前开始查询。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int64_t getSince() const;
    bool sinceIsSet() const;
    void unsetsince();
    void setSince(int64_t value);

    /// <summary>
    /// **参数解释**：查询终止时间，单位毫秒。默认当前时间。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int64_t getUntil() const;
    bool untilIsSet() const;
    void unsetuntil();
    void setUntil(int64_t value);

    /// <summary>
    /// **参数解释**：任务关联的资源类型。 **约束限制**：不涉及。 **取值范围**：可选值如下： - pools：资源池 **默认取值**：不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**：关联的资源名称，与resource配合使用。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int64_t since_;
    bool sinceIsSet_;
    int64_t until_;
    bool untilIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::string name_;
    bool nameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListJobsRequest_H_
