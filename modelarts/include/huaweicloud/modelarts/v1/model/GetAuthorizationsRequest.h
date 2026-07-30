
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GetAuthorizationsRequest
    : public ModelBase
{
public:
    GetAuthorizationsRequest();
    virtual ~GetAuthorizationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAuthorizationsRequest members

    /// <summary>
    /// **参数解释**：指定排序字段。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - user_name：IAM用户名称。 - create_time：创建时间。 **默认取值**：user_name。
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// **参数解释**：排序方式。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - ASC：递增排序。 - DESC：递减排序。 **默认取值**：ASC。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释**：指定每一页返回的最大条目数。 **约束限制**：不涉及。 **取值范围**：[1,1000]。 **默认取值**：1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：分页列表的起始页。 **约束限制**：不涉及。 **取值范围**：非负整数。 **默认取值**：0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string sortBy_;
    bool sortByIsSet_;
    std::string order_;
    bool orderIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetAuthorizationsRequest& dereference_from_shared_ptr(std::shared_ptr<GetAuthorizationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GetAuthorizationsRequest_H_
