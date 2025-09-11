
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceLtsLogConfigResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceLtsLogConfigResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/LtsLogConfigResult.h>
#include <vector>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  InstanceLtsLogConfigResult
    : public ModelBase
{
public:
    InstanceLtsLogConfigResult();
    virtual ~InstanceLtsLogConfigResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceLtsLogConfigResult members

    /// <summary>
    /// **参数解释**: 实例基本信息。
    /// </summary>

    Object getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const Object& value);

    /// <summary>
    /// **参数解释**: LTS相关信息。
    /// </summary>

    std::vector<LtsLogConfigResult>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<LtsLogConfigResult>& value);


protected:
    Object instance_;
    bool instanceIsSet_;
    std::vector<LtsLogConfigResult> ltsConfigs_;
    bool ltsConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstanceLtsLogConfigResult_H_
