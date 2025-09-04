
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDomainStatus_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDomainStatus_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 租户状态信息
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowDomainStatus_result
    : public ModelBase
{
public:
    ShowDomainStatus_result();
    virtual ~ShowDomainStatus_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainStatus_result members

    /// <summary>
    /// 租户状态0:未开通; 1:正常; 2:冻结; 3:关闭; 4、5:注销
    /// </summary>

    double getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(double value);

    /// <summary>
    /// 是否包含免费额度
    /// </summary>

    bool isFreeQuota() const;
    bool freeQuotaIsSet() const;
    void unsetfreeQuota();
    void setFreeQuota(bool value);

    /// <summary>
    /// 是否启用自定义环境
    /// </summary>

    double getAllowCustomEnv() const;
    bool allowCustomEnvIsSet() const;
    void unsetallowCustomEnv();
    void setAllowCustomEnv(double value);


protected:
    double status_;
    bool statusIsSet_;
    bool freeQuota_;
    bool freeQuotaIsSet_;
    double allowCustomEnv_;
    bool allowCustomEnvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDomainStatus_result_H_
