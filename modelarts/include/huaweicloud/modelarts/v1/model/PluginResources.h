
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginResources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginResources_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ObjectReference.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件占用的资源量。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PluginResources
    : public ModelBase
{
public:
    PluginResources();
    virtual ~PluginResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PluginResources members

    /// <summary>
    /// 
    /// </summary>

    ObjectReference getInvolvedObject() const;
    bool involvedObjectIsSet() const;
    void unsetinvolvedObject();
    void setInvolvedObject(const ObjectReference& value);

    /// <summary>
    /// **参数解释**： 资源对象的副本数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getReplicas() const;
    bool replicasIsSet() const;
    void unsetreplicas();
    void setReplicas(int32_t value);

    /// <summary>
    /// **参数解释**： 申请的资源限制。
    /// </summary>

    std::map<std::string, std::string>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 申请的资源需求。
    /// </summary>

    std::map<std::string, std::string>& getRequests();
    bool requestsIsSet() const;
    void unsetrequests();
    void setRequests(const std::map<std::string, std::string>& value);


protected:
    ObjectReference involvedObject_;
    bool involvedObjectIsSet_;
    int32_t replicas_;
    bool replicasIsSet_;
    std::map<std::string, std::string> limits_;
    bool limitsIsSet_;
    std::map<std::string, std::string> requests_;
    bool requestsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PluginResources_H_
