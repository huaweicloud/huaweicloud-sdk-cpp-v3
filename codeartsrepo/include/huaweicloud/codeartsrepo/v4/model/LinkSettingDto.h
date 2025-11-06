
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LinkSettingDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LinkSettingDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 可集成系统Link服务设置信息。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  LinkSettingDto
    : public ModelBase
{
public:
    LinkSettingDto();
    virtual ~LinkSettingDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LinkSettingDto members

    /// <summary>
    /// **参数解释：** 是否开启集成Link服务 **取值范围：** true：开启集成Link服务，false：未开启集成Link服务。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);

    /// <summary>
    /// **参数解释：** Link服务的对接地址。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** Link服务的对接鉴权类型，ak_sk代表使用ak和sk来鉴权。
    /// </summary>

    std::string getAppAuthType() const;
    bool appAuthTypeIsSet() const;
    void unsetappAuthType();
    void setAppAuthType(const std::string& value);

    /// <summary>
    /// **参数解释：** Link服务的对接鉴权ak。
    /// </summary>

    std::string getAppAk() const;
    bool appAkIsSet() const;
    void unsetappAk();
    void setAppAk(const std::string& value);

    /// <summary>
    /// **参数解释：** Link服务的对接鉴权sk，作为返回值时若已配置则返回掩码，掩码格式为************。
    /// </summary>

    std::string getAppSk() const;
    bool appSkIsSet() const;
    void unsetappSk();
    void setAppSk(const std::string& value);

    /// <summary>
    /// **参数解释：** 可关联类型列表，逗号分隔。
    /// </summary>

    std::string getCategories() const;
    bool categoriesIsSet() const;
    void unsetcategories();
    void setCategories(const std::string& value);

    /// <summary>
    /// **参数解释：** 排除状态列表，逗号分隔。
    /// </summary>

    std::string getExcludeStatuses() const;
    bool excludeStatusesIsSet() const;
    void unsetexcludeStatuses();
    void setExcludeStatuses(const std::string& value);


protected:
    bool active_;
    bool activeIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string appAuthType_;
    bool appAuthTypeIsSet_;
    std::string appAk_;
    bool appAkIsSet_;
    std::string appSk_;
    bool appSkIsSet_;
    std::string categories_;
    bool categoriesIsSet_;
    std::string excludeStatuses_;
    bool excludeStatusesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_LinkSettingDto_H_
