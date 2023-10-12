
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_TagQuota_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_TagQuota_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配额
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  TagQuota
    : public ModelBase
{
public:
    TagQuota();
    virtual ~TagQuota();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagQuota members

    /// <summary>
    /// 配额键
    /// </summary>

    std::string getQuotaKey() const;
    bool quotaKeyIsSet() const;
    void unsetquotaKey();
    void setQuotaKey(const std::string& value);

    /// <summary>
    /// 配额值
    /// </summary>

    int32_t getQuotaLimit() const;
    bool quotaLimitIsSet() const;
    void unsetquotaLimit();
    void setQuotaLimit(int32_t value);

    /// <summary>
    /// 已使用
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 单位
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string quotaKey_;
    bool quotaKeyIsSet_;
    int32_t quotaLimit_;
    bool quotaLimitIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_TagQuota_H_
