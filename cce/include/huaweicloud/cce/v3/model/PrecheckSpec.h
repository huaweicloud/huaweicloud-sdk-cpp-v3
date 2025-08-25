
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/SkippedCheckItemList.h>
#include <string>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  PrecheckSpec
    : public ModelBase
{
public:
    PrecheckSpec();
    virtual ~PrecheckSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckSpec members

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterID() const;
    bool clusterIDIsSet() const;
    void unsetclusterID();
    void setClusterID(const std::string& value);

    /// <summary>
    /// 集群版本
    /// </summary>

    std::string getClusterVersion() const;
    bool clusterVersionIsSet() const;
    void unsetclusterVersion();
    void setClusterVersion(const std::string& value);

    /// <summary>
    /// 升级目标版本
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 跳过检查的项目列表
    /// </summary>

    std::vector<SkippedCheckItemList>& getSkippedCheckItemList();
    bool skippedCheckItemListIsSet() const;
    void unsetskippedCheckItemList();
    void setSkippedCheckItemList(const std::vector<SkippedCheckItemList>& value);


protected:
    std::string clusterID_;
    bool clusterIDIsSet_;
    std::string clusterVersion_;
    bool clusterVersionIsSet_;
    std::string targetVersion_;
    bool targetVersionIsSet_;
    std::vector<SkippedCheckItemList> skippedCheckItemList_;
    bool skippedCheckItemListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckSpec_H_
