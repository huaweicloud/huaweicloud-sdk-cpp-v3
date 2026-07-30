
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsResource_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsResource_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/InferTmsTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 根据条件查询得到的TMS返回数据结构。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TmsResource
    : public ModelBase
{
public:
    TmsResource();
    virtual ~TmsResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TmsResource members

    /// <summary>
    /// **参数解释：** 资源详情，用于扩展，默认为空。 **取值范围：** 不涉及
    /// </summary>

    Object getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const Object& value);

    /// <summary>
    /// **参数解释：** 资源ID。 **取值范围：** 不涉及
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源名称。 **取值范围：** 不涉及
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// **参数解释：** 当前资源的所有标签。 **取值范围：** 不涉及
    /// </summary>

    std::vector<InferTmsTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<InferTmsTag>& value);


protected:
    Object resourceDetail_;
    bool resourceDetailIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<InferTmsTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TmsResource_H_
