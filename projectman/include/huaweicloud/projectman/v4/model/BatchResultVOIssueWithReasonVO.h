
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVOIssueWithReasonVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVOIssueWithReasonVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueWithReasonVO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量操作返回体。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  BatchResultVOIssueWithReasonVO
    : public ModelBase
{
public:
    BatchResultVOIssueWithReasonVO();
    virtual ~BatchResultVOIssueWithReasonVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchResultVOIssueWithReasonVO members

    /// <summary>
    /// **参数解释**： 批量操作成功条数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getSuccessNum() const;
    bool successNumIsSet() const;
    void unsetsuccessNum();
    void setSuccessNum(int32_t value);

    /// <summary>
    /// **参数解释**： 批量操作失败条数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getFailNum() const;
    bool failNumIsSet() const;
    void unsetfailNum();
    void setFailNum(int32_t value);

    /// <summary>
    /// **参数解释**： 批量操作失败数据及失败原因。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<IssueWithReasonVO>& getFailed();
    bool failedIsSet() const;
    void unsetfailed();
    void setFailed(const std::vector<IssueWithReasonVO>& value);


protected:
    int32_t successNum_;
    bool successNumIsSet_;
    int32_t failNum_;
    bool failNumIsSet_;
    std::vector<IssueWithReasonVO> failed_;
    bool failedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_BatchResultVOIssueWithReasonVO_H_
