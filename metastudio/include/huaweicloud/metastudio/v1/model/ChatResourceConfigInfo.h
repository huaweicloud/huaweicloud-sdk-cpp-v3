
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfigInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfigInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ChatResourceConfigInfo
    : public ModelBase
{
public:
    ChatResourceConfigInfo();
    virtual ~ChatResourceConfigInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ChatResourceConfigInfo members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源数量
    /// </summary>

    int32_t getCountResource() const;
    bool countResourceIsSet() const;
    void unsetcountResource();
    void setCountResource(int32_t value);

    /// <summary>
    /// 资源来源。 * PURCHASED: 购买 * SP_ALLOCATED：SP分配 * ADMIN_ALLOCATED：系统管理员分配 &gt; * 开通按需；购买按需套餐包、一次性资源、包周期等都属于PURCHASED。
    /// </summary>

    std::string getResourceSource() const;
    bool resourceSourceIsSet() const;
    void unsetresourceSource();
    void setResourceSource(const std::string& value);

    /// <summary>
    /// 资源计费类型。 * PERIODIC: 包周期 * ONE_TIME：一次性计费 * ON_DEMAND: 按需计费 &gt; * 一次性计费包括：租户订购的一次性资源，SP管理员分配给租户的一次性资源，SP管理员分配给租户的按需套餐包资源，系统管理员分配的资源（分钟数等）。
    /// </summary>

    std::string getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const std::string& value);

    /// <summary>
    /// 资源数量。智能交互并发路数。
    /// </summary>

    int32_t getResourceNums() const;
    bool resourceNumsIsSet() const;
    void unsetresourceNums();
    void setResourceNums(int32_t value);

    /// <summary>
    /// 可用资源数量。智能交互并发路数。
    /// </summary>

    int32_t getResourceAvailableNums() const;
    bool resourceAvailableNumsIsSet() const;
    void unsetresourceAvailableNums();
    void setResourceAvailableNums(int32_t value);

    /// <summary>
    /// 资源状态。 * ACTIVE: 正常 * FREEZE：冻结 * DELETED：退订或过期
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 资源过期时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    int32_t countResource_;
    bool countResourceIsSet_;
    std::string resourceSource_;
    bool resourceSourceIsSet_;
    std::string chargeMode_;
    bool chargeModeIsSet_;
    int32_t resourceNums_;
    bool resourceNumsIsSet_;
    int32_t resourceAvailableNums_;
    bool resourceAvailableNumsIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ChatResourceConfigInfo_H_
