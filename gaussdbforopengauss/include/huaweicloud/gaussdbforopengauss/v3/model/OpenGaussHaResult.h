
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaResult_H_

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
/// 实例部署形态。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpenGaussHaResult
    : public ModelBase
{
public:
    OpenGaussHaResult();
    virtual ~OpenGaussHaResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// OpenGaussHaResult members

    /// <summary>
    /// GaussDB 分布式模式，返回值为：enterprise（企业版）；主备版，返回值为：centralization_standard(主备版)。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 备机同步参数。  取值：  GaussDB为“sync”。 说明： - “sync”为同步模式。
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);

    /// <summary>
    /// GaussDB的预留参数：指定实例一致性类型，取值范围：strong（强一致性） | eventual(最终一致性)。
    /// </summary>

    std::string getConsistency() const;
    bool consistencyIsSet() const;
    void unsetconsistency();
    void setConsistency(const std::string& value);

    /// <summary>
    /// 指定副本一致性协议类型，取值范围：quorum | paxos。不填时，默认为quorum。
    /// </summary>

    std::string getConsistencyProtocol() const;
    bool consistencyProtocolIsSet() const;
    void unsetconsistencyProtocol();
    void setConsistencyProtocol(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;
    std::string consistency_;
    bool consistencyIsSet_;
    std::string consistencyProtocol_;
    bool consistencyProtocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpenGaussHaResult_H_
