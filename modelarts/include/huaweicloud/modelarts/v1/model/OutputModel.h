
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputModel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputModel_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ObsModel.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：自定义训练作业产物输出信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OutputModel
    : public ModelBase
{
public:
    OutputModel();
    virtual ~OutputModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputModel members

    /// <summary>
    /// 
    /// </summary>

    ObsModel getObs() const;
    bool obsIsSet() const;
    void unsetobs();
    void setObs(const ObsModel& value);


protected:
    ObsModel obs_;
    bool obsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputModel_H_
