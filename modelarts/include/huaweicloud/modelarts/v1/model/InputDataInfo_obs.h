
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_obs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_obs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据输入输出信息为OBS方式。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InputDataInfo_obs
    : public ModelBase
{
public:
    InputDataInfo_obs();
    virtual ~InputDataInfo_obs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputDataInfo_obs members

    /// <summary>
    /// 训练作业需要的数据集OBS路径URL。如：“/usr/data/”。
    /// </summary>

    std::string getObsUrl() const;
    bool obsUrlIsSet() const;
    void unsetobsUrl();
    void setObsUrl(const std::string& value);


protected:
    std::string obsUrl_;
    bool obsUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_obs_H_
