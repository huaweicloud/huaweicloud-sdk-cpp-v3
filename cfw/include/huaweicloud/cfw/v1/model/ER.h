
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ER
    : public ModelBase
{
public:
    ER();
    virtual ~ER();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ER members

    /// <summary>
    /// **参数解释**： ER ID，创建东西向防护引用的 ID **取值范围**： 不涉及
    /// </summary>

    std::string getErId() const;
    bool erIdIsSet() const;
    void unseterId();
    void setErId(const std::string& value);

    /// <summary>
    /// **参数解释**： 企业路由器连接id，该连接用于连接防火墙和企业路由器，此字段可在通过id在ER界面查询指定er后在管理连接界面查询连接，了解连接具体情况。 **取值范围**： 不涉及
    /// </summary>

    std::string getErAttachId() const;
    bool erAttachIdIsSet() const;
    void unseterAttachId();
    void setErAttachId(const std::string& value);


protected:
    std::string erId_;
    bool erIdIsSet_;
    std::string erAttachId_;
    bool erAttachIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ER_H_
