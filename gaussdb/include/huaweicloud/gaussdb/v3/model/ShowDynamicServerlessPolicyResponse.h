
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDynamicServerlessPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDynamicServerlessPolicyResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowDynamicServerlessPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDynamicServerlessPolicyResponse();
    virtual ~ShowDynamicServerlessPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDynamicServerlessPolicyResponse members

    /// <summary>
    /// **参数解释**：  当前动态Serverless算力。  **取值范围**：  available_vcpus中的可选算力，大于等于min_vcpus，并且小于等于max_vcpus。未开启动态Serverless时为null。
    /// </summary>

    std::string getCurrentVcpus() const;
    bool currentVcpusIsSet() const;
    void unsetcurrentVcpus();
    void setCurrentVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  最小动态Serverless算力。  **取值范围**：  available_vcpus中的可选算力，并且小于等于max_vcpus。未开启动态Serverless时为null。
    /// </summary>

    std::string getMinVcpus() const;
    bool minVcpusIsSet() const;
    void unsetminVcpus();
    void setMinVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  最大动态Serverless算力。  **取值范围**：  available_vcpus中的可选算力，并且大于等于min_vcpus。未开启动态Serverless时为null。
    /// </summary>

    std::string getMaxVcpus() const;
    bool maxVcpusIsSet() const;
    void unsetmaxVcpus();
    void setMaxVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  可选动态Serverless算力列表，不支持动态Serverless的实例该列表为空。  **取值范围**：  不涉及。
    /// </summary>

    std::vector<std::string>& getAvailableVcpus();
    bool availableVcpusIsSet() const;
    void unsetavailableVcpus();
    void setAvailableVcpus(const std::vector<std::string>& value);


protected:
    std::string currentVcpus_;
    bool currentVcpusIsSet_;
    std::string minVcpus_;
    bool minVcpusIsSet_;
    std::string maxVcpus_;
    bool maxVcpusIsSet_;
    std::vector<std::string> availableVcpus_;
    bool availableVcpusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowDynamicServerlessPolicyResponse_H_
