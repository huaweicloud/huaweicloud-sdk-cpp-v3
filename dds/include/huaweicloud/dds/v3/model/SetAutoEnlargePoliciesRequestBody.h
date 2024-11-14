
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DiskAutoExpansionPolicy.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SetAutoEnlargePoliciesRequestBody
    : public ModelBase
{
public:
    SetAutoEnlargePoliciesRequestBody();
    virtual ~SetAutoEnlargePoliciesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetAutoEnlargePoliciesRequestBody members

    /// <summary>
    /// 自动扩容开关。 - on:开启磁盘自动扩容策略。 - off: 关闭磁盘自动扩容策略。 默认值为on。
    /// </summary>

    std::string getSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(const std::string& value);

    /// <summary>
    /// 磁盘自动扩容策略。 最大支持设置10个实例的策略。
    /// </summary>

    std::vector<DiskAutoExpansionPolicy>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<DiskAutoExpansionPolicy>& value);


protected:
    std::string switchOption_;
    bool switchOptionIsSet_;
    std::vector<DiskAutoExpansionPolicy> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetAutoEnlargePoliciesRequestBody_H_
