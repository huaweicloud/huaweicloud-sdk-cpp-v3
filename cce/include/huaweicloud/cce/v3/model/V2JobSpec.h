
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

class V2Job;
using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  V2JobSpec
    : public ModelBase
{
public:
    V2JobSpec();
    virtual ~V2JobSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// V2JobSpec members

    /// <summary>
    /// **参数解释**： Job 类型 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**： 集群ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getClusteruid() const;
    bool clusteruidIsSet() const;
    void unsetclusteruid();
    void setClusteruid(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getResourceid() const;
    bool resourceidIsSet() const;
    void unsetresourceid();
    void setResourceid(const std::string& value);

    /// <summary>
    /// **参数解释**： 资源名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getResourcename() const;
    bool resourcenameIsSet() const;
    void unsetresourcename();
    void setResourcename(const std::string& value);

    /// <summary>
    /// **参数解释**： Job的扩容参数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::map<std::string, std::string>& getExtendparam();
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**： 子Job详情列表 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::vector<V2Job>& getSubjobs();
    bool subjobsIsSet() const;
    void unsetsubjobs();
    void setSubjobs(const std::vector<V2Job>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string clusteruid_;
    bool clusteruidIsSet_;
    std::string resourceid_;
    bool resourceidIsSet_;
    std::string resourcename_;
    bool resourcenameIsSet_;
    std::map<std::string, std::string> extendparam_;
    bool extendparamIsSet_;
    std::vector<V2Job> subjobs_;
    bool subjobsIsSet_;

};


}
}
}
}
}

#include <huaweicloud/cce/v3/model/V2Job.h>
#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_V2JobSpec_H_
