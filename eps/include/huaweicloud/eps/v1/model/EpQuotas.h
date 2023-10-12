
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_EpQuotas_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_EpQuotas_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 企业项目配额响应
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  EpQuotas
    : public ModelBase
{
public:
    EpQuotas();
    virtual ~EpQuotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EpQuotas members

    /// <summary>
    /// 总配额
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// qutoa的资源类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 配额使用量
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);


protected:
    int32_t quota_;
    bool quotaIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_EpQuotas_H_
