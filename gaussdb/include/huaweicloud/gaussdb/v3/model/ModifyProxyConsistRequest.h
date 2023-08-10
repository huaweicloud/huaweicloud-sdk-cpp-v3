
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyConsistRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyConsistRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改代理一致性请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyProxyConsistRequest
    : public ModelBase
{
public:
    ModifyProxyConsistRequest();
    virtual ~ModifyProxyConsistRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyProxyConsistRequest members

    /// <summary>
    /// 会话一致性。 - 取值\&quot;true\&quot;时表示会话一致性开启。 - 取值\&quot;false\&quot;时表示会话一致性关闭。
    /// </summary>

    std::string getSessionConsistence() const;
    bool sessionConsistenceIsSet() const;
    void unsetsessionConsistence();
    void setSessionConsistence(const std::string& value);

    /// <summary>
    /// 一致性模式。默认值为空，此时以会话一致性参数session_consistence为准。 - session: 会话一致性 - global: 全局一致性 - eventual: 最终一致性
    /// </summary>

    std::string getConsistenceMode() const;
    bool consistenceModeIsSet() const;
    void unsetconsistenceMode();
    void setConsistenceMode(const std::string& value);


protected:
    std::string sessionConsistence_;
    bool sessionConsistenceIsSet_;
    std::string consistenceMode_;
    bool consistenceModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyProxyConsistRequest_H_
