
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BiactiveInstanceV3_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BiactiveInstanceV3_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 候选实例信息。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BiactiveInstanceV3
    : public ModelBase
{
public:
    BiactiveInstanceV3();
    virtual ~BiactiveInstanceV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BiactiveInstanceV3 members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例状态。 **取值范围：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 实例当前支持的操作。 **取值范围：** 不涉及。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 项目ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释：** 项目名称。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释：** 区域。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRegionCode() const;
    bool regionCodeIsSet() const;
    void unsetregionCode();
    void setRegionCode(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点数量。 **取值范围：** 不涉及。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// **参数解释：** vCPU数量。 **取值范围：** 不涉及。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// **参数解释：** 内存大小，单位GB。 **取值范围：** 不涉及。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// **参数解释：** 磁盘大小，单位GB。 **取值范围：** 不涉及。
    /// </summary>

    std::string getDiskSize() const;
    bool diskSizeIsSet() const;
    void unsetdiskSize();
    void setDiskSize(const std::string& value);

    /// <summary>
    /// **参数解释：** 已使用磁盘大小，单位GB。 **取值范围：** 不涉及。
    /// </summary>

    std::string getUsedDiskSize() const;
    bool usedDiskSizeIsSet() const;
    void unsetusedDiskSize();
    void setUsedDiskSize(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC CIDR。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string regionCode_;
    bool regionCodeIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string diskSize_;
    bool diskSizeIsSet_;
    std::string usedDiskSize_;
    bool usedDiskSizeIsSet_;
    std::string cidr_;
    bool cidrIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BiactiveInstanceV3_H_
