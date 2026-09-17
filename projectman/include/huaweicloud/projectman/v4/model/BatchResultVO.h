
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/BatchOperateInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 批量操作结果数据对象，包含成功数量、失败数量及详细结果列表。 **约束限制**： 不涉及。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchResultVO
    : public ModelBase
{
public:
    BatchResultVO();
    virtual ~BatchResultVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResultVO members

    /// <summary>
    /// **参数解释**： 批量操作成功的数量。 **取值范围**： 不涉及。
    /// </summary>

    double getSuccessNum() const;
    bool successNumIsSet() const;
    void unsetsuccessNum();
    void setSuccessNum(double value);

    /// <summary>
    /// **参数解释**： 批量操作失败的数量。 **取值范围**： 不涉及。
    /// </summary>

    double getFailNum() const;
    bool failNumIsSet() const;
    void unsetfailNum();
    void setFailNum(double value);

    /// <summary>
    /// **参数解释**： 批量操作成功的计划列表。
    /// </summary>

    std::vector<BatchOperateInfo>& getSuccess();
    bool successIsSet() const;
    void unsetsuccess();
    void setSuccess(const std::vector<BatchOperateInfo>& value);

    /// <summary>
    /// **参数解释**： 批量操作失败的计划列表。
    /// </summary>

    std::vector<BatchOperateInfo>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<BatchOperateInfo>& value);


protected:
    double successNum_;
    bool successNumIsSet_;
    double failNum_;
    bool failNumIsSet_;
    std::vector<BatchOperateInfo> success_;
    bool successIsSet_;
    std::vector<BatchOperateInfo> failed_;
    bool failedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVO_H_
