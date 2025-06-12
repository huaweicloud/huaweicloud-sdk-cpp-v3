
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserOverPackageQuota_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserOverPackageQuota_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowUserOverPackageQuota_result
    : public ModelBase
{
public:
    ShowUserOverPackageQuota_result();
    virtual ~ShowUserOverPackageQuota_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserOverPackageQuota_result members

    /// <summary>
    /// 套餐超期
    /// </summary>

    bool isIsOverQuota() const;
    bool isOverQuotaIsSet() const;
    void unsetisOverQuota();
    void setIsOverQuota(bool value);

    /// <summary>
    /// 构建套餐
    /// </summary>

    std::string getBuildQuota() const;
    bool buildQuotaIsSet() const;
    void unsetbuildQuota();
    void setBuildQuota(const std::string& value);

    /// <summary>
    /// 已使用的套餐用量，套餐为unlimit时无此信息
    /// </summary>

    std::string getUsedQuota() const;
    bool usedQuotaIsSet() const;
    void unsetusedQuota();
    void setUsedQuota(const std::string& value);


protected:
    bool isOverQuota_;
    bool isOverQuotaIsSet_;
    std::string buildQuota_;
    bool buildQuotaIsSet_;
    std::string usedQuota_;
    bool usedQuotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowUserOverPackageQuota_result_H_
