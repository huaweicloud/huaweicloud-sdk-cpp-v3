
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CloudServer_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CloudServer_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CloudServer
    : public ModelBase
{
public:
    CloudServer();
    virtual ~CloudServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudServer members

    /// <summary>
    /// **参数解释**：服务器资源id，或超节点子节点id。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：Lite Server服务器类型。 **取值范围**： - BMS：裸金属服务器 - ECS：弹性云服务器 - HPS：超节点服务器
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器所属的超节点资源id。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getHpsId() const;
    bool hpsIdIsSet() const;
    void unsethpsId();
    void setHpsId(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点子节点对应服务器资源id。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getHpsEcsId() const;
    bool hpsEcsIdIsSet() const;
    void unsethpsEcsId();
    void setHpsEcsId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string hpsId_;
    bool hpsIdIsSet_;
    std::string hpsEcsId_;
    bool hpsEcsIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CloudServer_H_
