
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkspaceQuotasResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkspaceQuotasResponse_H_


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
/// quotas属性列表
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkspaceQuotasResponse
    : public ModelBase
{
public:
    WorkspaceQuotasResponse();
    virtual ~WorkspaceQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkspaceQuotasResponse members

    /// <summary>
    /// 配额允许设置的最大值。
    /// </summary>

    int32_t getMaxQuota() const;
    bool maxQuotaIsSet() const;
    void unsetmaxQuota();
    void setMaxQuota(int32_t value);

    /// <summary>
    /// 最后修改时间，UTC。如用户未修改过该资源配额,则该值默认为该工作空间的创建时间。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 资源的唯一标识。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// 当前配额值。配额值为-1代表不限制配额。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// 配额允许设置的最小值。
    /// </summary>

    int32_t getMinQuota() const;
    bool minQuotaIsSet() const;
    void unsetminQuota();
    void setMinQuota(int32_t value);

    /// <summary>
    /// 配额名称[(中文)](tag:hc,hk)。
    /// </summary>

    std::string getNameCn() const;
    bool nameCnIsSet() const;
    void unsetnameCn();
    void setNameCn(const std::string& value);

    /// <summary>
    /// 数量单位[(中文)](tag:hc,hk)。
    /// </summary>

    std::string getUnitCn() const;
    bool unitCnIsSet() const;
    void unsetunitCn();
    void setUnitCn(const std::string& value);

    /// <summary>
    /// 工作空间ID，系统生成的32位UUID，不带橫线。默认的工作空间id为&#39;0&#39;。
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 数量单位(英文)。
    /// </summary>

    std::string getUnitEn() const;
    bool unitEnIsSet() const;
    void unsetunitEn();
    void setUnitEn(const std::string& value);

    /// <summary>
    /// 已用配额值。当quota为-1（不限制配额）时，used_quota为null。
    /// </summary>

    int32_t getUsedQuota() const;
    bool usedQuotaIsSet() const;
    void unsetusedQuota();
    void setUsedQuota(int32_t value);


protected:
    int32_t maxQuota_;
    bool maxQuotaIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t minQuota_;
    bool minQuotaIsSet_;
    std::string nameCn_;
    bool nameCnIsSet_;
    std::string unitCn_;
    bool unitCnIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string unitEn_;
    bool unitEnIsSet_;
    int32_t usedQuota_;
    bool usedQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkspaceQuotasResponse_H_
