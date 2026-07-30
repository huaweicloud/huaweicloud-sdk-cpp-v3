
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataLabels_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataLabels_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络资源的标签信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkMetadataLabels
    : public ModelBase
{
public:
    NetworkMetadataLabels();
    virtual ~NetworkMetadataLabels();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkMetadataLabels members

    /// <summary>
    /// **参数解释**：资源池的显示名称。 **取值范围**：只能以小写字母开头，数字、中划线组成，不能以中划线结尾，且长度为4-32。
    /// </summary>

    std::string getOsModelartsName() const;
    bool osModelartsNameIsSet() const;
    void unsetosModelartsName();
    void setOsModelartsName(const std::string& value);

    /// <summary>
    /// **参数解释**：工作空间ID。[获取方法请参见[查询工作空间列表](ListWorkspace.xml)。](tag:hc) **取值范围**：不涉及。
    /// </summary>

    std::string getOsModelartsWorkspaceId() const;
    bool osModelartsWorkspaceIdIsSet() const;
    void unsetosModelartsWorkspaceId();
    void setOsModelartsWorkspaceId(const std::string& value);


protected:
    std::string osModelartsName_;
    bool osModelartsNameIsSet_;
    std::string osModelartsWorkspaceId_;
    bool osModelartsWorkspaceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataLabels_H_
