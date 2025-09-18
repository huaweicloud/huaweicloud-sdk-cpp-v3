
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DeleteRulesetRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DeleteRulesetRequest_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  DeleteRulesetRequest
    : public ModelBase
{
public:
    DeleteRulesetRequest();
    virtual ~DeleteRulesetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteRulesetRequest members

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 规则集ID
    /// </summary>

    std::string getRulesetId() const;
    bool rulesetIdIsSet() const;
    void unsetrulesetId();
    void setRulesetId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string rulesetId_;
    bool rulesetIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteRulesetRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteRulesetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_DeleteRulesetRequest_H_
