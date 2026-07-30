
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceRule_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceRule_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqAssociatedResourceRule
    : public ModelBase
{
public:
    ReqAssociatedResourceRule();
    virtual ~ReqAssociatedResourceRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqAssociatedResourceRule members

    /// <summary>
    /// 规则配置名称
    /// </summary>

    std::string getSettingName() const;
    bool settingNameIsSet() const;
    void unsetsettingName();
    void setSettingName(const std::string& value);

    /// <summary>
    /// 标签键列表
    /// </summary>

    std::vector<std::string>& getTagKeys();
    bool tagKeysIsSet() const;
    void unsettagKeys();
    void setTagKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 存量资源生效状态：enable、disable
    /// </summary>

    std::string getExistingResourceStatus() const;
    bool existingResourceStatusIsSet() const;
    void unsetexistingResourceStatus();
    void setExistingResourceStatus(const std::string& value);

    /// <summary>
    /// 关系解除后自动删除能力状态：enable、disable
    /// </summary>

    std::string getAutoDeleteStatus() const;
    bool autoDeleteStatusIsSet() const;
    void unsetautoDeleteStatus();
    void setAutoDeleteStatus(const std::string& value);

    /// <summary>
    /// 规则生效的regionId
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    std::string settingName_;
    bool settingNameIsSet_;
    std::vector<std::string> tagKeys_;
    bool tagKeysIsSet_;
    std::string existingResourceStatus_;
    bool existingResourceStatusIsSet_;
    std::string autoDeleteStatus_;
    bool autoDeleteStatusIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceRule_H_
