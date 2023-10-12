
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdate_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdate_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/BillingUpdate.h>
#include <string>
#include <huaweicloud/cbr/v1/model/VaultBindRules.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultUpdate
    : public ModelBase
{
public:
    VaultUpdate();
    virtual ~VaultUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultUpdate members

    /// <summary>
    /// 
    /// </summary>

    BillingUpdate getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingUpdate& value);

    /// <summary>
    /// 存储库名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否支持自动挂载
    /// </summary>

    bool isAutoBind() const;
    bool autoBindIsSet() const;
    void unsetautoBind();
    void setAutoBind(bool value);

    /// <summary>
    /// 
    /// </summary>

    VaultBindRules getBindRules() const;
    bool bindRulesIsSet() const;
    void unsetbindRules();
    void setBindRules(const VaultBindRules& value);

    /// <summary>
    /// 是否自动扩容。按需存储库支持自动扩容，包周期存储库不支持扩容。
    /// </summary>

    bool isAutoExpand() const;
    bool autoExpandIsSet() const;
    void unsetautoExpand();
    void setAutoExpand(bool value);

    /// <summary>
    /// 发送smn通知开关
    /// </summary>

    bool isSmnNotify() const;
    bool smnNotifyIsSet() const;
    void unsetsmnNotify();
    void setSmnNotify(bool value);

    /// <summary>
    /// 存储库容量阈值，存储库已用容量和总容量的百分比超过该值，若smn_notify为开，将发送相关通知。
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);


protected:
    BillingUpdate billing_;
    bool billingIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool autoBind_;
    bool autoBindIsSet_;
    VaultBindRules bindRules_;
    bool bindRulesIsSet_;
    bool autoExpand_;
    bool autoExpandIsSet_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdate_H_
