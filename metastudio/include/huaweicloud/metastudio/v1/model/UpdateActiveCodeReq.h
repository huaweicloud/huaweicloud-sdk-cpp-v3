
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateActiveCodeReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateActiveCodeReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改激活码请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateActiveCodeReq
    : public ModelBase
{
public:
    UpdateActiveCodeReq();
    virtual ~UpdateActiveCodeReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateActiveCodeReq members

    /// <summary>
    /// 有效天数（0表示长期有效）。
    /// </summary>

    int32_t getValidPeriod() const;
    bool validPeriodIsSet() const;
    void unsetvalidPeriod();
    void setValidPeriod(int32_t value);


protected:
    int32_t validPeriod_;
    bool validPeriodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateActiveCodeReq_H_
