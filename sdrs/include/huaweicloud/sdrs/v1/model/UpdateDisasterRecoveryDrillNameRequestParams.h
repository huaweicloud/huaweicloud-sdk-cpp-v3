
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestParams_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestParams_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新容灾演练名称数据结构
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateDisasterRecoveryDrillNameRequestParams
    : public ModelBase
{
public:
    UpdateDisasterRecoveryDrillNameRequestParams();
    virtual ~UpdateDisasterRecoveryDrillNameRequestParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateDisasterRecoveryDrillNameRequestParams members

    /// <summary>
    /// 容灾演练的名称。最大支持长度为64个字节。只包含中文字符、英文字母（a～ｚ、Ａ～Ｚ）、数字（０~９）、小数点（．）、下划线（_）、中划线（-）。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateDisasterRecoveryDrillNameRequestParams_H_
