
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceTypesSummary_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceTypesSummary_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对接RAM云服务的资源类型和区域等信息。
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  ResourceTypesSummary
    : public ModelBase
{
public:
    ResourceTypesSummary();
    virtual ~ResourceTypesSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceTypesSummary members

    /// <summary>
    /// 资源所在区域名称。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);

    /// <summary>
    /// 资源类型名称。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string regionId_;
    bool regionIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_ResourceTypesSummary_H_
