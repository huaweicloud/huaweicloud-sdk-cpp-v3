
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAutoKillTransactionConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAutoKillTransactionConfigResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowAutoKillTransactionConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoKillTransactionConfigResponse();
    virtual ~ShowAutoKillTransactionConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoKillTransactionConfigResponse members

    /// <summary>
    /// **参数解释**: 配置类型。 **取值范围**: 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**: 筛选用户名。
    /// </summary>

    std::vector<std::string>& getUsernames();
    bool usernamesIsSet() const;
    void unsetusernames();
    void setUsernames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 阈值。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int64_t value);

    /// <summary>
    /// **参数解释**: 配置是否开启。 **取值范围**: 不涉及。
    /// </summary>

    bool isAutoStop() const;
    bool autoStopIsSet() const;
    void unsetautoStop();
    void setAutoStop(bool value);

    /// <summary>
    /// **参数解释**: 当前实例包含的所有数据库。
    /// </summary>

    std::vector<std::string>& getDatabaseNames();
    bool databaseNamesIsSet() const;
    void unsetdatabaseNames();
    void setDatabaseNames(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**: 筛选数据库名。
    /// </summary>

    std::vector<std::string>& getDatabaseNamesSelect();
    bool databaseNamesSelectIsSet() const;
    void unsetdatabaseNamesSelect();
    void setDatabaseNamesSelect(const std::vector<std::string>& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::vector<std::string> usernames_;
    bool usernamesIsSet_;
    int64_t threshold_;
    bool thresholdIsSet_;
    bool autoStop_;
    bool autoStopIsSet_;
    std::vector<std::string> databaseNames_;
    bool databaseNamesIsSet_;
    std::vector<std::string> databaseNamesSelect_;
    bool databaseNamesSelectIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowAutoKillTransactionConfigResponse_H_
