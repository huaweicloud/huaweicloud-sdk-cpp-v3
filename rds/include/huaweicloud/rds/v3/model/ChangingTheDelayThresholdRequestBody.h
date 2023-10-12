
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangingTheDelayThresholdRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangingTheDelayThresholdRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ChangingTheDelayThresholdRequestBody
    : public ModelBase
{
public:
    ChangingTheDelayThresholdRequestBody();
    virtual ~ChangingTheDelayThresholdRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChangingTheDelayThresholdRequestBody members

    /// <summary>
    /// 延时阈值（单位：KB），取值范围为0~10485760。
    /// </summary>

    int32_t getDelayThresholdInKilobytes() const;
    bool delayThresholdInKilobytesIsSet() const;
    void unsetdelayThresholdInKilobytes();
    void setDelayThresholdInKilobytes(int32_t value);


protected:
    int32_t delayThresholdInKilobytes_;
    bool delayThresholdInKilobytesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ChangingTheDelayThresholdRequestBody_H_
