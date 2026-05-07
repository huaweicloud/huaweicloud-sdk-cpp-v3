
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VersionInfosResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VersionInfosResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  VersionInfosResult
    : public ModelBase
{
public:
    VersionInfosResult();
    virtual ~VersionInfosResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VersionInfosResult members

    /// <summary>
    /// **参数解释**: 引擎版本号。 **取值范围**: 不涉及 
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**: 内核引擎版本号。 **取值范围**: 不涉及 
    /// </summary>

    std::string getKernelVersion() const;
    bool kernelVersionIsSet() const;
    void unsetkernelVersion();
    void setKernelVersion(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否为推荐版本。 **取值范围**: - true：推荐版本 - flase: 非推荐版本 
    /// </summary>

    bool isRecommend() const;
    bool recommendIsSet() const;
    void unsetrecommend();
    void setRecommend(bool value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string kernelVersion_;
    bool kernelVersionIsSet_;
    bool recommend_;
    bool recommendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_VersionInfosResult_H_
