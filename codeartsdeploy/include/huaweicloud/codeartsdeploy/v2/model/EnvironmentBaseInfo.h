
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentBaseInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentBaseInfo_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 环境基本信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  EnvironmentBaseInfo
    : public ModelBase
{
public:
    EnvironmentBaseInfo();
    virtual ~EnvironmentBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnvironmentBaseInfo members

    /// <summary>
    /// 环境名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 操作系统：windows|linux
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 环境id
    /// </summary>

    std::string getUuid() const;
    bool uuidIsSet() const;
    void unsetuuid();
    void setUuid(const std::string& value);

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 环境下主机数量
    /// </summary>

    int32_t getHostCount() const;
    bool hostCountIsSet() const;
    void unsethostCount();
    void setHostCount(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string os_;
    bool osIsSet_;
    std::string uuid_;
    bool uuidIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    int32_t hostCount_;
    bool hostCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentBaseInfo_H_
