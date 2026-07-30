
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListFeaturesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFeaturesResponse();
    virtual ~ListFeaturesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFeaturesResponse members

    /// <summary>
    /// **参数解释**：实例创建的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：特性开关。 **取值范围**：布尔类型： - true：开启。 - false：未开启。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// **参数解释**：特性ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：特性名称。 **取值范围**：枚举类型，取值如下： - NOTEBOOK：用户显式创建的Notebook实例。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：特性配额。 **取值范围**：不涉及。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// **参数解释**：特性已使用额度。 **取值范围**：不涉及。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// **参数解释**：实例最后更新的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);

    /// <summary>
    /// **参数解释**：用户ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);


protected:
    int64_t createAt_;
    bool createAtIsSet_;
    bool enabled_;
    bool enabledIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;
    std::string userId_;
    bool userIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFeaturesResponse_H_
