
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_DeployVo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_DeployVo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/tics/v1/model/StageVo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  DeployVo
    : public ModelBase
{
public:
    DeployVo();
    virtual ~DeployVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeployVo members

    /// <summary>
    /// 节点Id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 参与方别名
    /// </summary>

    std::string getNodePartnerAlias() const;
    bool nodePartnerAliasIsSet() const;
    void unsetnodePartnerAlias();
    void setNodePartnerAlias(const std::string& value);

    /// <summary>
    /// 节点类型,AGENT.计算节点，AGG.聚合节点，AGG_MANAGER.聚合器管理节点,SERVER.控制节点
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 执行阶段
    /// </summary>

    std::vector<StageVo>& getStages();
    bool stagesIsSet() const;
    void unsetstages();
    void setStages(const std::vector<StageVo>& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string nodePartnerAlias_;
    bool nodePartnerAliasIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::vector<StageVo> stages_;
    bool stagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_DeployVo_H_
