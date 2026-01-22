
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddBlackWhiteListBatchVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddBlackWhiteListBatchVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/BlackWhiteInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddBlackWhiteListBatchVO
    : public ModelBase
{
public:
    AddBlackWhiteListBatchVO();
    virtual ~AddBlackWhiteListBatchVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddBlackWhiteListBatchVO members

    /// <summary>
    /// **参数解释**： 黑白名单重复添加列表 **约束限制**： 不涉及  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<BlackWhiteInfo>& getDuplicatedList();
    bool duplicatedListIsSet() const;
    void unsetduplicatedList();
    void setDuplicatedList(const std::vector<BlackWhiteInfo>& value);

    /// <summary>
    /// **参数解释**： 黑白名单添加失败列表 **约束限制**： 不涉及  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<BlackWhiteInfo>& getFailedList();
    bool failedListIsSet() const;
    void unsetfailedList();
    void setFailedList(const std::vector<BlackWhiteInfo>& value);

    /// <summary>
    /// **参数解释**： 黑白名单添加成功列表 **约束限制**： 不涉及  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<BlackWhiteInfo>& getSuccessList();
    bool successListIsSet() const;
    void unsetsuccessList();
    void setSuccessList(const std::vector<BlackWhiteInfo>& value);


protected:
    std::vector<BlackWhiteInfo> duplicatedList_;
    bool duplicatedListIsSet_;
    std::vector<BlackWhiteInfo> failedList_;
    bool failedListIsSet_;
    std::vector<BlackWhiteInfo> successList_;
    bool successListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddBlackWhiteListBatchVO_H_
