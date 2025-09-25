
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineConcurrencyMgmt_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineConcurrencyMgmt_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线并发管理
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineConcurrencyMgmt
    : public ModelBase
{
public:
    PipelineConcurrencyMgmt();
    virtual ~PipelineConcurrencyMgmt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineConcurrencyMgmt members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符串。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： [流水线并发个数](tag:hws,hws_hk,hws_eu,ctc,cmcc,g42,sbc,hcs,hcs_site,hcs_sm,hcs_sitesm,fcs)[，最大并发受套餐和购买并发数限制](tag:hws,hws_hk,hws_eu,ctc,cmcc,g42,sbc)[。](tag:hws,hws_hk,hws_eu,ctc,cmcc,g42,sbc,hcs,hcs_site,hcs_sm,hcs_sitesm,fcs) **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int32_t getConcurrencyNumber() const;
    bool concurrencyNumberIsSet() const;
    void unsetconcurrencyNumber();
    void setConcurrencyNumber(int32_t value);

    /// <summary>
    /// **参数解释**： 超出并发数时排队策略。 **约束限制**： 不涉及。 **取值范围**： - ABORT：忽略不执行。 - QUEUE：排队等待。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getExceedAction() const;
    bool exceedActionIsSet() const;
    void unsetexceedAction();
    void setExceedAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 更新时间。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 是否启用。 **约束限制**： 不涉及。 **取值范围**： - true：启用。 - false：未启用。 **默认取值**： 不涉及。 
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    int32_t concurrencyNumber_;
    bool concurrencyNumberIsSet_;
    std::string exceedAction_;
    bool exceedActionIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    bool enable_;
    bool enableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineConcurrencyMgmt_H_
