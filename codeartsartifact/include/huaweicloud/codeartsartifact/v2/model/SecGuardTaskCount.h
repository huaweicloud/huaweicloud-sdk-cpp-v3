
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskCount_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskCount_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/OpensourceCount.h>
#include <huaweicloud/codeartsartifact/v2/model/MalwareCount.h>
#include <huaweicloud/codeartsartifact/v2/model/SecGuardTaskDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  SecGuardTaskCount
    : public ModelBase
{
public:
    SecGuardTaskCount();
    virtual ~SecGuardTaskCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecGuardTaskCount members

    /// <summary>
    /// **参数解释**: 扫描次数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTask() const;
    bool taskIsSet() const;
    void unsettask();
    void setTask(int32_t value);

    /// <summary>
    /// **参数解释**: 扫描制品数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getArtifact() const;
    bool artifactIsSet() const;
    void unsetartifact();
    void setArtifact(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    OpensourceCount getOpensource() const;
    bool opensourceIsSet() const;
    void unsetopensource();
    void setOpensource(const OpensourceCount& value);

    /// <summary>
    /// **参数解释**: 病毒文件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getVirus() const;
    bool virusIsSet() const;
    void unsetvirus();
    void setVirus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MalwareCount getMalware() const;
    bool malwareIsSet() const;
    void unsetmalware();
    void setMalware(const MalwareCount& value);

    /// <summary>
    /// **参数解释**: 扫描总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: 扫描任务列表。 **取值范围**: 不涉及。
    /// </summary>

    std::vector<SecGuardTaskDetail>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<SecGuardTaskDetail>& value);


protected:
    int32_t task_;
    bool taskIsSet_;
    int32_t artifact_;
    bool artifactIsSet_;
    OpensourceCount opensource_;
    bool opensourceIsSet_;
    int32_t virus_;
    bool virusIsSet_;
    MalwareCount malware_;
    bool malwareIsSet_;
    int32_t total_;
    bool totalIsSet_;
    std::vector<SecGuardTaskDetail> list_;
    bool listIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskCount_H_
