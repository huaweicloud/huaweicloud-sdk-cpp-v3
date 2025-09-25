
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListActionsPipelineRunsByRunIdsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListActionsPipelineRunsByRunIdsRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ActionsPipelineRunsPollingQueryDTO.h>
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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListActionsPipelineRunsByRunIdsRequest
    : public ModelBase
{
public:
    ListActionsPipelineRunsByRunIdsRequest();
    virtual ~ListActionsPipelineRunsByRunIdsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListActionsPipelineRunsByRunIdsRequest members

    /// <summary>
    /// **参数解释**： 租户id。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ActionsPipelineRunsPollingQueryDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ActionsPipelineRunsPollingQueryDTO& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    ActionsPipelineRunsPollingQueryDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListActionsPipelineRunsByRunIdsRequest& dereference_from_shared_ptr(std::shared_ptr<ListActionsPipelineRunsByRunIdsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListActionsPipelineRunsByRunIdsRequest_H_
