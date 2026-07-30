
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceSetting_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceSetting_H_


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
/// 规则的配置信息
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  AssociatedResourceSetting
    : public ModelBase
{
public:
    AssociatedResourceSetting();
    virtual ~AssociatedResourceSetting();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociatedResourceSetting members

    /// <summary>
    /// 规则的配置名称
    /// </summary>

    std::string getSettingName() const;
    bool settingNameIsSet() const;
    void unsetsettingName();
    void setSettingName(const std::string& value);

    /// <summary>
    /// 主资源
    /// </summary>

    std::string getMasterService() const;
    bool masterServiceIsSet() const;
    void unsetmasterService();
    void setMasterService(const std::string& value);

    /// <summary>
    /// 主资源类型
    /// </summary>

    std::string getMasterResourceType() const;
    bool masterResourceTypeIsSet() const;
    void unsetmasterResourceType();
    void setMasterResourceType(const std::string& value);

    /// <summary>
    /// 关联资源
    /// </summary>

    std::string getAssociatedService() const;
    bool associatedServiceIsSet() const;
    void unsetassociatedService();
    void setAssociatedService(const std::string& value);

    /// <summary>
    /// 关联资源类型
    /// </summary>

    std::string getAssociatedResourceType() const;
    bool associatedResourceTypeIsSet() const;
    void unsetassociatedResourceType();
    void setAssociatedResourceType(const std::string& value);

    /// <summary>
    /// 是否规则是对存量资源生效。
    /// </summary>

    bool isSupportExistingResource() const;
    bool supportExistingResourceIsSet() const;
    void unsetsupportExistingResource();
    void setSupportExistingResource(bool value);

    /// <summary>
    /// 是否支持关系解除后自动删除标签。
    /// </summary>

    bool isSupportAutoDelete() const;
    bool supportAutoDeleteIsSet() const;
    void unsetsupportAutoDelete();
    void setSupportAutoDelete(bool value);

    /// <summary>
    /// 规则配置支持的区域Id。
    /// </summary>

    std::vector<std::string>& getRegionIds();
    bool regionIdsIsSet() const;
    void unsetregionIds();
    void setRegionIds(const std::vector<std::string>& value);


protected:
    std::string settingName_;
    bool settingNameIsSet_;
    std::string masterService_;
    bool masterServiceIsSet_;
    std::string masterResourceType_;
    bool masterResourceTypeIsSet_;
    std::string associatedService_;
    bool associatedServiceIsSet_;
    std::string associatedResourceType_;
    bool associatedResourceTypeIsSet_;
    bool supportExistingResource_;
    bool supportExistingResourceIsSet_;
    bool supportAutoDelete_;
    bool supportAutoDeleteIsSet_;
    std::vector<std::string> regionIds_;
    bool regionIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_AssociatedResourceSetting_H_
