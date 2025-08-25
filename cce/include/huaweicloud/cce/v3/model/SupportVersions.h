
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SupportVersions_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SupportVersions_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 插件支持升级的集群版本
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SupportVersions
    : public ModelBase
{
public:
    SupportVersions();
    virtual ~SupportVersions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportVersions members

    /// <summary>
    /// 支持的集群类型
    /// </summary>

    std::string getClusterType() const;
    bool clusterTypeIsSet() const;
    void unsetclusterType();
    void setClusterType(const std::string& value);

    /// <summary>
    /// 支持的集群版本（正则表达式）
    /// </summary>

    std::vector<std::string>& getClusterVersion();
    bool clusterVersionIsSet() const;
    void unsetclusterVersion();
    void setClusterVersion(const std::vector<std::string>& value);

    /// <summary>
    /// 作用的集群类型 **取值范围：** - CCE：CCE Standard集群 - Turbo：CCE Turbo集群 - Autopilot：CCE Autopilot集群  **默认取值** 为空时默认为CCE Standard，CCE Turbo集群
    /// </summary>

    std::vector<std::string>& getCategory();
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::vector<std::string>& value);


protected:
    std::string clusterType_;
    bool clusterTypeIsSet_;
    std::vector<std::string> clusterVersion_;
    bool clusterVersionIsSet_;
    std::vector<std::string> category_;
    bool categoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SupportVersions_H_
