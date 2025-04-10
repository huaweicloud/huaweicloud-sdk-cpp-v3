
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRecoverStartSimulationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRecoverStartSimulationRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DisasterRecoverStartSimulationRequestBody
    : public ModelBase
{
public:
    DisasterRecoverStartSimulationRequestBody();
    virtual ~DisasterRecoverStartSimulationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisasterRecoverStartSimulationRequestBody members

    /// <summary>
    /// 主实例下发容灾演练时必填，备实例下发容灾演练是不必填   - 日志保留空间占可使用剩余磁盘容量的比例, 可设置范围为1-100。
    /// </summary>

    int32_t getXlogKeepRatio() const;
    bool xlogKeepRatioIsSet() const;
    void unsetxlogKeepRatio();
    void setXlogKeepRatio(int32_t value);

    /// <summary>
    /// 容灾类型。
    /// </summary>

    std::string getDisasterType() const;
    bool disasterTypeIsSet() const;
    void unsetdisasterType();
    void setDisasterType(const std::string& value);


protected:
    int32_t xlogKeepRatio_;
    bool xlogKeepRatioIsSet_;
    std::string disasterType_;
    bool disasterTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRecoverStartSimulationRequestBody_H_
