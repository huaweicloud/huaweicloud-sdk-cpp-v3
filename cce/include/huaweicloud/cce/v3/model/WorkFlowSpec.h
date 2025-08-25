
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  WorkFlowSpec
    : public ModelBase
{
public:
    WorkFlowSpec();
    virtual ~WorkFlowSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkFlowSpec members

    /// <summary>
    /// 集群ID，资源唯一标识，创建成功后自动生成，填写无效
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// 本次集群升级的当前版本 
    /// </summary>

    std::string getClusterVersion() const;
    bool clusterVersionIsSet() const;
    void unsetclusterVersion();
    void setClusterVersion(const std::string& value);

    /// <summary>
    /// 本次集群升级的目标版本 
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::string clusterVersion_;
    bool clusterVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_WorkFlowSpec_H_
