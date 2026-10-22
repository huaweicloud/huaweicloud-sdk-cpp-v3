
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupResponse_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperinstanceGroupResponse
    : public ModelBase
{
public:
    HyperinstanceGroupResponse();
    virtual ~HyperinstanceGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperinstanceGroupResponse members

    /// <summary>
    /// **参数解释**：hyperinstance-group ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：hyperinstance-group名称。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：npu数量限制。 **默认取值**：不涉及。
    /// </summary>

    std::string getNpuCountLimit() const;
    bool npuCountLimitIsSet() const;
    void unsetnpuCountLimit();
    void setNpuCountLimit(const std::string& value);

    /// <summary>
    /// **参数解释**：npu数量。 **默认取值**：不涉及。
    /// </summary>

    std::string getNpuCount() const;
    bool npuCountIsSet() const;
    void unsetnpuCount();
    void setNpuCount(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceClusterId() const;
    bool hyperinstanceClusterIdIsSet() const;
    void unsethyperinstanceClusterId();
    void setHyperinstanceClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**：创建时间。 **默认取值**：不涉及。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);

    /// <summary>
    /// **参数解释**：更新时间。 **默认取值**：不涉及。
    /// </summary>

    int64_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string npuCountLimit_;
    bool npuCountLimitIsSet_;
    std::string npuCount_;
    bool npuCountIsSet_;
    std::string hyperinstanceClusterId_;
    bool hyperinstanceClusterIdIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;
    int64_t updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupResponse_H_
