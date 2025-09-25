
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryInheritSettingSourceResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryInheritSettingSourceResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowRepositoryInheritSettingSourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryInheritSettingSourceResponse();
    virtual ~ShowRepositoryInheritSettingSourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryInheritSettingSourceResponse members

    /// <summary>
    /// **参数解释：** 设置源类型。 **取值范围：** - project，项目。 - group，代码组。 - repository，仓库。
    /// </summary>

    std::string getSourceType() const;
    bool sourceTypeIsSet() const;
    void unsetsourceType();
    void setSourceType(const std::string& value);

    /// <summary>
    /// **参数解释：** 设置源ID。 **取值范围：** 1-2147483647
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 继承设置是否可修改。 **取值范围：** - true，可修改。 - false，不可修改。
    /// </summary>

    bool isUpwardInheritEditable() const;
    bool upwardInheritEditableIsSet() const;
    void unsetupwardInheritEditable();
    void setUpwardInheritEditable(bool value);


protected:
    std::string sourceType_;
    bool sourceTypeIsSet_;
    std::string sourceId_;
    bool sourceIdIsSet_;
    bool upwardInheritEditable_;
    bool upwardInheritEditableIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRepositoryInheritSettingSourceResponse_H_
