
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateTaskRulesetRequest
    : public ModelBase
{
public:
    UpdateTaskRulesetRequest();
    virtual ~UpdateTaskRulesetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTaskRulesetRequest members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 修改任务规则集
    /// </summary>

    std::vector<UpdateTaskRulesetItem>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<UpdateTaskRulesetItem>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::vector<UpdateTaskRulesetItem> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateTaskRulesetRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateTaskRulesetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetRequest_H_
