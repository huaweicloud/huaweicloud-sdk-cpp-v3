
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CheckDataTransformationReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CheckDataTransformationReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ConfigTransformationVo.h>
#include <string>
#include <huaweicloud/drs/v3/model/DatabaseObjectVO.h>
#include <huaweicloud/drs/v3/model/TransformationInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 校验数据加工规则请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CheckDataTransformationReq
    : public ModelBase
{
public:
    CheckDataTransformationReq();
    virtual ~CheckDataTransformationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckDataTransformationReq members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 对象信息，生成加工规则时需要填写。
    /// </summary>

    std::vector<DatabaseObjectVO>& getObjectInfo();
    bool objectInfoIsSet() const;
    void unsetobjectInfo();
    void setObjectInfo(const std::vector<DatabaseObjectVO>& value);

    /// <summary>
    /// 
    /// </summary>

    TransformationInfo getTransformationInfo() const;
    bool transformationInfoIsSet() const;
    void unsettransformationInfo();
    void setTransformationInfo(const TransformationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ConfigTransformationVo getConfigTransformation() const;
    bool configTransformationIsSet() const;
    void unsetconfigTransformation();
    void setConfigTransformation(const ConfigTransformationVo& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<DatabaseObjectVO> objectInfo_;
    bool objectInfoIsSet_;
    TransformationInfo transformationInfo_;
    bool transformationInfoIsSet_;
    ConfigTransformationVo configTransformation_;
    bool configTransformationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CheckDataTransformationReq_H_
