
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseResponse_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RenewLeaseResponse
    : public ModelBase, public HttpResponse
{
public:
    RenewLeaseResponse();
    virtual ~RenewLeaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RenewLeaseResponse members

    /// <summary>
    /// **参数解释**：实例创建的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(int64_t value);

    /// <summary>
    /// **参数解释**：实例运行时长，以创建时间为起点计算，即“创建时间+duration &gt; 当前时刻”时，系统会自动停止实例。 **取值范围**：不涉及。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// **参数解释**：是否启用自动停止功能。 **取值范围**：布尔类型： - true：启动自动停止功能。 - false：关闭自动停止功能。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// **参数解释**：自动停止类别。 **取值范围**：枚举类型，取值如下： - TIMING：自动停止。 - IDLE：空闲停止。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：实例最后更新（不包括探活心跳）的时间，UTC毫秒。 **取值范围**：不涉及。
    /// </summary>

    int64_t getUpdateAt() const;
    bool updateAtIsSet() const;
    void unsetupdateAt();
    void setUpdateAt(int64_t value);


protected:
    int64_t createAt_;
    bool createAtIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    bool enable_;
    bool enableIsSet_;
    std::string type_;
    bool typeIsSet_;
    int64_t updateAt_;
    bool updateAtIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseResponse_H_
