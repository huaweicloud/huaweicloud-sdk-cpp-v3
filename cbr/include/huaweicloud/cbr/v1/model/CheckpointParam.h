
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/Resource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CheckpointParam
    : public ModelBase
{
public:
    CheckpointParam();
    virtual ~CheckpointParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckpointParam members

    /// <summary>
    /// 是否自动触发,true：自动触发，false：非自动触发。
    /// </summary>

    bool isAutoTrigger() const;
    bool autoTriggerIsSet() const;
    void unsetautoTrigger();
    void setAutoTrigger(bool value);

    /// <summary>
    /// 备份描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 是否增量备份，true：增量备份，false：非增量备份。
    /// </summary>

    bool isIncremental() const;
    bool incrementalIsSet() const;
    void unsetincremental();
    void setIncremental(bool value);

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 待备份的资源id列表:uuid
    /// </summary>

    std::vector<std::string>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<std::string>& value);

    /// <summary>
    /// 资源详情
    /// </summary>

    std::vector<Resource>& getResourceDetails();
    bool resourceDetailsIsSet() const;
    void unsetresourceDetails();
    void setResourceDetails(const std::vector<Resource>& value);

    /// <summary>
    /// 自动备份时的策略id
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数解释**： 手动备份的保留时长，单位为天。设置该参数后，备份副本将在保留时长到期后自动删除。用于为手动备份设置自动过期时间，避免手动备份堆积导致存储容量浪费。不设置此参数时，备份将永久保留。 **约束限制**： 当auto_trigger为true时不支持传此参数，自动备份的保留时间由关联的备份策略指定。auto_trigger不传或为false时支持指定此参数。 **取值范围**： -  1~36500：指定保留天数，备份将在创建时间 + 该天数后到期并自动删除。 - -1：永久保留，备份不会自动过期。  **默认取值**： -1 &gt; 该特性目前处于公测阶段，部分Region可能无法使用
    /// </summary>

    int32_t getRetentionDurationDays() const;
    bool retentionDurationDaysIsSet() const;
    void unsetretentionDurationDays();
    void setRetentionDurationDays(int32_t value);


protected:
    bool autoTrigger_;
    bool autoTriggerIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    bool incremental_;
    bool incrementalIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> resources_;
    bool resourcesIsSet_;
    std::vector<Resource> resourceDetails_;
    bool resourceDetailsIsSet_;
    std::string policyId_;
    bool policyIdIsSet_;
    int32_t retentionDurationDays_;
    bool retentionDurationDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_
