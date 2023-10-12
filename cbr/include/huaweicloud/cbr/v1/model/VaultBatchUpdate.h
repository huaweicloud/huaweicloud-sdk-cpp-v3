
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBatchUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBatchUpdate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库批量修改属性
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultBatchUpdate
    : public ModelBase
{
public:
    VaultBatchUpdate();
    virtual ~VaultBatchUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultBatchUpdate members

    /// <summary>
    /// 存储库smn消息通知开关
    /// </summary>

    bool isSmnNotify() const;
    bool smnNotifyIsSet() const;
    void unsetsmnNotify();
    void setSmnNotify(bool value);

    /// <summary>
    /// 存储库容量阈值
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);


protected:
    bool smnNotify_;
    bool smnNotifyIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBatchUpdate_H_
