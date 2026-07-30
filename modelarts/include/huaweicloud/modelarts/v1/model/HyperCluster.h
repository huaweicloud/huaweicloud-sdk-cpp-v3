
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/HyperCluster_network_info.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperCluster
    : public ModelBase
{
public:
    HyperCluster();
    virtual ~HyperCluster();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperCluster members

    /// <summary>
    /// **参数解释**：hyper cluster的ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：hyper cluster的名称。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：网络信息。
    /// </summary>

    std::vector<HyperCluster_network_info>& getNetworkInfo();
    bool networkInfoIsSet() const;
    void unsetnetworkInfo();
    void setNetworkInfo(const std::vector<HyperCluster_network_info>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<HyperCluster_network_info> networkInfo_;
    bool networkInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_H_
