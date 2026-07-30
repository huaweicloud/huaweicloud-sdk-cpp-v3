
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/InputDataInfo_obs.h>
#include <huaweicloud/modelarts/v1/model/InputDataInfo_dataset.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据实际输入信息。枚举值：   - dataset：指定输入为数据集；   - obs：指定输入为OBS路径。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  InputDataInfo
    : public ModelBase
{
public:
    InputDataInfo();
    virtual ~InputDataInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InputDataInfo members

    /// <summary>
    /// 
    /// </summary>

    InputDataInfo_dataset getDataset() const;
    bool datasetIsSet() const;
    void unsetdataset();
    void setDataset(const InputDataInfo_dataset& value);

    /// <summary>
    /// 
    /// </summary>

    InputDataInfo_obs getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(const InputDataInfo_obs& value);


protected:
    InputDataInfo_dataset dataset_;
    bool datasetIsSet_;
    InputDataInfo_obs obs_;
    bool obsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_InputDataInfo_H_
