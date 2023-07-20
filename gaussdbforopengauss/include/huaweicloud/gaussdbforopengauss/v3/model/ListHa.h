
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHa_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHa_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 获取分布式/主备版实例时返回。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListHa
    : public ModelBase
{
public:
    ListHa();
    virtual ~ListHa();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListHa members

    /// <summary>
    /// 数据库一致性类型，分布式模式实例仅有。取值为“strong”、“eventual”，分别表示强一致性、最终一致性。
    /// </summary>

    std::string getConsistency() const;
    bool consistencyIsSet() const;
    void unsetconsistency();
    void setConsistency(const std::string& value);

    /// <summary>
    /// 备机同步参数。  取值：非空。  GaussDB为 “sync” 说明： “sync”为同步模式。
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);


protected:
    std::string consistency_;
    bool consistencyIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListHa_H_
