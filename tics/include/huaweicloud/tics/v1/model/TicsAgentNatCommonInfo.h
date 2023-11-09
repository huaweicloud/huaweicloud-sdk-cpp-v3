
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNatCommonInfo_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNatCommonInfo_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可信节点网关公共信息
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsAgentNatCommonInfo
    : public ModelBase
{
public:
    TicsAgentNatCommonInfo();
    virtual ~TicsAgentNatCommonInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsAgentNatCommonInfo members

    /// <summary>
    /// 可信节点绑定的网关id
    /// </summary>

    std::string getNatId() const;
    bool natIdIsSet() const;
    void unsetnatId();
    void setNatId(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 可信节点绑定的CCE集群所在子网id
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 可信节点绑定的CCE集群所在虚拟私有云id
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::string natId_;
    bool natIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsAgentNatCommonInfo_H_
