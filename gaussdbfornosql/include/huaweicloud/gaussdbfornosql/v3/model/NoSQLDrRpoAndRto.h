
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrRpoAndRto_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrRpoAndRto_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾实例切换的RPO和RTO指标
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  NoSQLDrRpoAndRto
    : public ModelBase
{
public:
    NoSQLDrRpoAndRto();
    virtual ~NoSQLDrRpoAndRto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NoSQLDrRpoAndRto members

    /// <summary>
    /// 场景，枚举值   FAILOVER 强制切换;    SWITCHOVER 主备倒换
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// 倒换或切换丢失数据时长，单位：秒（s）
    /// </summary>

    int64_t getRpo() const;
    bool rpoIsSet() const;
    void unsetrpo();
    void setRpo(int64_t value);

    /// <summary>
    /// 倒换或切换恢复时长，单位：秒（s）
    /// </summary>

    int64_t getRto() const;
    bool rtoIsSet() const;
    void unsetrto();
    void setRto(int64_t value);


protected:
    std::string scene_;
    bool sceneIsSet_;
    int64_t rpo_;
    bool rpoIsSet_;
    int64_t rto_;
    bool rtoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_NoSQLDrRpoAndRto_H_
