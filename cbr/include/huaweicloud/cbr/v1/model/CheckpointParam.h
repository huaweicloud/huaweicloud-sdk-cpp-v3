
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 是否自动触发,true:自动触发，false：非自动触发。
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
    /// 是否增量备份，true:增量备份，false：非增量备份。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CheckpointParam_H_
