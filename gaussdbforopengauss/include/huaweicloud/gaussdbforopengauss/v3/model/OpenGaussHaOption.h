
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaOption_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaOption_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 实例部署形态。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussHaOption
    : public ModelBase
{
public:
    OpenGaussHaOption();
    virtual ~OpenGaussHaOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenGaussHaOption members

    /// <summary>
    /// GaussDB为分布式时，取值：enterprise；为集中式时，取值：centralization_standard。不区分大小写。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 指定实例一致性类型，当创建分布式模式实例时，该字段值必传，当创建主备模式实例时，该字段值不传。取值范围：strong（强一致性） | eventual(最终一致性)，不分区大小写。
    /// </summary>

    std::string getConsistency() const;
    bool consistencyIsSet() const;
    void unsetconsistency();
    void setConsistency(const std::string& value);

    /// <summary>
    /// 备机同步参数。  取值：  GaussDB为“sync\&quot;  说明： - “sync”为同步模式。
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);

    /// <summary>
    /// 指定创建实例的产品类型，创建企业版实例时传空值或者enterprise，创建基础版实例时需要指定instance_mode的值为basic，创建生态版实例时需要指定instance_mode的值为ecology。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string consistency_;
    bool consistencyIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaOption_H_
