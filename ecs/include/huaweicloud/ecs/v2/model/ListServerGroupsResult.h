
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResult_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResult_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerGroupsResult
    : public ModelBase
{
public:
    ListServerGroupsResult();
    virtual ~ListServerGroupsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerGroupsResult members

    /// <summary>
    /// 云服务器组UUID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器组中包含的云服务器列表。
    /// </summary>

    std::vector<std::string>& getMembers();
    bool membersIsSet() const;
    void unsetmembers();
    void setMembers(const std::vector<std::string>& value);

    /// <summary>
    /// 云服务器组元数据。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云服务器组名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 与服务器组关联的策略名称列表。当前有效的策略名称为:  anti-affinity -此组中的服务器必须安排到不同的主机；  affinity -此组中的服务器必须安排在同一主机上;  soft-anti-affinity –如果可能, 应将此组中的服务器安排到不同的主机, 但如果无法实现, 则仍应安排它们, 而不是导致生成失败;  soft-affinity -如果可能, 应将此组中的服务器安排在同一主机上, 但如果无法实现, 则仍应安排它们, 而不是导致生成失败。
    /// </summary>

    std::vector<std::string>& getPolicies();
    bool policiesIsSet() const;
    void unsetpolicies();
    void setPolicies(const std::vector<std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<std::string> members_;
    bool membersIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> policies_;
    bool policiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerGroupsResult_H_
