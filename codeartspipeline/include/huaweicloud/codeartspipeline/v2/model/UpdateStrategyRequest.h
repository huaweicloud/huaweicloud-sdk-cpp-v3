
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/UpdateRuleSetReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UpdateStrategyRequest
    : public ModelBase
{
public:
    UpdateStrategyRequest();
    virtual ~UpdateStrategyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateStrategyRequest members

    /// <summary>
    /// 策略ID
    /// </summary>

    std::string getRuleSetId() const;
    bool ruleSetIdIsSet() const;
    void unsetruleSetId();
    void setRuleSetId(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateRuleSetReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateRuleSetReq& value);


protected:
    std::string ruleSetId_;
    bool ruleSetIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    UpdateRuleSetReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateStrategyRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateStrategyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdateStrategyRequest_H_
