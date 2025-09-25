
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdatePipelineTemplateRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdatePipelineTemplateRequest_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/PipelineTemplateDTO.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  UpdatePipelineTemplateRequest
    : public ModelBase
{
public:
    UpdatePipelineTemplateRequest();
    virtual ~UpdatePipelineTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePipelineTemplateRequest members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 模板ID
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PipelineTemplateDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PipelineTemplateDTO& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string templateId_;
    bool templateIdIsSet_;
    PipelineTemplateDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePipelineTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePipelineTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_UpdatePipelineTemplateRequest_H_
