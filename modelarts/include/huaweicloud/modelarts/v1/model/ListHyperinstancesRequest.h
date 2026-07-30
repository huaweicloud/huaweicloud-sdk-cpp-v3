
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstancesRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstancesRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListHyperinstancesRequest
    : public ModelBase
{
public:
    ListHyperinstancesRequest();
    virtual ~ListHyperinstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHyperinstancesRequest members

    /// <summary>
    /// **参数解释**：排序方式。 **约束限制**：不涉及。 **取值范围**：枚举值如下：  - ASC升序。  - DESC降序。 **默认取值**：不涉及。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// **参数解释**：排序字段。 **约束限制**：不涉及。 **取值范围**：枚举值如下：  - createTime：默认值，创建时间。  - updateTime：更新时间。 **默认取值**：不涉及。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释**：每一页的数量。 **约束限制**：不涉及。 **取值范围**：[1,1024]。 **默认取值**：10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：分页记录的起始位置偏移量。 **约束限制**：不涉及。 **取值范围**：[0,2147483647]。 **默认取值**：不涉及。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListHyperinstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListHyperinstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListHyperinstancesRequest_H_
