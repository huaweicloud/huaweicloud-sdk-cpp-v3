
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobFlavorsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobFlavorsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobFlavorsRequest
    : public ModelBase
{
public:
    ShowTrainingJobFlavorsRequest();
    virtual ~ShowTrainingJobFlavorsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobFlavorsRequest members

    /// <summary>
    /// 查询训练作业规格的类型，不填为查询所有。枚举值：  - CPU  - GPU  - [Ascend](tag:hc,hk,fcs_super)
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);


protected:
    std::string flavorType_;
    bool flavorTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTrainingJobFlavorsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTrainingJobFlavorsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobFlavorsRequest_H_
