
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowDeploymentFormResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDeploymentFormResponse();
    virtual ~ShowDeploymentFormResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDeploymentFormResponse members

    /// <summary>
    /// 初始节点数。
    /// </summary>

    int32_t getInitialNodeNum() const;
    bool initialNodeNumIsSet() const;
    void unsetinitialNodeNum();
    void setInitialNodeNum(int32_t value);

    /// <summary>
    /// 解决方案模板名称。
    /// </summary>

    std::string getSolution() const;
    bool solutionIsSet() const;
    void unsetsolution();
    void setSolution(const std::string& value);

    /// <summary>
    /// 分片数。
    /// </summary>

    int32_t getShardNum() const;
    bool shardNumIsSet() const;
    void unsetshardNum();
    void setShardNum(int32_t value);

    /// <summary>
    /// 副本数。
    /// </summary>

    int32_t getReplicaNum() const;
    bool replicaNumIsSet() const;
    void unsetreplicaNum();
    void setReplicaNum(int32_t value);


protected:
    int32_t initialNodeNum_;
    bool initialNodeNumIsSet_;
    std::string solution_;
    bool solutionIsSet_;
    int32_t shardNum_;
    bool shardNumIsSet_;
    int32_t replicaNum_;
    bool replicaNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowDeploymentFormResponse_H_
