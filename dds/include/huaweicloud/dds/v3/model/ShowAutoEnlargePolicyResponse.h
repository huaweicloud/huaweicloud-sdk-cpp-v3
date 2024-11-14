
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DiskAutoExpansionPolicy.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowAutoEnlargePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoEnlargePolicyResponse();
    virtual ~ShowAutoEnlargePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoEnlargePolicyResponse members

    /// <summary>
    /// 自动扩容开关。 - on：开启磁盘自动扩容策略。 - off: 关闭磁盘自动扩容策略。 默认值为on。
    /// </summary>

    std::string getSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DiskAutoExpansionPolicy getPolicy() const;
    bool policyIsSet() const;
    void unsetpolicy();
    void setPolicy(const DiskAutoExpansionPolicy& value);


protected:
    std::string switchOption_;
    bool switchOptionIsSet_;
    DiskAutoExpansionPolicy policy_;
    bool policyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowAutoEnlargePolicyResponse_H_
