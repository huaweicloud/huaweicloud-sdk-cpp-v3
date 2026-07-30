
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityOS_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityOS_H_


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
/// **参数解释**：Modelarts内置操作系统。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AffinityOS
    : public ModelBase
{
public:
    AffinityOS();
    virtual ~AffinityOS();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AffinityOS members

    /// <summary>
    /// **参数解释**：操作系统名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：操作系统镜像id, 裸金属规格该字段不为空。 **取值范围**：不涉及。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否优选。 **取值范围**：不涉及。
    /// </summary>

    bool isPreferred() const;
    bool preferredIsSet() const;
    void unsetpreferred();
    void setPreferred(bool value);

    /// <summary>
    /// **参数解释**：操作系统是否即将停止服务, end of service。 **取值范围**：不涉及。
    /// </summary>

    bool isEos() const;
    bool eosIsSet() const;
    void unseteos();
    void setEos(bool value);

    /// <summary>
    /// **参数解释**：操作系统是否下线。 **取值范围**：不涉及
    /// </summary>

    bool isOffline() const;
    bool offlineIsSet() const;
    void unsetoffline();
    void setOffline(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string imageId_;
    bool imageIdIsSet_;
    bool preferred_;
    bool preferredIsSet_;
    bool eos_;
    bool eosIsSet_;
    bool offline_;
    bool offlineIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AffinityOS_H_
