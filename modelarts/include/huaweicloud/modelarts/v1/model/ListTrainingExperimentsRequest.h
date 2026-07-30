
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListTrainingExperimentsRequest
    : public ModelBase
{
public:
    ListTrainingExperimentsRequest();
    virtual ~ListTrainingExperimentsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrainingExperimentsRequest members

    /// <summary>
    /// 工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc)未创建工作空间时默认值为“0”，存在创建并使用的工作空间，以实际取值为准。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 返回的数据条目数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：分页列表的起始页。 **约束限制**：最小为0。例如设置为0，则表示从第一页开始查询。 **取值范围**：不涉及。 **默认取值**：默认为0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：排序依据字段，例如sort_by&#x3D;update_time，则表示以条目的更新时间进行排序。 **约束限制**：不涉及。 **取值范围**： - update_time：更新时间。 - name：实验名称。 - create_time：创建时间。 **默认取值**：不涉及。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 排序的方式。该字段必须与sort_by同时使用。 缺省值: desc 枚举值： - asc：表示升序排列， - desc：降序排列。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTrainingExperimentsRequest& dereference_from_shared_ptr(std::shared_ptr<ListTrainingExperimentsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListTrainingExperimentsRequest_H_
