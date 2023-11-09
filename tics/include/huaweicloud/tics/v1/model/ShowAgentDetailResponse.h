
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailResponse_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailResponse_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tics/v1/model/TicsAgentNatCommonInfo.h>
#include <huaweicloud/tics/v1/model/TicsAgentDeployDetail.h>
#include <huaweicloud/tics/v1/model/TicsAgentNodeInfo.h>
#include <huaweicloud/tics/v1/model/TicsAgentDeploy.h>
#include <huaweicloud/tics/v1/model/TicsAgentDeployBcs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  ShowAgentDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAgentDetailResponse();
    virtual ~ShowAgentDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgentDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    TicsAgentDeploy getAgentDeploy() const;
    bool agentDeployIsSet() const;
    void unsetagentDeploy();
    void setAgentDeploy(const TicsAgentDeploy& value);

    /// <summary>
    /// 
    /// </summary>

    TicsAgentDeployBcs getAgentDeployBcs() const;
    bool agentDeployBcsIsSet() const;
    void unsetagentDeployBcs();
    void setAgentDeployBcs(const TicsAgentDeployBcs& value);

    /// <summary>
    /// 
    /// </summary>

    TicsAgentDeployDetail getAgentDeployDetail() const;
    bool agentDeployDetailIsSet() const;
    void unsetagentDeployDetail();
    void setAgentDeployDetail(const TicsAgentDeployDetail& value);

    /// <summary>
    /// 
    /// </summary>

    TicsAgentNatCommonInfo getAgentDeployNat() const;
    bool agentDeployNatIsSet() const;
    void unsetagentDeployNat();
    void setAgentDeployNat(const TicsAgentNatCommonInfo& value);

    /// <summary>
    /// 
    /// </summary>

    TicsAgentNodeInfo getAgentDeployNode() const;
    bool agentDeployNodeIsSet() const;
    void unsetagentDeployNode();
    void setAgentDeployNode(const TicsAgentNodeInfo& value);


protected:
    TicsAgentDeploy agentDeploy_;
    bool agentDeployIsSet_;
    TicsAgentDeployBcs agentDeployBcs_;
    bool agentDeployBcsIsSet_;
    TicsAgentDeployDetail agentDeployDetail_;
    bool agentDeployDetailIsSet_;
    TicsAgentNatCommonInfo agentDeployNat_;
    bool agentDeployNatIsSet_;
    TicsAgentNodeInfo agentDeployNode_;
    bool agentDeployNodeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_ShowAgentDetailResponse_H_
