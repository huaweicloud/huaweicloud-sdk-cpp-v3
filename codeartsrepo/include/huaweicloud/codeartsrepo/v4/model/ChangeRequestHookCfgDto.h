
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangeRequestHookCfgDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangeRequestHookCfgDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/WebHookBranchCfgDto.h>
#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/WebHookEventCfgDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ChangeRequestHookCfgDto
    : public ModelBase
{
public:
    ChangeRequestHookCfgDto();
    virtual ~ChangeRequestHookCfgDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangeRequestHookCfgDto members

    /// <summary>
    /// **参数解释：** 预留字段，事件触发设置，可为空。
    /// </summary>

    std::vector<WebHookEventCfgDto>& getEventCfgs();
    bool eventCfgsIsSet() const;
    void unseteventCfgs();
    void setEventCfgs(const std::vector<WebHookEventCfgDto>& value);

    /// <summary>
    /// **参数解释：** 预留字段，仓库分支规则设置，可为空。
    /// </summary>

    std::vector<WebHookBranchCfgDto>& getProjectCfgs();
    bool projectCfgsIsSet() const;
    void unsetprojectCfgs();
    void setProjectCfgs(const std::vector<WebHookBranchCfgDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<WebHookBranchCfgDto>& getBranchCfgs();
    bool branchCfgsIsSet() const;
    void unsetbranchCfgs();
    void setBranchCfgs(const std::vector<WebHookBranchCfgDto>& value);


protected:
    std::vector<WebHookEventCfgDto> eventCfgs_;
    bool eventCfgsIsSet_;
    std::vector<WebHookBranchCfgDto> projectCfgs_;
    bool projectCfgsIsSet_;
    std::vector<WebHookBranchCfgDto> branchCfgs_;
    bool branchCfgsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ChangeRequestHookCfgDto_H_
