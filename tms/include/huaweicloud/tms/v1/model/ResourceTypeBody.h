
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ResourceTypeBody_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ResourceTypeBody_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_TMS_V1_EXPORT  ResourceTypeBody
    : public ModelBase
{
public:
    ResourceTypeBody();
    virtual ~ResourceTypeBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ResourceTypeBody members

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源类型显示名称，可以通过参数中“locale”设置语言。
    /// </summary>

    std::string getResourceTypeI18nDisplayName() const;
    bool resourceTypeI18nDisplayNameIsSet() const;
    void unsetresourceTypeI18nDisplayName();
    void setResourceTypeI18nDisplayName(const std::string& value);

    /// <summary>
    /// 支持的region列表
    /// </summary>

    std::vector<std::string>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<std::string>& value);

    /// <summary>
    /// 是否是全局类型的资源
    /// </summary>

    bool isGlobal() const;
    bool globalIsSet() const;
    void unsetglobal();
    void setGlobal(bool value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceTypeI18nDisplayName_;
    bool resourceTypeI18nDisplayNameIsSet_;
    std::vector<std::string> regions_;
    bool regionsIsSet_;
    bool global_;
    bool globalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ResourceTypeBody_H_
