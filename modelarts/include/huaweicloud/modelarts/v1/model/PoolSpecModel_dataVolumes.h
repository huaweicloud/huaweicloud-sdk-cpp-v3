
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolSpecModel_dataVolumes_extendParams.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：自定义数据盘（云硬盘）列表信息，指定后不可修改。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolSpecModel_dataVolumes
    : public ModelBase
{
public:
    PoolSpecModel_dataVolumes();
    virtual ~PoolSpecModel_dataVolumes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolSpecModel_dataVolumes members

    /// <summary>
    /// **参数解释**：磁盘类型，具体内容可参考磁盘类型及性能介绍。 **取值范围**：可选值如下： - SSD：超高IO硬盘 - GPSSD：通用型SSD - SAS：高IO硬盘
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// **参数解释**：磁盘大小，单位为Gi。 **取值范围**：不涉及。
    /// </summary>

    std::string getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(const std::string& value);

    /// <summary>
    /// **参数解释**：磁盘个数。 **取值范围**：不涉及。
    /// </summary>

    std::string getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecModel_dataVolumes_extendParams getExtendParams() const;
    bool extendParamsIsSet() const;
    void unsetextendParams();
    void setExtendParams(const PoolSpecModel_dataVolumes_extendParams& value);


protected:
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string size_;
    bool sizeIsSet_;
    std::string count_;
    bool countIsSet_;
    PoolSpecModel_dataVolumes_extendParams extendParams_;
    bool extendParamsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolSpecModel_dataVolumes_H_
