
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_StageVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_StageVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/ProcessorVo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  StageVo
    : public ModelBase
{
public:
    StageVo();
    virtual ~StageVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StageVo members

    /// <summary>
    /// 执行阶段id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 上游的stageId
    /// </summary>

    std::vector<int32_t>& getLastStepStageId();
    bool lastStepStageIdIsSet() const;
    void unsetlastStepStageId();
    void setLastStepStageId(std::vector<int32_t> value);

    /// <summary>
    /// 执行过程
    /// </summary>

    std::vector<ProcessorVo>& getProcessors();
    bool processorsIsSet() const;
    void unsetprocessors();
    void setProcessors(const std::vector<ProcessorVo>& value);

    /// <summary>
    /// 执行阶段名称
    /// </summary>

    std::string getStageName() const;
    bool stageNameIsSet() const;
    void unsetstageName();
    void setStageName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::vector<int32_t> lastStepStageId_;
    bool lastStepStageIdIsSet_;
    std::vector<ProcessorVo> processors_;
    bool processorsIsSet_;
    std::string stageName_;
    bool stageNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_StageVo_H_
