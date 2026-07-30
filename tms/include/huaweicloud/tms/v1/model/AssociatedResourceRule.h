
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceRule_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceRule_H_


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
/// 规则信息
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  AssociatedResourceRule
    : public ModelBase
{
public:
    AssociatedResourceRule();
    virtual ~AssociatedResourceRule();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatedResourceRule members

    /// <summary>
    /// 规则的配置名称
    /// </summary>

    std::string getSettingName() const;
    bool settingNameIsSet() const;
    void unsetsettingName();
    void setSettingName(const std::string& value);

    /// <summary>
    /// 规则作的用标签范围。如果为空则表示对全部标签生效。
    /// </summary>

    std::vector<std::string>& getTagKeys();
    bool tagKeysIsSet() const;
    void unsettagKeys();
    void setTagKeys(const std::vector<std::string>& value);

    /// <summary>
    /// 特性开关，规则是否在存量资源生效。
    /// </summary>

    std::string getExistingResourceStatus() const;
    bool existingResourceStatusIsSet() const;
    void unsetexistingResourceStatus();
    void setExistingResourceStatus(const std::string& value);

    /// <summary>
    /// 特性开关，主资源与子资源关系解除后是否自动删除子资源中与主资源标签键一致的标签。
    /// </summary>

    std::string getAutoDeleteStatus() const;
    bool autoDeleteStatusIsSet() const;
    void unsetautoDeleteStatus();
    void setAutoDeleteStatus(const std::string& value);

    /// <summary>
    /// 规则状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 规则生效的区域Id
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
    std::string status_;
    bool statusIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceRule_H_
